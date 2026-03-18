/*
 * XREFs of ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C3CC8
 * Callers:
 *     ?Draw@CGenericInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EF370 (-Draw@CGenericInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003BFE0 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FD98 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1920 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E5E34 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180176F20 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x1801799E0 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180196B04 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801971AC (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1801C4444 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPointAndSizeL@@@Z @ 0x180211454 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 */

__int64 __fastcall CGenericInk::Draw(
        CGenericInk *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int DirectInkWetStroke; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  struct IDCompositionDirectInkWetStrokePartner *v8; // rbx
  bool v9; // r15
  bool v10; // di
  int v11; // esi
  int v12; // eax
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  int v17; // eax
  bool v19[8]; // [rsp+30h] [rbp-89h] BYREF
  CDrawingContext *v20; // [rsp+38h] [rbp-81h]
  struct IDCompositionDirectInkWetStrokePartner *v21; // [rsp+40h] [rbp-79h] BYREF
  int v22; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v23[64]; // [rsp+50h] [rbp-69h] BYREF
  int v24; // [rsp+90h] [rbp-29h]
  __int128 v25; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v26; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v27; // [rsp+C0h] [rbp+7h] BYREF
  __int128 v28; // [rsp+D0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v21 = 0LL;
  v20 = a2;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v21);
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke(
                         (CGenericInk *)((char *)this - 392),
                         *((struct CD3DDevice **)v20 + 5),
                         &v21);
  v6 = DirectInkWetStroke;
  if ( DirectInkWetStroke < 0 )
  {
    v7 = 184LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)DirectInkWetStroke);
    goto LABEL_41;
  }
  v8 = v21;
  v9 = 0;
  v10 = 0;
  v19[0] = 0;
  v19[1] = 0;
  if ( CCommonRegistryData::GammaBlendPencil )
  {
    DirectInkWetStroke = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, int *))(*(_QWORD *)v21 + 64LL))(
                           v21,
                           &v22);
    v6 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v7 = 194LL;
      goto LABEL_32;
    }
    v10 = v22 && CDrawingContext::IsHDRTarget(v20);
  }
  v11 = 0;
  if ( *((_QWORD *)this - 39) )
  {
    v12 = CSuperWetInkManager::TryRegisterSuperWetForDraw(
            *(CSuperWetInkManager **)(*((_QWORD *)this - 47) + 128LL),
            (struct CSuperWetSource *)(((unsigned __int64)this - 320) & -(__int64)(this != (CGenericInk *)392)),
            v20,
            v10,
            v19);
    v9 = v19[0];
    v11 = v12;
  }
  if ( v10 )
  {
    v27 = 0LL;
    DirectInkWetStroke = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, __int128 *))(*(_QWORD *)v8 + 32LL))(
                           v8,
                           &v27);
    v6 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v7 = 212LL;
      goto LABEL_32;
    }
    v24 = 0;
    v26 = v27;
    v25 = 0LL;
    v28 = 0LL;
    CDrawingContext::GetWorldTransform(v20, (struct CMILMatrix *)v23);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v23, (__int64)&v26, (float *)&v25);
    CDrawingContext::GetClipBoundsWorld((__int64)v20);
    v13 = *(float *)&v25;
    if ( *(float *)&v28 > *(float *)&v25 )
    {
      LODWORD(v25) = v28;
      v13 = *(float *)&v28;
    }
    v14 = *((float *)&v25 + 1);
    if ( *((float *)&v28 + 1) > *((float *)&v25 + 1) )
    {
      DWORD1(v25) = DWORD1(v28);
      v14 = *((float *)&v28 + 1);
    }
    v15 = *((float *)&v25 + 2);
    if ( *((float *)&v25 + 2) > *((float *)&v28 + 2) )
    {
      DWORD2(v25) = DWORD2(v28);
      v15 = *((float *)&v28 + 2);
    }
    v16 = *((float *)&v25 + 3);
    if ( *((float *)&v25 + 3) > *((float *)&v28 + 3) )
    {
      HIDWORD(v25) = HIDWORD(v28);
      v16 = *((float *)&v28 + 3);
    }
    if ( v15 <= v13 || v16 <= v14 )
      v25 = 0uLL;
    DirectInkWetStroke = AlignRectFToPointAndSizeL(&v25, &v26);
    v6 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v7 = 231LL;
      goto LABEL_32;
    }
    if ( SDWORD2(v26) > 0 && SHIDWORD(v26) > 0 )
    {
      DirectInkWetStroke = CDrawingContext::PushGammaBlendLayer(
                             (struct IDeviceTarget **)v20,
                             (const struct MilPointAndSizeL *)&v26);
      v6 = DirectInkWetStroke;
      if ( DirectInkWetStroke < 0 )
      {
        v7 = 235LL;
        goto LABEL_32;
      }
      v19[1] = 1;
    }
  }
  dword_180345274 |= 1u;
  v17 = CDrawingContext::DrawGenericInk((CDrawingContext *)((char *)v20 + 16), v8, !v9);
  v6 = v17;
  if ( v17 >= 0 )
  {
    if ( v11 >= 0 )
    {
      **((_DWORD **)this - 18) = 0;
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFF,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v11);
      v6 = v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v17);
  }
  if ( v19[1] )
    CDrawingContext::PopLayerInternal((__int64)v20);
LABEL_41:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
  return v6;
}
