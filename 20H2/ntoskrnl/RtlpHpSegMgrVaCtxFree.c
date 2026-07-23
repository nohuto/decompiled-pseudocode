/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x1405931E0
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x1403893FC (RtlpHpSegMgrRelease.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402D4324 (RtlpHpAcquireLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpQueryVA @ 0x1403090DC (RtlpHpQueryVA.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int128 v3; // xmm0
  unsigned __int64 v7; // r15
  unsigned __int16 *v8; // rbx
  ULONG_PTR v9; // rbp
  unsigned __int64 v10; // rdi
  KIRQL v11; // al
  unsigned __int16 *v12; // r9
  unsigned __int64 v13; // r14
  int v14; // r10d
  int v15; // eax
  unsigned __int64 v16; // r8
  unsigned __int16 *v17; // rcx
  unsigned __int16 *v18; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v21; // si
  unsigned int v22; // edx
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v30; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v33[4]; // [rsp+30h] [rbp-48h] BYREF
  int v34; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int16 *v35; // [rsp+90h] [rbp+18h] BYREF

  v3 = *(_OWORD *)(a1 + 40);
  v35 = 0LL;
  v7 = a2 & 0xFFFFFFFFFFE00000uLL;
  v8 = 0LL;
  v33[0] = v3;
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, v33, &v35, 0LL);
  v9 = a1 + 112;
  v10 = (a2 - v7) / *a3;
  v11 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 112), *(_DWORD *)(a1 + 40) & 1);
  v12 = v35;
  v13 = v11;
  v14 = (unsigned __int16)(v35[1] ^ (1 << v10));
  v15 = 0x200000uLL / *a3;
  v35[1] = v14;
  v16 = (unsigned __int64)*v12 >> 15;
  if ( v14 == (1 << v15) - 1 )
  {
    if ( *((_QWORD *)v12 + 1) != -1LL )
    {
      while ( 1 )
      {
        v17 = *(unsigned __int16 **)(a1 + 8 * v16 + 120);
        if ( !v17 )
          NT_ASSERT("Link != ((void *)0)");
        *(_QWORD *)(a1 + 8 * v16 + 120) = *(_QWORD *)v17;
        if ( v17 == v12 + 4 )
          break;
        *(_QWORD *)v17 = v8;
        v8 = v17;
      }
      while ( 1 )
      {
        v18 = v8;
        if ( !v8 )
          break;
        v8 = *(unsigned __int16 **)v8;
        *(_QWORD *)v18 = *(_QWORD *)(a1 + 8 * v16 + 120);
        *(_QWORD *)(a1 + 8 * v16 + 120) = v18;
      }
    }
  }
  else
  {
    if ( ((v14 - 1) & v14) == 0 )
    {
      *((_QWORD *)v12 + 1) = *(_QWORD *)(a1 + 8 * v16 + 120);
      *(_QWORD *)(a1 + 8 * v16 + 120) = v12 + 4;
    }
    v7 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = (v30 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v30;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    v34 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 112) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v21 = ++CurrentThread->AbAllocationRegionCount;
    v22 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v24 = !_BitScanReverse((unsigned int *)&v25, v22);
      if ( v24 )
        goto LABEL_25;
      v23 = (__int64)&CurrentThread->LockEntries[v25];
      v22 &= ~(1 << v25);
      if ( (*(_BYTE *)(v23 + 26) & 1) != 0
        && (*(_DWORD *)(v23 + 32) & 1) == 0
        && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v23 + 40) == SessionId )
      {
        *(_BYTE *)(v23 + 26) &= ~1u;
        if ( *(_QWORD *)(v23 + 32) )
          break;
      }
    }
    if ( !v23 )
    {
LABEL_25:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v9, SessionId, 0LL);
      goto LABEL_32;
    }
    *(_BYTE *)(v23 + 32) |= 2u;
    if ( *(__int64 *)(v23 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
    v34 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
    *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v23 + 25) &= ~1u;
    *(_QWORD *)(v23 + 32) = 0LL;
    v26 = (signed __int64)(v23 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v21 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v26;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
LABEL_32:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v9, &v34);
    v24 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v24 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v27);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v7 )
    *a3 = 0x200000LL;
  return v7;
}
