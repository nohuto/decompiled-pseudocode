/*
 * XREFs of ?PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z @ 0x180184644
 * Callers:
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x180184448 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?OnTouchDown@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x18018451C (-OnTouchDown@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?OnTouchUp@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801845AC (-OnTouchUp@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ClickRecognizer::PointsWithinThreshold(
        ClickRecognizer *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3,
        unsigned int a4)
{
  return abs32(a2->x - a3->x) <= a4 && abs32(a2->y - a3->y) <= a4;
}
