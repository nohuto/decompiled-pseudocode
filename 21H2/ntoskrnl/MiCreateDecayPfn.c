/*
 * XREFs of MiCreateDecayPfn @ 0x1402E48A0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 * Callees:
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY MiCreateDecayPfn()
{
  PSLIST_ENTRY v0; // rdi
  unsigned int v1; // r9d
  unsigned __int64 v2; // rcx
  unsigned int v3; // r10d
  unsigned int *v4; // r8
  char *v5; // rbx
  __int64 i; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  ULONG_PTR v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 TransitionPte; // rax
  ULONG_PTR v13; // r8
  unsigned __int16 *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int8 v17; // bl
  _DWORD *v19; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // rax
  _DWORD *v27; // r9
  int v28; // edx
  int v29; // [rsp+68h] [rbp+10h] BYREF

  do
  {
    v0 = RtlpInterlockedPopEntrySList(&stru_140C52CF0);
    if ( v0 )
    {
      v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v0[0x22000000000LL] >> 4);
    }
    else
    {
      if ( ((__int64)BitMapHeader.Buffer & 4) != 0 )
      {
        v2 = 4LL;
        v1 = 32;
      }
      else
      {
        v1 = 0;
        v2 = 0LL;
      }
      v3 = v1 + BitMapHeader.SizeOfBitMap - 1;
      v4 = &BitMapHeader.Buffer[v2 / 0xFFFFFFFFFFFFFFFCuLL];
      if ( !BitMapHeader.SizeOfBitMap )
        return 0LL;
      v5 = (char *)&v4[2 * ((unsigned __int64)v1 >> 6)];
      for ( i = ((1LL << v1) - 1) | ~*(_QWORD *)v5; i == -1; i = ~*(_QWORD *)v5 )
      {
        v5 += 8;
        if ( v5 > (char *)&v4[2 * ((unsigned __int64)v3 >> 6)] )
          return 0LL;
      }
      _BitScanForward64(&v7, ~i);
      v8 = v7 + ((unsigned int)((v5 - (char *)v4) >> 3) << 6);
      if ( v8 > v3 )
        return 0LL;
      if ( v8 == -1 )
        return 0LL;
      v9 = v8 - v1;
      if ( v9 == -1 )
        return 0LL;
      v10 = qword_140C52CE0 + v9;
      v0 = (PSLIST_ENTRY)(48 * v10 - 0x220000000000LL);
      v11 = (unsigned __int8)MiLockPageInline(v0);
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C52D00);
      if ( _bittest((const signed __int32 *)BitMapHeader.Buffer, v9) )
      {
        _bittestandreset((signed __int32 *)BitMapHeader.Buffer, v9);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
        if ( v10 != -1LL )
        {
          TransitionPte = MiMakeTransitionPte(v10, 4LL);
          *(_QWORD *)(v13 + 16) = TransitionPte;
          *(_QWORD *)(v13 + 40) ^= (*(_QWORD *)(v13 + 40) ^ v10) & 0xFFFFFFFFFFLL;
          MiUnlinkPageFromListEx(v13);
        }
      }
      else
      {
        v10 = -1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
      }
      _InterlockedAnd64((volatile signed __int64 *)&v0[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v24 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
  }
  while ( v10 == -1LL );
  v14 = *(unsigned __int16 **)(qword_140C51F48 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  v15 = MiMakeTransitionPte(v10, 4LL);
  v16 = (*((_QWORD *)&v0[2].Next + 1) ^ v10) & 0xFFFFFFFFFFLL;
  v0[1].Next = (_SLIST_ENTRY *)v15;
  *((_QWORD *)&v0[2].Next + 1) ^= v16;
  v17 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 <= 0xFu )
  {
    v19 = KeGetCurrentPrcb()->SchedulerAssist;
    v19[5] |= (-1 << (v17 + 1)) & 4;
  }
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v0[1].Next + 2, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v29);
    while ( *((__int64 *)&v0[1].Next + 1) < 0 );
  }
  BYTE3(v0[2].Next) |= 8u;
  *((_QWORD *)&v0[2].Next + 1) ^= (*((_QWORD *)&v0[2].Next + 1) ^ ((unsigned __int64)*v14 << 43)) & 0x1FF80000000000LL;
  BYTE3(v0[2].Next) = BYTE3(v0[2].Next) & 0xF8 | 5;
  MiInsertPageInList((ULONG_PTR)v0, 4u);
  _InterlockedAnd64((volatile signed __int64 *)&v0[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 <= 0xFu && v17 <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v24 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
  }
  __writecr8(v17);
  return v0;
}
