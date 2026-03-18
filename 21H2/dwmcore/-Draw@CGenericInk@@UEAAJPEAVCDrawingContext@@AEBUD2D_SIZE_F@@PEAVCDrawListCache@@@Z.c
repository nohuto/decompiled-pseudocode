/*
 * XREFs of ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802154FC
 * Callers:
 *     ?Draw@CGenericInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180105B90 (-Draw@CGenericInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800D5494 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D8514 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x1801A7C04 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A88E0 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x1801B3B14 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180215CD8 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPointAndSizeL@@@Z @ 0x1802631E4 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 */

__int64 __fastcall CGenericInk::Draw(
        CGenericInk *this,
        struct CD3DDevice **a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v5; // r14d
  int DirectInkWetStroke; // eax
  __int64 v8; // r8
  unsigned int v9; // edi
  __int64 v10; // rdx
  bool v11; // di
  struct IDCompositionDirectInkWetStrokePartner *v12; // rbx
  char v13; // r13
  __int64 v14; // r9
  float v15; // xmm4_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  int v19; // eax
  bool v21[8]; // [rsp+30h] [rbp-99h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v22; // [rsp+38h] [rbp-91h] BYREF
  _DWORD v23[4]; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v24[64]; // [rsp+50h] [rbp-79h] BYREF
  int v25; // [rsp+90h] [rbp-39h]
  __int128 v26; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v28; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v29; // [rsp+D0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v5 = 0;
  v22 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v22);
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke((CGenericInk *)((char *)this - 424), a2[5], &v22);
  v9 = DirectInkWetStroke;
  if ( DirectInkWetStroke < 0 )
  {
    v10 = 203LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)DirectInkWetStroke);
    goto LABEL_40;
  }
  v11 = 0;
  v12 = v22;
  v13 = 0;
  v21[0] = 0;
  if ( CCommonRegistryData::GammaBlendPencil )
  {
    DirectInkWetStroke = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, _DWORD *))(*(_QWORD *)v22 + 64LL))(
                           v22,
                           v23);
    v9 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v10 = 213LL;
      goto LABEL_31;
    }
    if ( !v23[0] || (v11 = 1, !CDrawingContext::IsHDRTarget((CDrawingContext *)a2)) )
      v11 = 0;
  }
  if ( *((_QWORD *)this - 42) )
    v5 = CSuperWetInkManager::TryRegisterSuperWetForDraw(
           *(CSuperWetInkManager **)(*((_QWORD *)this - 51) + 256LL),
           (CGenericInk *)((char *)this - 424),
           (struct CDrawingContext *)a2,
           v11,
           v21);
  if ( v11 )
  {
    v28 = 0LL;
    DirectInkWetStroke = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, __int128 *))(*(_QWORD *)v12 + 32LL))(
                           v12,
                           &v28);
    v9 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v10 = 231LL;
      goto LABEL_31;
    }
    v25 = 0;
    v27 = v28;
    v26 = 0LL;
    v29 = 0LL;
    CMatrixStack::Top((__int64)(a2 + 46), (__int64)v24);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v24, (__int64)&v27, (float *)&v26, v14);
    CDrawingContext::GetClipBoundsWorld((__int64)a2);
    v15 = *(float *)&v26;
    if ( *(float *)&v29 > *(float *)&v26 )
    {
      LODWORD(v26) = v29;
      v15 = *(float *)&v29;
    }
    v16 = *((float *)&v26 + 1);
    if ( *((float *)&v29 + 1) > *((float *)&v26 + 1) )
    {
      DWORD1(v26) = DWORD1(v29);
      v16 = *((float *)&v29 + 1);
    }
    v17 = *((float *)&v26 + 2);
    if ( *((float *)&v26 + 2) > *((float *)&v29 + 2) )
    {
      DWORD2(v26) = DWORD2(v29);
      v17 = *((float *)&v29 + 2);
    }
    v18 = *((float *)&v26 + 3);
    if ( *((float *)&v26 + 3) > *((float *)&v29 + 3) )
    {
      HIDWORD(v26) = HIDWORD(v29);
      v18 = *((float *)&v29 + 3);
    }
    if ( v17 <= v15 || v18 <= v16 )
      v26 = 0uLL;
    DirectInkWetStroke = AlignRectFToPointAndSizeL(&v26, &v27);
    v9 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v10 = 250LL;
      goto LABEL_31;
    }
    if ( SDWORD2(v27) > 0 && SHIDWORD(v27) > 0 )
    {
      DirectInkWetStroke = CDrawingContext::PushGammaBlendLayer(a2, (const struct MilPointAndSizeL *)&v27);
      v9 = DirectInkWetStroke;
      if ( DirectInkWetStroke < 0 )
      {
        v10 = 254LL;
        goto LABEL_31;
      }
      v13 = 1;
    }
  }
  dword_1803D3144 |= 1u;
  LOBYTE(v8) = !v21[0];
  v19 = (*((__int64 (__fastcall **)(char *, struct IDCompositionDirectInkWetStrokePartner *, __int64))a2[2] + 8))(
          (char *)a2 + 16,
          v12,
          v8);
  v9 = v19;
  if ( v19 >= 0 )
  {
    if ( v5 >= 0 )
    {
      v9 = 0;
      **((_DWORD **)this - 19) = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x112,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v5);
      v9 = v5;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v19);
  }
  if ( v13 )
    CDrawingContext::PopLayerInternal((__int64)a2);
LABEL_40:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  return v9;
}
