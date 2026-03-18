/*
 * XREFs of ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0033A90
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1C0010BD0 (-BoundPoint@CCursorClip@@QEAA-AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mous.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0010E90 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00126F4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0012820 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C00339D0 (-MarkInvalid@CInputSink@@UEAAXXZ.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C0033A20 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1C019FC80 (-EnableSpeedBump@CCursorClip@@QEAAX_N@Z.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C019FCC4 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C019FDAC (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C019FE00 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C019FE54 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C01AB440 (ChildProcessRootSynthesizedMouseInput.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C01AB564 (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01B0C58 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01B7850 (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01BE8CC (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C009D788 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPushLock::AcquireLockExclusive(CPushLock *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
    return (unsigned int)-1073741816;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 8, 0LL);
  *((_QWORD *)this + 2) = KeGetCurrentThread();
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
  {
    CPushLock::ReleaseLock(this);
    return (unsigned int)-1073741816;
  }
  return v2;
}
