/*
 * XREFs of ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z @ 0x18008CB54
 * Callers:
 *     ?OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z @ 0x18008C780 (-OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x180087CAC (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800BC2CC (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 */

__int64 __fastcall CMagnifierControl::UpdateFullscreenBoundsFromSoftwareCursorOffset(
        CMagnifierControl *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  __int64 v3; // rax
  struct tagPOINT *v4; // r14
  double *v5; // rbp
  int v7; // ebx
  int v8; // esi
  LONG x; // eax
  LONG y; // r9d
  double v11; // xmm1_8
  CFullScreenMagnifier *v12; // rcx
  struct tagPOINT v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 6);
  v4 = (struct tagPOINT *)((char *)this + 184);
  v5 = (double *)((char *)this + 152);
  v7 = (int)(*(double *)(v3 + 32) * -1.0);
  v8 = (int)(*(double *)(v3 + 40) * -1.0);
  MagnifierExperienceHelper::GetFullScreenMagnifierOffset(
    *((MagnifierExperienceHelper **)this + 20),
    &v14,
    (const double *)a2,
    (const struct tagPOINT *)this + 19,
    a3);
  x = v14.x;
  y = v14.y;
  if ( __PAIR64__(v8, v7) != v14 )
  {
    v11 = *v5;
    v12 = (CFullScreenMagnifier *)*((_QWORD *)this + 6);
    *v4 = v14;
    CFullScreenMagnifier::OnSetDesktopMagnificationFactor(v12, v11, -x, -y);
  }
  return 0LL;
}
