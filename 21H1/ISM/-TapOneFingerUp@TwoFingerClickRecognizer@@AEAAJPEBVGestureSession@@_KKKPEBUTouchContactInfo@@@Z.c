/*
 * XREFs of ?TapOneFingerUp@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180186AC8
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801864C0 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1801865A4 (-ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x1801867B0 (-SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::TapOneFingerUp(
        TwoFingerClickRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  if ( a5 == 1 && TwoFingerClickRecognizer::ContactsWithinBoundingBox(this, 1u, a6) )
  {
    if ( (a3 & 4) != 0 )
      TwoFingerClickRecognizer::SaveTapInfo(this, a4);
  }
  else
  {
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  return 0LL;
}
