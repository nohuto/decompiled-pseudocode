/*
 * XREFs of ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C0186580
 * Callers:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01865AC (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C018BA40 (-FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C018F6D0 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C018FDA0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0190CD0 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0191B5C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C019388C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTouchProcessor::CTouchProcessorLockShared(PERESOURCE *this)
{
  return ExIsResourceAcquiredSharedLite(this[5]) != 0;
}
