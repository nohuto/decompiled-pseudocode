/*
 * XREFs of MiSectionCreated @ 0x140299C1C
 * Callers:
 *     MiCreateNewSection @ 0x1406A9EA0 (MiCreateNewSection.c)
 * Callees:
 *     MiReturnPfnReferenceCount @ 0x14024D52C (MiReturnPfnReferenceCount.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiInitializeTransitionPfn @ 0x14025C1CC (MiInitializeTransitionPfn.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferenceControlAreaPfn @ 0x140324CD0 (MiReferenceControlAreaPfn.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSectionCreated(__int64 a1, __int64 a2, __int64 *a3)
{
  volatile LONG *v3; // r14
  __int64 *v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rdi
  volatile LONG *v10; // rbp
  _QWORD *v11; // rdi
  __int64 v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 *v16; // r13
  unsigned __int64 v17; // r12
  ULONG_PTR v18; // r14
  __int64 v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int16 v22; // ax
  bool v23; // zf
  __int64 v24; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // edx
  unsigned int v33; // [rsp+20h] [rbp-68h]
  unsigned int v34; // [rsp+24h] [rbp-64h]
  int v35; // [rsp+28h] [rbp-60h]
  int v36; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int64 v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  __int64 v39; // [rsp+40h] [rbp-48h]
  __int64 *v41; // [rsp+A0h] [rbp+18h]
  char v42; // [rsp+A8h] [rbp+20h] BYREF

  v41 = a3;
  v3 = (volatile LONG *)(a2 + 72);
  v42 = 0;
  v5 = a3;
  v6 = a2;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    *(_DWORD *)(v6 + 56) |= 0x200u;
  v8 = *(__int64 **)(a1 + 40);
  if ( (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
  {
    v9 = v8[2];
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v24 = *(_QWORD *)(v9 + 80);
    v39 = 0LL;
    *(_QWORD *)(v6 + 80) = v24;
  }
  else
  {
    v9 = *v8;
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v39 = *(_QWORD *)(v9 + 80);
  }
  *(_QWORD *)(v6 + 64) = *(_QWORD *)(v9 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4C9C0);
  v11 = *(_QWORD **)(a1 + 40);
  if ( (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
  {
    v11[2] = v6;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v23 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    v13 = *(_QWORD *)(v6 + 136);
    v14 = *(_DWORD *)(v6 + 172);
    v38 = v13;
    v33 = v14;
    while ( 1 )
    {
      if ( !v5 )
        return v39;
      if ( (*((_BYTE *)v5 + 10) & 4) != 0 )
        goto LABEL_31;
      MmUnmapLockedPages((PVOID)v5[3], (PMDL)v5);
      v16 = v5 + 6;
      v17 = 0LL;
      v34 = *((_DWORD *)v5 + 4);
      v15 = v34;
      v35 = *((_DWORD *)v5 + 10) >> 12;
      v18 = v13 + 8LL * v34;
      v42 = 17;
      v37 = 0LL;
      if ( !v35 )
        goto LABEL_31;
      do
      {
        v19 = *v16;
        v20 = 48 * *v16 - 0x58000000000LL;
        if ( (unsigned int)v15 < v14 )
        {
          if ( (v18 & 0xFFFFFFFFFFFFF000uLL) != v17 )
          {
            if ( v17 )
            {
              LOBYTE(v15) = v42;
              MiUnlockProtoPoolPage(v37, v15);
            }
            while ( 1 )
            {
              v37 = MiLockProtoPoolPage(v18, &v42);
              if ( v37 )
                break;
              MmAccessFault(2uLL, v18);
            }
            v6 = a2;
            v17 = v18 & 0xFFFFFFFFFFFFF000uLL;
          }
          v21 = MiLockLeafPage((unsigned __int64 *)v18, 0LL);
          v22 = MI_READ_PTE_LOCK_FREE(v18);
          if ( v21 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else if ( (v22 & 0x400) != 0 )
          {
            v36 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v36);
              while ( *(__int64 *)(v20 + 24) < 0 );
            }
            MiInitializeTransitionPfn(v19, (__int64 *)v18, -1LL);
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
              MiReferenceControlAreaPfn(v6, 0LL, 1LL);
            goto LABEL_26;
          }
          MiReturnPfnReferenceCount(v20);
          *v16 = -1LL;
LABEL_26:
          v14 = v33;
          goto LABEL_27;
        }
        MiReturnPfnReferenceCount(48 * *v16 - 0x58000000000LL);
        *v16 = -1LL;
LABEL_27:
        v18 += 8LL;
        v15 = v34 + 1;
        ++v16;
        v23 = v35-- == 1;
        ++v34;
      }
      while ( !v23 );
      v5 = v41;
      if ( v17 )
      {
        LOBYTE(v15) = v42;
        MiUnlockProtoPoolPage(v37, v15);
      }
      v13 = v38;
LABEL_31:
      v5 = (__int64 *)*v5;
      v41 = v5;
    }
  }
  *v11 = v6;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  *(_DWORD *)(v6 + 56) &= ~2u;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v23 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  __writecr8(v7);
  KeAbPostRelease((ULONG_PTR)v11);
  return v39;
}
