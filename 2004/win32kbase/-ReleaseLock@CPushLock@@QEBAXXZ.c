/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C009D788
 * Callers:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0001FE0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C0002310 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1C0010BD0 (-BoundPoint@CCursorClip@@QEAA-AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mous.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0010E90 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00126F4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0012820 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C00339D0 (-MarkInvalid@CInputSink@@UEAAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0033A90 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C004061C (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C009D750 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C009D8A0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00C7E10 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1C019FC80 (-EnableSpeedBump@CCursorClip@@QEAAX_N@Z.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C019FCC4 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C019FDAC (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C019FE00 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C019FE54 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C01AB440 (ChildProcessRootSynthesizedMouseInput.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C01AB564 (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01B0C58 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     ?IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z @ 0x1C01B7764 (-IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z.c)
 *     ?IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z @ 0x1C01B77EC (-IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01B7850 (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z @ 0x1C01B795C (-TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01B7A40 (-TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01BE8CC (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01F6AD0 (-GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx((char *)this + 8, 0LL);
  }
  KeLeaveCriticalRegion();
}
