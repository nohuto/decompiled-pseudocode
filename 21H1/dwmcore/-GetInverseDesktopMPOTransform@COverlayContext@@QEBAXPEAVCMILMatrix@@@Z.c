/*
 * XREFs of ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x180180654
 * Callers:
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18017C81C (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800D5F58 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180180730 (-GetVirtualModeClip@COverlayContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 */

void __fastcall COverlayContext::GetInverseDesktopMPOTransform(COverlayContext *this, struct CMILMatrix *a2)
{
  _DWORD *v4; // rax
  int v5; // edx
  float *VirtualModeClip; // rax
  float v7[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 11033) )
  {
    v4 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 168LL))(*(_QWORD *)this);
    v7[0] = 0.0;
    v7[1] = 0.0;
    v5 = v4[2] - *v4;
    LODWORD(v4) = v4[3] - v4[1];
    v7[2] = (float)v5;
    v7[3] = (float)(int)v4;
    VirtualModeClip = (float *)COverlayContext::GetVirtualModeClip(this, v8);
    CMILMatrix::InferAffineMatrix((__int64)a2, VirtualModeClip, v7);
  }
  else
  {
    *(_QWORD *)a2 = 1065353216LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_DWORD *)a2 + 4) = 0;
    *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a2 + 28) = 0LL;
    *((_DWORD *)a2 + 9) = 0;
    *((_QWORD *)a2 + 5) = 1065353216LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    *((_DWORD *)a2 + 15) = 1065353216;
    *((_WORD *)a2 + 32) = 32085;
  }
}
