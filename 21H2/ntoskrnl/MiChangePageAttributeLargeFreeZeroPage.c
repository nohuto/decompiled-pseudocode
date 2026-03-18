/*
 * XREFs of MiChangePageAttributeLargeFreeZeroPage @ 0x1405AEA7C
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x140358400 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     MiChangePageAttributeContiguous @ 0x14026873C (MiChangePageAttributeContiguous.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402CB2D0 (MiUnlinkNodeLargePageHelper.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLargePfnPromoteCandidate @ 0x140358810 (MiLargePfnPromoteCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiChangePageAttributeLargeFreeZeroPage(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rdi
  unsigned int v8; // r14d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  __int64 v19; // rsi
  __int64 v20; // rbx
  unsigned int PfnChannel; // eax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  BOOL v28; // ebx
  unsigned __int64 v29; // [rsp+30h] [rbp-58h] BYREF
  BOOL v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+3Ch] [rbp-4Ch]
  __int128 v32; // [rsp+40h] [rbp-48h]
  unsigned int v33; // [rsp+98h] [rbp+10h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v33 = a2;
  v34 = MiLargePageSizes[a2];
  v6 = (unsigned __int8)MiLockPageInline(a1);
  v7 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v8 = 0;
  if ( !MiLargePfnPromoteCandidate(v7, a1, a2) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
LABEL_18:
    __writecr8(v6);
    return v8;
  }
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 == a3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v13 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)v15);
        }
      }
    }
    v8 = 1;
    goto LABEL_18;
  }
  v19 = 24512LL * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2);
  v20 = v19 + *(_QWORD *)(v7 + 16);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v20 + 22848));
  PfnChannel = MiGetPfnChannel(a1);
  MiUnlinkNodeLargePageHelper((_QWORD *)v20, a1, v33, PfnChannel, 32);
  ++*(_DWORD *)(v19 + *(_QWORD *)(v7 + 16) + 22788);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 22848));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v13 = (v23[5] & 0xFFFF0007) == 0;
      v23[5] &= 0xFFFF0007;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)v22);
    }
  }
  __writecr8(2uLL);
  MiChangePageAttributeContiguous(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), v34, a3);
  v27 = *(_DWORD *)(a1 + 16);
  v33 = 0;
  v28 = (v27 & 0x3E0) != 0LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33, v24, v25, v26);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v29 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v32 = 0LL;
  v30 = v28;
  v31 = 5;
  LOBYTE(v32) = v6;
  MiInsertLargePageInNodeList((__int64)&v29);
  return 1LL;
}
