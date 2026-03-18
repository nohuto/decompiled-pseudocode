/*
 * XREFs of ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x18003FC68
 * Callers:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x18003FB3C (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x18003E160 (-CreateGradientStopCollection@CD2DContext@@QEAAJV-$span@$$CBUD2D1_GRADIENT_STOP@@$0-0@gsl@@W4D2D.c)
 *     ?Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z @ 0x18003E1F8 (-Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18003E2AC (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 *     ?GenerateGradientPixels@CD2DFactory@@QEAAJPEBUD2D1_GRADIENT_STOP@@IW4D2D1_GRADIENT_PIXEL_USAGE@@W4D2D1_COLOR_SPACE@@22W4D2D1_EXTEND_MODE@@W4D2D1_COLOR_INTERPOLATION_MODE@@W4DXGI_FORMAT@@PEAXI@Z @ 0x18003F6AC (-GenerateGradientPixels@CD2DFactory@@QEAAJPEBUD2D1_GRADIENT_STOP@@IW4D2D1_GRADIENT_PIXEL_USAGE@@.c)
 *     ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x18003F748 (-Update@CAtlasBitmapResource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ??4?$com_ptr_t@VCAtlasBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCAtlasBitmapResource@@@Z @ 0x180040000 (--4-$com_ptr_t@VCAtlasBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCAtlasBit.c)
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18004005C (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CGradientSource::Generate(
        struct IAtlasEntryOwner *a1,
        struct CD2DResourceManager **a2,
        struct CD2DBrush ***a3,
        unsigned int *a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7,
        unsigned int a8)
{
  struct CD2DBrush **v8; // rax
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  struct ID2D1Brush *v17; // rbx
  int GradientPixels; // eax
  unsigned int v19; // ecx
  gsl::details *v20; // rcx
  struct CD2DBrush *v21; // rsi
  int v22; // eax
  unsigned int v23; // ecx
  struct CD2DBrush **v24; // rax
  struct CD2DBrush **v25; // rax
  int v27; // eax
  unsigned int v28; // ecx
  struct CD2DResourceManager *v29; // rcx
  int v30; // eax
  unsigned int v31; // ecx
  struct ID2D1Brush *v32; // rsi
  int v33; // eax
  unsigned int v34; // ecx
  struct CD2DBrush *v35; // rbx
  __int64 v36; // r14
  char *v37; // rcx
  __int64 v38; // rdx
  struct ID2D1Brush **v39; // rax
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // [rsp+20h] [rbp-99h]
  __int64 v43; // [rsp+30h] [rbp-89h]
  __int64 v44; // [rsp+40h] [rbp-79h]
  struct CD2DBrush *v45[2]; // [rsp+60h] [rbp-59h] BYREF
  struct ID2D1Brush *v46[2]; // [rsp+70h] [rbp-49h] BYREF
  struct ID2D1Brush *v47; // [rsp+80h] [rbp-39h] BYREF
  __int64 v48; // [rsp+88h] [rbp-31h] BYREF
  struct IAtlasEntryOwner *v49; // [rsp+90h] [rbp-29h] BYREF
  __int128 v50; // [rsp+98h] [rbp-21h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-11h]

  v8 = *a3;
  v49 = a1;
  v13 = 0;
  if ( v8 && !*v8 )
  {
    v45[0] = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v45);
    v14 = CAtlasBitmapResource::Create(a1, (struct CD3DDevice *)a2, v45);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x92u, 0LL);
    }
    else
    {
      v17 = (struct ID2D1Brush *)DefaultHeap::Alloc(0x2000uLL);
      if ( v17 )
      {
        GradientPixels = CD2DFactory::GenerateGradientPixels(
                           a8,
                           *((_QWORD *)a4 + 1),
                           *a4,
                           a7 ^ 1u,
                           v42,
                           (unsigned int)a5 + 1,
                           v43,
                           a8,
                           v44,
                           87,
                           (__int64)v17,
                           0x2000);
        v13 = GradientPixels;
        if ( GradientPixels < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, GradientPixels, 0xA4u, 0LL);
        }
        else
        {
          gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v46, 0x2000LL);
          if ( v46[0] == (struct ID2D1Brush *)-1LL )
          {
            gsl::details::terminate(v20);
            JUMPOUT(0x18003FF31LL);
          }
          v21 = v45[0];
          v46[1] = v17;
          v22 = CAtlasBitmapResource::Update((__int64)v45[0], (__int128 *)v46, a6);
          v13 = v22;
          if ( v22 >= 0 )
          {
            wil::com_ptr_t<CAtlasBitmapResource,wil::err_returncode_policy>::operator=((char *)v49 + 16, v21);
            v24 = *a3;
            v45[0] = 0LL;
            *v24 = v21;
            DefaultHeap::Free(v17);
            wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v45);
            goto LABEL_9;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xA7u, 0LL);
        }
        DefaultHeap::Free(v17);
      }
      else
      {
        v13 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x98u, 0LL);
      }
    }
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v45);
    return v13;
  }
LABEL_9:
  v25 = a3[1];
  if ( v25 && !*v25 )
  {
    *(_OWORD *)v46 = *(_OWORD *)a4;
    v47 = 0LL;
    v45[0] = 0LL;
    v48 = 0LL;
    v27 = CD2DContext::CreateGradientStopCollection((__int64)(a2 + 2), (unsigned int *)v46, a5, a8, &v48);
    v13 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xBEu, 0LL);
    }
    else
    {
      v29 = a2[27];
      v50 = 0LL;
      v46[0] = 0LL;
      if ( a7 )
      {
        v30 = (*(__int64 (__fastcall **)(struct CD2DResourceManager *, __int128 *, _QWORD, __int64, struct ID2D1Brush **))(*(_QWORD *)v29 + 80LL))(
                v29,
                &v50,
                0LL,
                v48,
                v46);
        v13 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xCAu, 0LL);
          if ( v46[0] )
            (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v46[0] + 16LL))(v46[0]);
          goto LABEL_18;
        }
        v32 = v46[0];
        v47 = v46[0];
        goto LABEL_16;
      }
      v51 = 0LL;
      v40 = (*(__int64 (__fastcall **)(struct CD2DResourceManager *, __int128 *, _QWORD, __int64, struct ID2D1Brush **))(*(_QWORD *)v29 + 88LL))(
              v29,
              &v50,
              0LL,
              v48,
              v46);
      v13 = v40;
      if ( v40 >= 0 )
      {
        v32 = v46[0];
        v47 = v46[0];
        v46[0] = 0LL;
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v46);
LABEL_16:
        v33 = CD2DBrush::Create(a2[23], v32, v45);
        v13 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xDCu, 0LL);
        }
        else
        {
          v35 = v45[0];
          v36 = (__int64)v49;
          v37 = (char *)v45[0] + *(int *)(*((_QWORD *)v45[0] + 2) + 8LL) + 16;
          (*(void (__fastcall **)(char *, unsigned __int64))(*(_QWORD *)v37 + 40LL))(
            v37,
            ((unsigned __int64)v49 + 8) & -(__int64)(v49 != 0LL));
          v45[0] = 0LL;
          v38 = (__int64)(*(_QWORD *)(v36 + 32) - *(_QWORD *)(v36 + 24)) >> 3;
          v46[0] = 0LL;
          v49 = 0LL;
          *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                       (detail::liberal_expansion_policy *)(v36 + 24),
                       v38) = v35;
          wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v49);
          wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)v46);
          v39 = a3[1];
          v47 = 0LL;
          *v39 = v32;
        }
        goto LABEL_18;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0xD7u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v46);
    }
LABEL_18:
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)v45);
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v47);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v48);
  }
  return v13;
}
