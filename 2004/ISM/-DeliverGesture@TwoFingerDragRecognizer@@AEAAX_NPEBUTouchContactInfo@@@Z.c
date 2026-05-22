/*
 * XREFs of ?DeliverGesture@TwoFingerDragRecognizer@@AEAAX_NPEBUTouchContactInfo@@@Z @ 0x1801859D0
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180185800 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180185A28 (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TwoFingerDragRecognizer::DeliverGesture(
        TwoFingerDragRecognizer *this,
        char a2,
        const struct TouchContactInfo *a3)
{
  __int64 v3; // [rsp+8h] [rbp+8h]

  LODWORD(v3) = (*((_DWORD *)a3 + 11) + *((_DWORD *)a3 + 1)) / 2;
  HIDWORD(v3) = (*((_DWORD *)a3 + 12) + *((_DWORD *)a3 + 2)) / 2;
  *(_QWORD *)((char *)this + 52) = v3;
  if ( a2 )
    *(_QWORD *)((char *)this + 60) = v3;
  *((_WORD *)this + 8) = *((_WORD *)this + 8) & 0xFFFA | 1;
}
