/*
 * XREFs of IommuBeginDeviceReset @ 0x1404D7D50
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall IommuBeginDeviceReset(KSPIN_LOCK *a1, _DWORD *a2)
{
  KSPIN_LOCK v2; // rax
  char v3; // r15
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  KSPIN_LOCK *v9; // rbp
  __int64 **v10; // rdi
  __int64 *i; // r8
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v19; // bp
  unsigned int v20; // r8d
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  int v27; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1[3];
  v3 = 0;
  if ( HalpHvIommu )
    return 3221225659LL;
  v6 = v2 + 384;
  if ( !*(_QWORD *)(v2 + 312) || !*(_QWORD *)(v2 + 320) )
    return 3221225659LL;
  ExAcquirePushLockExclusiveEx(v2 + 384, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v9 = a1 + 2;
  KxAcquireSpinLock(a1 + 2);
  v10 = (__int64 **)(a1 + 11);
  for ( i = *v10; i != (__int64 *)v10; i = (__int64 *)*i )
  {
    if ( !a2 || *(_DWORD *)(i[4] + 16) == *a2 )
    {
      *((_BYTE *)i + 40) = 1;
      v3 = 1;
    }
  }
  KxReleaseSpinLock(v9);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  v27 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v19 = ++CurrentThread->AbAllocationRegionCount;
  v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v16 )
      goto LABEL_33;
    v21 = (__int64)&CurrentThread->LockEntries[v22];
    v20 &= ~(1 << v22);
    if ( (*(_BYTE *)(v21 + 26) & 1) != 0
      && (*(_DWORD *)(v21 + 32) & 1) == 0
      && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v21 + 40) == SessionId )
    {
      *(_BYTE *)(v21 + 26) &= ~1u;
      if ( *(_QWORD *)(v21 + 32) )
        break;
    }
  }
  if ( !v21 )
  {
LABEL_33:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, SessionId, 0LL);
    goto LABEL_40;
  }
  *(_BYTE *)(v21 + 32) |= 2u;
  if ( *(__int64 *)(v21 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
  v23 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
  v24 = *(_DWORD *)(v21 + 88) & 0xFFFE0000;
  *(_BYTE *)(v21 + 25) &= ~1u;
  v27 = v23;
  *(_DWORD *)(v21 + 88) = v24;
  *(_QWORD *)(v21 + 32) = 0LL;
  v25 = (signed __int64)(v21 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v19 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v25;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
LABEL_40:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v6, (unsigned int *)&v27);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v3 == 0 ? 0xC0000225 : 0;
}
