/*
 * XREFs of ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x180183A28
 * Callers:
 *     ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x1801836E8 (-AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z.c)
 *     ?RecordPoints@PinchStretchRecognizer@@AEAAXPEBUtagPOINT@@0@Z @ 0x180183EA4 (-RecordPoints@PinchStretchRecognizer@@AEAAXPEBUtagPOINT@@0@Z.c)
 *     ?GetInteresting@TwoFingerGestureRecognizer@@UEAA?AW4GestureType@@XZ @ 0x1801854C0 (-GetInteresting@TwoFingerGestureRecognizer@@UEAA-AW4GestureType@@XZ.c)
 *     ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1801860E4 (-ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x1801862F0 (-SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall GestureRecognizer::MeetsThreshold(GestureRecognizer *this, const struct tagPOINT *a2, unsigned int a3)
{
  return abs32(a2->x) >= a3 || abs32(a2->y) >= a3;
}
