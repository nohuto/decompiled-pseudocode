/*
 * XREFs of ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801AFF60
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCVisual@@@Z @ 0x180004728 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180004DB0 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x180047450 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180096690 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800D5878 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1800D59F0 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801B0B14 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801F7408 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801FA40C (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBspPolygonList(CDrawingContext *this, struct CVisual *a2, struct CVisual *a3)
{
  unsigned int v5; // ebx
  int v6; // r15d
  __int64 i; // r12
  _QWORD *BspPolygonList; // rax
  const struct CVisual *v9; // r11
  const struct CVisual *v10; // rdx
  __int64 v11; // rsi
  char *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  const struct CMILMatrix *TopByReference; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  const struct CMILMatrix *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  __int128 *v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  struct ID2D1PathGeometry *v31; // [rsp+48h] [rbp-99h] BYREF
  struct CVisualTree *v32; // [rsp+50h] [rbp-91h] BYREF
  _OWORD v33[4]; // [rsp+58h] [rbp-89h] BYREF
  int v34; // [rsp+98h] [rbp-49h]
  _BYTE v35[64]; // [rsp+A8h] [rbp-39h] BYREF
  int v36; // [rsp+E8h] [rbp+7h]
  unsigned int BspPolygonListCount; // [rsp+160h] [rbp+7Fh]

  v5 = 0;
  v6 = 0;
  BspPolygonListCount = CVisual::GetBspPolygonListCount(a2);
  if ( !BspPolygonListCount )
    return v5;
  for ( i = 0LL; ; i += 8LL )
  {
    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList((__int64)a2);
    v10 = v9;
    v11 = *(_QWORD *)(i + *BspPolygonList);
    v12 = *(char **)(v11 + 216);
    if ( v12 != (char *)a2 )
      v10 = (const struct CVisual *)*((_QWORD *)v12 + 11);
    if ( !*(_BYTE *)(v11 + 240) && *((_DWORD *)this + 79) )
      goto LABEL_16;
    if ( !CVisual::IsSimple3DRootOrHasEffects(*(CVisual **)(v11 + 216), v10) )
    {
      CDrawingContext::DrawPolygon(this, (struct CPolygon *)v11);
      goto LABEL_16;
    }
    v31 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(*g_DeviceManager + 80LL))(
            g_DeviceManager,
            &v31);
    v5 = v13;
    if ( v13 < 0 )
      break;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 368));
    v5 = CPolygon::D2DGeometryFromPolygon((CPolygon *)v11, v31, TopByReference);
    if ( (v5 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v5, 0x4E7u);
      goto LABEL_22;
    }
    v17 = CDrawingContext::PushD2DLayer(this, v12, 0LL, (__int64)v31, 0LL, 1.0, 0, 0);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x4E9u);
      goto LABEL_22;
    }
    v19 = *(_OWORD *)(v11 + 160);
    v34 = *(_DWORD *)(v11 + 208);
    v20 = *(_OWORD *)(v11 + 144);
    v33[1] = v19;
    v21 = *(_OWORD *)(v11 + 192);
    LOBYTE(v34) = v34 & 0xF0 | 3;
    v33[0] = v20;
    v33[3] = v21;
    v33[2] = 0LL;
    v22 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 368));
    CMILMatrix::Multiply((CMILMatrix *)v33, v22, v23, v24);
    v36 = 0;
    CVisual::GetRootTransform((CVisual *)v12, (struct CMILMatrix *)v35, 0, 0);
    CMILMatrix::Multiply((CMILMatrix *)v35, (const struct CMILMatrix *)v33, v25, v26);
    v32 = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v32);
    CSubVisualTree::Create((struct CVisual *)v12, &v32);
    v27 = (__int128 *)((char *)v32 + 72);
    if ( !*((_QWORD *)v32 + 8) )
      v27 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v28 = CDrawingContext::DrawSubVisualTree((__int64)this, v32, (__int64)v27, (const struct CMILMatrix *)v35);
    v5 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0x500u);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
      CDrawingContext::PopLayer(this);
      return v5;
    }
    CDrawingContext::PopLayer(this);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
LABEL_16:
    if ( ++v6 >= BspPolygonListCount )
      return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x4E4u);
LABEL_22:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
  return v5;
}
