/*
 * XREFs of ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800B7B54
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012B84 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800940D0 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180015F54 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800178D0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x1800308C0 (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18003D064 (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::AddSolidBrushInstruction(
        CThumbnailAnimatedVisual *this,
        struct CRectangleGeometryProxy *a2,
        int a3,
        D3DVALUE a4)
{
  CBaseObject *v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  int v12; // eax
  CBaseObject *v14; // [rsp+20h] [rbp-48h] BYREF
  CBaseObject *v15; // [rsp+28h] [rbp-40h] BYREF
  struct _D3DCOLORVALUE v16; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]

  v7 = 0LL;
  v14 = 0LL;
  v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  v15 = 0LL;
  v9 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(v8, (__int64 *)&v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 237LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"clientcore\\windows\\dwm\\udwm\\thumbnailtransition.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  v16.a = a4;
  v16.r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v16.g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
  v16.b = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  v9 = CSolidColorLegacyMilBrushProxy::Update(v14, 1.0, &v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 245LL;
    goto LABEL_9;
  }
  v12 = CDrawGeometryInstruction::Create(v14, a2, &v15);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\thumbnailtransition.cpp",
      (const char *)(unsigned int)v12);
    v7 = v15;
    goto LABEL_11;
  }
  v7 = v15;
  v9 = CRenderDataVisual::AddInstruction(this, v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 248LL;
    goto LABEL_9;
  }
  v10 = 0;
LABEL_11:
  if ( v14 )
    CBaseObject::Release(v14);
  if ( v7 )
    CBaseObject::Release(v7);
  return v10;
}
