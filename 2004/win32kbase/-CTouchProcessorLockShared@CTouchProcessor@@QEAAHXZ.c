/*
 * XREFs of ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C0188AC0
 * Callers:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C0188AEC (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C018DF60 (-FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C0191BF0 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01922C0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01931F8 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C019408C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C0195DBC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTouchProcessor::CTouchProcessorLockShared(PERESOURCE *this)
{
  return ExIsResourceAcquiredSharedLite(this[5]) != 0;
}
