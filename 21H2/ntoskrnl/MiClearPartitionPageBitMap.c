/*
 * XREFs of MiClearPartitionPageBitMap @ 0x140561454
 * Callers:
 *     MiInsertPartitionPages @ 0x140562540 (MiInsertPartitionPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiActOnPartitionNodePages @ 0x1405608A0 (MiActOnPartitionNodePages.c)
 *     MiFreePartitionTree @ 0x14056233C (MiFreePartitionTree.c)
 */

char __fastcall MiClearPartitionPageBitMap(unsigned __int64 a1, _QWORD **a2)
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
  _DWORD *v21; // r9
  unsigned int v22; // r8d
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 v28; // [rsp+30h] [rbp-40h] BYREF
  __int64 v29; // [rsp+40h] [rbp-30h]
  __int64 v30; // [rsp+48h] [rbp-28h] BYREF
  __int128 v31; // [rsp+50h] [rbp-20h]
  __int64 v32; // [rsp+60h] [rbp-10h]
  int v33; // [rsp+B8h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v32 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v28 = a1;
  v31 = 0LL;
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
    MiActOnPartitionNodePages(v11, 7u, (__int16 **)&v28);
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
  MiFreePartitionTree(a1, &v30, 0LL, 1LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  v33 = 0;
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  else
    SessionId = -1;
  --v18->SpecialApcDisable;
  v20 = ++v18->AbAllocationRegionCount;
  v21 = (_DWORD *)(v5 & 0x7FFFFFFFFFFFFFFCLL);
  v22 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v24, v22);
    if ( v17 )
      goto LABEL_32;
    v23 = (__int64)&v18->LockEntries[v24];
    v22 &= ~(1 << v24);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v21
      && *(_DWORD *)(v23 + 40) == SessionId )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
        break;
    }
  }
  if ( !v23 )
  {
LABEL_32:
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, v5, SessionId, 0LL);
    goto LABEL_39;
  }
  *(_BYTE *)(v23 + 32) |= 2u;
  if ( *(__int64 *)(v23 + 32) < 0 )
    KiAbEntryRemoveFromTree(v23);
  v33 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
  *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v23 + 25) &= ~1u;
  *(_QWORD *)(v23 + 32) = 0LL;
  v25 = (signed __int64)(v23 - (unsigned __int64)v18->LockEntries) / 96;
  if ( v20 == 1 )
    v18->AbEntrySummary |= 1 << v25;
  else
    _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v25);
LABEL_39:
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18, v5, (__int64)&v33, v21);
  v17 = v18->SpecialApcDisable++ == -1;
  if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v26);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
