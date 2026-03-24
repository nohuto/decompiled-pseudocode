/*
 * XREFs of LinkNodeRestoreHardwareState @ 0x1C006BF7C
 * Callers:
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C0051320 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C006C060 (LinkNodepRestoreIrqRoutingWorker.c)
 */

__int64 __fastcall LinkNodeRestoreHardwareState(__int64 a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx

  if ( (*(unsigned __int8 (**)(void))(PmHalDispatchTable + 32))() )
    return 0LL;
  if ( (__int64 *)LinkNodeListHead == &LinkNodeListHead )
  {
    (*(void (**)(void))(PmHalDispatchTable + 40))();
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x41706341u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  *((_DWORD *)PoolWithTag + 6) = 0;
  *((_DWORD *)PoolWithTag + 7) = -1;
  PoolWithTag[4] = ACPIDeviceCompleteGenericPhase;
  PoolWithTag[5] = a2;
  *PoolWithTag = LinkNodeListHead - 56;
  KeInitializeSpinLock(PoolWithTag + 2);
  return LinkNodepRestoreIrqRoutingWorker(*(_QWORD *)(*v5 + 560LL), 0LL, 0LL, v5);
}
