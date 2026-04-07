/*
 * XREFs of ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A79AC
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000EA70 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800062A0 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180016EB4 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18002C028 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x180032AE8 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x180032B1C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x18003D728 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DWithClip(CAnimatedTransitionVisual *this)
{
  LONG v1; // eax
  CBaseObject *v2; // rbx
  __m128i v3; // xmm0
  __m128i v5; // xmm1
  LONG v6; // eax
  int v7; // r14d
  int v8; // r15d
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v12; // eax
  struct CDrawTileImageInstruction *v14; // [rsp+30h] [rbp-50h] BYREF
  CBaseObject *v15; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v1 = *((_DWORD *)this + 236);
  v2 = 0LL;
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 212));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 204));
  v14 = 0LL;
  rc.left = 0;
  rc.top = 0;
  rc.right = v1;
  v6 = *((_DWORD *)this + 237);
  v15 = 0LL;
  rc.bottom = v6;
  v7 = RoundToNearestInt((float)(_mm_cvtepi32_ps(v3).m128_f32[0] + *((float *)this + 186)) - _mm_cvtepi32_ps(v5).m128_f32[0]);
  v8 = RoundToNearestInt((float)((float)*((int *)this + 213) + *((float *)this + 187)) - (float)*((int *)this + 205));
  OffsetRect(&rc, v7, v8);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  v9 = CDrawTileImageInstruction::Create(
         *((struct CBaseImageProxy **)this + 72),
         &rc,
         (const struct tagPOINT *)this + 117,
         *((float *)this + 184),
         &v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1158LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  v9 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1159LL;
    goto LABEL_9;
  }
  rcSrc2 = (RECT)*((_OWORD *)this + 51);
  OffsetRect(&rcSrc2, v7, v8);
  IntersectRect(&rcDst, (const RECT *)this + 52, &rcSrc2);
  v12 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v15);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x491,
      (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v12);
    v2 = v15;
    goto LABEL_11;
  }
  v2 = v15;
  v9 = CVisualProxy::SetClip(*((CVisualProxy **)this + 3), v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1172LL;
    goto LABEL_9;
  }
  v10 = 0;
LABEL_11:
  if ( v2 )
    CBaseObject::Release(v2);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  return v10;
}
