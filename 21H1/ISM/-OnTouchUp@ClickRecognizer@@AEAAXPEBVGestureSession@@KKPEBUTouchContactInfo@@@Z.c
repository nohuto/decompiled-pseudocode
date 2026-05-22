/*
 * XREFs of ?OnTouchUp@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x180184A6C
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180184540 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z @ 0x180184B04 (-PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z.c)
 */

void __fastcall ClickRecognizer::OnTouchUp(
        ClickRecognizer *this,
        const struct GestureSession *a2,
        __int64 a3,
        __int64 a4,
        const struct TouchContactInfo *a5)
{
  __int16 v5; // r11
  ClickRecognizer *v6; // r10
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = *((_WORD *)this + 8);
  v6 = this;
  v7 = (struct tagPOINT)*((_QWORD *)a2 + 149);
  if ( (v5 & 2) != 0
    || !ClickRecognizer::PointsWithinThreshold(
          this,
          &v7,
          (const struct tagPOINT *)((char *)a5 + 4),
          *((unsigned __int16 *)this + 18))
    || (unsigned int)(((int)(*((_DWORD *)v6 + 5) << 28) >> 28) - 1) > 2
    || (v5 & 1) != 0 )
  {
    *((_WORD *)v6 + 8) = v5 & 0xFF7F;
  }
  else
  {
    *((_WORD *)v6 + 8) = v5 | 4;
    *(_QWORD *)((char *)v6 + 44) = *((_QWORD *)v6 + 14);
    *((_WORD *)v6 + 8) |= 0x80u;
  }
  *((_QWORD *)v6 + 15) = *((_QWORD *)v6 + 14);
  ClickRecognizer::CancelTapAndHold(v6);
}
