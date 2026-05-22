/*
 * XREFs of ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x180184C80
 * Callers:
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x180184A8C (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 *     ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180185BEC (-DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall GestureRecognizer::ExceedsThreshold(
        GestureRecognizer *this,
        const struct tagPOINT *a2,
        unsigned int a3)
{
  bool result; // al

  if ( abs32(a2->x) > a3 )
    return 1;
  if ( abs32(a2->y) > a3 )
    return 1;
  result = 0;
  if ( !a3 )
    return 1;
  return result;
}
