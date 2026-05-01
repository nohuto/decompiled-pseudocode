/*
 * XREFs of _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1803EA7E0
 * Callers:
 *     wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731___ @ 0x1803E94D0 (wil--ResultFromException__lambda_c6623334da8ed11a0378a692878c9731___.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C200 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180046658 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$?4UIWICBitmapFlipRotator@@@?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIWICBitmapFlipRotator@@@12@@Z @ 0x1802239AC (--$-4UIWICBitmapFlipRotator@@@-$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComP.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803E9024 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1803E924C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803EA064 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$ComPtr@UIApplicationView@@@WRL@M.c)
 *     ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x1803EC6A8 (-IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1803EF580 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1803EF94C (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1803EFB98 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_c6623334da8ed11a0378a692878c9731_::operator()(IUnknown **a1)
{
  IUnknown *v2; // rbx
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  struct IApplicationViewPosition *v6; // rsi
  IUnknown *v7; // rbx
  struct IApplicationViewPosition *v8; // rbx
  int fixed; // eax
  char v10; // r14
  int v11; // ecx
  CDesktopPositioner *v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  CDesktopPositioner *v15; // rcx
  int v16; // eax
  unsigned __int8 v18[8]; // [rsp+38h] [rbp-D0h] BYREF
  void *lpVtbl; // [rsp+40h] [rbp-C8h] BYREF
  struct IApplicationViewPosition *p_lpVtbl; // [rsp+48h] [rbp-C0h] BYREF
  struct IApplicationViewPosition *v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v23[44]; // [rsp+60h] [rbp-A8h]
  __int128 v24[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B8h] [rbp-50h]
  __int128 v27; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v28; // [rsp+D8h] [rbp-30h] BYREF
  _DWORD v29[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v30; // [rsp+F0h] [rbp-18h]
  __m128i v31; // [rsp+100h] [rbp-8h]
  struct tagRECT v32; // [rsp+110h] [rbp+8h] BYREF
  __int128 v33; // [rsp+128h] [rbp+20h]

  v2 = *a1;
  lpVtbl = a1[1]->lpVtbl;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&lpVtbl);
  v4 = (__int64)v2[46].lpVtbl;
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_BYTE *)(v5 + 25) )
    goto LABEL_8;
  do
  {
    if ( *(_QWORD *)(v5 + 32) >= (unsigned __int64)lpVtbl )
    {
      v4 = v5;
      v5 = *(_QWORD *)v5;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  while ( !*(_BYTE *)(v5 + 25) );
  if ( (struct IUnknownVtbl *)v4 == v2[46].lpVtbl || (unsigned __int64)lpVtbl < *(_QWORD *)(v4 + 32) )
  {
LABEL_8:
    p_lpVtbl = (struct IApplicationViewPosition *)&lpVtbl;
    v4 = *std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<Microsoft::WRL::ComPtr<IApplicationView> &&>,std::tuple<>>(
            (__int64 *)&v2[46],
            (__int64 *)&v28.left,
            (__int64 *)v4,
            v3,
            (unsigned __int64 **)&p_lpVtbl);
  }
  v21 = *(struct IApplicationViewPosition **)(v4 + 40);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&lpVtbl);
  v6 = v21;
  if ( v21 )
  {
LABEL_12:
    v8 = 0LL;
    p_lpVtbl = 0LL;
    if ( a1[2]->lpVtbl )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&p_lpVtbl);
      fixed = CDesktopPositioner::_FixPositionForLayout(
                (CDesktopPositioner *)&p_lpVtbl,
                (struct IApplicationView *)a1[1]->lpVtbl,
                (struct IAppLayout *)a1[2]->lpVtbl,
                v21,
                &p_lpVtbl);
      v8 = p_lpVtbl;
      if ( fixed >= 0 )
        goto LABEL_17;
      v6 = v21;
    }
    if ( v8 != v6 )
    {
      lpVtbl = v6;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&lpVtbl);
      lpVtbl = v8;
      v8 = v6;
      p_lpVtbl = v6;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&lpVtbl);
    }
LABEL_17:
    v10 = 0;
    v11 = (int)a1[3]->lpVtbl;
    if ( v11 == 3 )
    {
      lpVtbl = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&p_lpVtbl,
                  (__int64 *)&lpVtbl) >= 0
        && (*(int (__fastcall **)(void *, int *))(*(_QWORD *)lpVtbl + 32LL))(lpVtbl, &v22) >= 0
        && v22 == 3
        && (*(int (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)lpVtbl + 56LL))(lpVtbl, &v28) >= 0 )
      {
        CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v12, &v28, &v32);
        CDesktopPositioner::_FixRectForWorkArea(*a1, 1LL, &v32, 0LL);
        (*((void (__fastcall **)(struct IUnknownVtbl *, __int64))a1[4]->lpVtbl->QueryInterface + 6))(a1[4]->lpVtbl, 3LL);
        v13 = (__int64 *)a1[4]->lpVtbl;
        v14 = *v13;
        v27 = v33;
        (*(void (__fastcall **)(__int64 *, __int128 *))(v14 + 56))(v13, &v27);
        (*((void (__fastcall **)(struct IUnknownVtbl *, __int64))a1[4]->lpVtbl->QueryInterface + 9))(a1[4]->lpVtbl, 1LL);
        v10 = 1;
      }
    }
    else
    {
      if ( v11 != 4 )
        goto LABEL_38;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
        1u);
      v18[0] = 0;
      if ( (int)CDesktopPositioner::IsWindowMinimizing(v15, (struct IUnknown *)a1[5]->lpVtbl, v18) < 0 || v18[0] )
        goto LABEL_38;
      lpVtbl = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&p_lpVtbl,
                  (__int64 *)&lpVtbl) >= 0
        && (*(int (__fastcall **)(void *, int *))(*(_QWORD *)lpVtbl + 32LL))(lpVtbl, &v22) >= 0
        && v22 == 1
        && (*(int (__fastcall **)(void *, _DWORD *))(*(_QWORD *)lpVtbl + 72LL))(lpVtbl, v29) >= 0 )
      {
        *(_DWORD *)v23 = 44;
        *(_DWORD *)&v23[4] = v29[0];
        *(_DWORD *)&v23[8] = v29[1];
        *(_OWORD *)&v23[12] = v30;
        *(__m128i *)&v23[28] = v31;
        v24[0] = *(_OWORD *)v23;
        v24[1] = *(_OWORD *)&v23[16];
        v25 = *(__int64 *)((char *)v31.m128i_i64 + 4);
        v26 = _mm_cvtsi128_si32(_mm_srli_si128(v31, 12));
        DWORD2(v24[0]) = 1;
        if ( (*(int (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)lpVtbl + 64LL))(lpVtbl, &v28) >= 0 )
        {
          v16 = 1;
          if ( v28.left == 1 )
            v16 = 3;
          DWORD2(v24[0]) = v16;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&lpVtbl);
        Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
          &lpVtbl,
          v24);
        Microsoft::WRL::ComPtr<IWICBitmapSource>::operator=<IWICBitmapFlipRotator>(
          (__int64 *)&p_lpVtbl,
          (__int64 *)&lpVtbl);
        v8 = p_lpVtbl;
      }
      (*((void (__fastcall **)(struct IUnknownVtbl *, __int64))a1[4]->lpVtbl->QueryInterface + 12))(a1[4]->lpVtbl, 1LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&lpVtbl);
    if ( v10 )
    {
LABEL_39:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&p_lpVtbl);
      return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    }
LABEL_38:
    (*((void (__fastcall **)(struct IUnknownVtbl *, struct IApplicationViewPosition *))a1[4]->lpVtbl->QueryInterface + 10))(
      a1[4]->lpVtbl,
      v8);
    goto LABEL_39;
  }
  v7 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  if ( (int)CDesktopPositioner::_GetRestorePosition(v7, (struct IApplicationView *)a1[1]->lpVtbl, 0LL, &v21) >= 0 )
  {
    v6 = v21;
    goto LABEL_12;
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
}
