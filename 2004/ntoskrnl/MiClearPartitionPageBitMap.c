/*
 * XREFs of MiClearPartitionPageBitMap @ 0x14055BFB4
 * Callers:
 *     MiInsertPartitionPages @ 0x14055D0A0 (MiInsertPartitionPages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiActOnPartitionNodePages @ 0x14055B400 (MiActOnPartitionNodePages.c)
 *     MiFreePartitionTree @ 0x14055CE9C (MiFreePartitionTree.c)
 */

__int64 __fastcall MiClearPartitionPageBitMap(unsigned __int64 a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v5; // rsi
  KIRQL v6; // al
  _QWORD *v7; // rcx
  _QWORD *v8; // rdi
  unsigned __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  struct _KTHREAD *v18; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v20; // r14
  unsigned int v21; // r8d
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int128 v27; // [rsp+30h] [rbp-40h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h]
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  __int128 v30; // [rsp+50h] [rbp-20h]
  __int64 v31; // [rsp+60h] [rbp-10h]
  int v32; // [rsp+B8h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v31 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v27 = a1;
  v30 = 0LL;
  v5 = a1 + 192;
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v7 = *a2;
  v8 = 0LL;
  v9 = v6;
  while ( v7 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
  }
  while ( v8 )
  {
    v10 = (_QWORD *)v8[1];
    v11 = (__int64)v8;
    v12 = v8;
    if ( v10 )
    {
      do
      {
        v8 = v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
    else
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v8 || (_QWORD *)*v8 == v12 )
          break;
        v12 = v8;
      }
    }
    MiActOnPartitionNodePages(v11, 7u, (__int16 **)&v27);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  MiFreePartitionTree(a1, &v29, 0LL, 1LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  v32 = 0;
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  else
    SessionId = -1;
  --v18->SpecialApcDisable;
  v20 = ++v18->AbAllocationRegionCount;
  v21 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v23, v21);
    if ( v17 )
      goto LABEL_32;
    v22 = (__int64)&v18->LockEntries[v23];
    v21 &= ~(1 << v23);
    if ( (*(_BYTE *)(v22 + 26) & 1) != 0
      && (*(_DWORD *)(v22 + 32) & 1) == 0
      && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v22 + 40) == SessionId )
    {
      *(_BYTE *)(v22 + 26) &= ~1u;
      if ( *(_QWORD *)(v22 + 32) )
        break;
    }
  }
  if ( !v22 )
  {
LABEL_32:
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, v5, SessionId, 0LL);
    goto LABEL_39;
  }
  *(_BYTE *)(v22 + 32) |= 2u;
  if ( *(__int64 *)(v22 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
  v32 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
  *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v22 + 25) &= ~1u;
  *(_QWORD *)(v22 + 32) = 0LL;
  v24 = (signed __int64)(v22 - (unsigned __int64)v18->LockEntries) / 96;
  if ( v20 == 1 )
    v18->AbEntrySummary |= 1 << v24;
  else
    _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v24);
LABEL_39:
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18, v5, &v32);
  v17 = v18->SpecialApcDisable++ == -1;
  if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v25);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
