/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x18038D704
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopBarElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@$$QEAPEAUIObservableObjectArray@@$$QEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x180377A10 (--$MakeAndInitialize@VCVirtualDesktopBarElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMe.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18037B6E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18037FED0 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?CScrollViewerHost_CreateInstance@@YAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x180387F10 (-CScrollViewerHost_CreateInstance@@YAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU.c)
 *     ?Initialize@?$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThumbnailElement@@@Z @ 0x180388198 (-Initialize@-$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThu.c)
 *     ObservableProperty_bool_::AddListener__lambda_8cb41962f400b05f8d5f37a54afbb5b2___ @ 0x18038D06C (ObservableProperty_bool_--AddListener__lambda_8cb41962f400b05f8d5f37a54afbb5b2___.c)
 *     ??$As@UIVirtualDesktopContainerElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopContainerElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18038D15C (--$As@UIVirtualDesktopContainerElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEB.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@012@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x18038D370 (--$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@A_ea_18038D370.c)
 *     ?_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ @ 0x18038DEB0 (-_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ.c)
 */

__int64 __fastcall CVirtualDesktopBarElement::RuntimeClassInitialize(
        CVirtualDesktopBarElement *this,
        const struct VirtualDesktopMetrics *a2,
        const struct Geometry::CRect *a3,
        struct IObservableObjectArray *a4,
        struct IVirtualDesktopElementFactory *a5,
        struct ISwitchThumbnailFactory *a6)
{
  const struct VirtualDesktopMetrics *v6; // r13
  _OWORD *v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int64 *v11; // r12
  __int128 v12; // xmm0
  struct ISwitchThumbnailFactory *v13; // rdx
  __int64 v14; // rbx
  char v15; // r15
  int v16; // ebx
  __int64 v17; // rdx
  unsigned int Color; // eax
  __int64 v20; // rdi
  unsigned int v21; // esi
  unsigned int v22; // esi
  __int64 v23; // rbx
  struct ISwitchThumbnailFactory **v24; // rdi
  struct ISwitchThumbnailFactory *v25; // rbx
  int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // r8
  struct ISwitchThumbnailFactory *v30; // rax
  int Instance; // eax
  __int64 v32; // rdx
  __int64 v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // [rsp+40h] [rbp-51h]
  __int64 v38; // [rsp+58h] [rbp-39h] BYREF
  __int64 v39; // [rsp+60h] [rbp-31h] BYREF
  struct ISwitchThumbnailFactory *v40; // [rsp+68h] [rbp-29h] BYREF
  struct ISwitchThumbnailFactory *v41; // [rsp+70h] [rbp-21h] BYREF
  __int128 v42; // [rsp+78h] [rbp-19h] BYREF
  _OWORD v43[2]; // [rsp+88h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+4Fh]
  struct IObservableObjectArray *v45; // [rsp+100h] [rbp+6Fh] BYREF

  v45 = a4;
  v6 = (CVirtualDesktopBarElement *)((char *)this + 232);
  *(_QWORD *)&v42 = a3;
  v8 = (_OWORD *)((char *)this + 232);
  v9 = 3LL;
  do
  {
    *v8 = *(_OWORD *)a2;
    v8[1] = *((_OWORD *)a2 + 1);
    v8[2] = *((_OWORD *)a2 + 2);
    v8[3] = *((_OWORD *)a2 + 3);
    v8[4] = *((_OWORD *)a2 + 4);
    v8[5] = *((_OWORD *)a2 + 5);
    v8[6] = *((_OWORD *)a2 + 6);
    v8 += 8;
    v10 = *((_OWORD *)a2 + 7);
    a2 = (const struct VirtualDesktopMetrics *)((char *)a2 + 128);
    *(v8 - 1) = v10;
    --v9;
  }
  while ( v9 );
  v11 = (__int64 *)((char *)this + 224);
  *v8 = *(_OWORD *)a2;
  v8[1] = *((_OWORD *)a2 + 1);
  v8[2] = *((_OWORD *)a2 + 2);
  v8[3] = *((_OWORD *)a2 + 3);
  v8[4] = *((_OWORD *)a2 + 4);
  v8[5] = *((_OWORD *)a2 + 5);
  v12 = *((_OWORD *)a2 + 6);
  v13 = a6;
  v8[6] = v12;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 28, (__int64)v13);
  v14 = *((_QWORD *)this + 28);
  v15 = 1;
  v38 = 0x100000001LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v14 + 112LL))(
          v14,
          0LL,
          0x100000001LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          (char *)this + 88);
  if ( v16 < 0 )
  {
    v17 = 19LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v16);
    return (unsigned int)v16;
  }
  Color = CImmersiveColor::GetColor(0xB6u);
  v20 = *v11;
  v38 = 0x100000001LL;
  v21 = Color;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 96);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v20 + 104LL))(
          v20,
          *((_QWORD *)this + 11),
          v21,
          0x100000001LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          (char *)this + 768);
  if ( v16 < 0 )
  {
    v17 = 21LL;
    goto LABEL_5;
  }
  v22 = CImmersiveColor::GetColor(0x490u);
  if ( HIBYTE(v22) )
  {
    v23 = *v11;
    v38 = 0x100000001LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 97);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v23 + 104LL))(
            v23,
            *((_QWORD *)this + 11),
            v22,
            0x100000001LL,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            (char *)this + 776);
    if ( v16 < 0 )
    {
      v17 = 27LL;
      goto LABEL_5;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 97) + 32LL))(
            *((_QWORD *)this + 97),
            **((_QWORD **)this + 97),
            0LL,
            0LL);
    if ( v16 < 0 )
    {
      v17 = 28LL;
      goto LABEL_5;
    }
    v6 = (CVirtualDesktopBarElement *)((char *)this + 232);
  }
  v24 = (struct ISwitchThumbnailFactory **)((char *)this + 728);
  v16 = WeakReference::CWeakRefSource<SwitchItemThumbnailElement>::Initialize((__int64 *)this + 91, (__int64)this);
  if ( v16 < 0 )
  {
    v17 = 31LL;
    goto LABEL_5;
  }
  v25 = *v24;
  v41 = *v24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v41);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 94);
  v26 = (*(__int64 (__fastcall **)(struct IVirtualDesktopElementFactory *, __int64, __int64, GUID *, char *))(*(_QWORD *)a5 + 40LL))(
          a5,
          *v11,
          1LL,
          &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
          (char *)this + 752);
  v27 = v26;
  if ( v26 < 0 )
  {
    v28 = 40LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v26);
LABEL_35:
    (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)this + 80LL))(this);
    goto LABEL_36;
  }
  v26 = (*(__int64 (__fastcall **)(CVirtualDesktopBarElement *, _QWORD))(*(_QWORD *)this + 64LL))(
          this,
          *((_QWORD *)this + 94));
  v27 = v26;
  if ( v26 < 0 )
  {
    v28 = 41LL;
    goto LABEL_20;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActivitiesInShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ActivitiesInShell>::GetImpl'::`2'::impl,
    0,
    v29);
  v30 = (struct ISwitchThumbnailFactory *)*v11;
  v39 = 0LL;
  v40 = v30;
  Instance = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopContainerElement,IMultitaskingViewElement,VirtualDesktopMetrics &,Geometry::CRect const &,IObservableObjectArray * &,IVirtualDesktopElementFactory * &,ISwitchThumbnailFactory *>(
               &v39,
               v6,
               (const struct Geometry::CRect *)v42,
               &v45,
               &a5,
               &v40);
  v27 = Instance;
  if ( Instance < 0 )
  {
    v32 = 57LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_34;
  }
  Instance = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopContainerElement>(
               &v39,
               (__int64 *)this + 92);
  v27 = Instance;
  if ( Instance < 0 )
  {
    v32 = 59LL;
    goto LABEL_29;
  }
  memset(v43, 0, sizeof(v43));
  v42 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 93);
  Instance = CScrollViewerHost_CreateInstance(
               3u,
               (__int64)this + 376,
               (__int64)&v42,
               (__int64)v43,
               96,
               v39,
               *v11,
               v37,
               (_QWORD *)this + 93);
  v27 = Instance;
  if ( Instance < 0 )
  {
    v32 = 69LL;
    goto LABEL_29;
  }
  Instance = (*(__int64 (__fastcall **)(CVirtualDesktopBarElement *, _QWORD))(*(_QWORD *)this + 64LL))(
               this,
               *((_QWORD *)this + 93));
  v27 = Instance;
  if ( Instance < 0 )
  {
    v32 = 70LL;
    goto LABEL_29;
  }
  CVirtualDesktopBarElement::_UpdateScrollElementVisibility(this);
  v40 = v25;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v40);
  v33 = *((_QWORD *)this + 92);
  v38 = (__int64)v25;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v38);
  v34 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
  v36 = ObservableProperty_bool_::AddListener__lambda_8cb41962f400b05f8d5f37a54afbb5b2___(v34, &v38, v35);
  v27 = v36;
  if ( v36 >= 0 )
  {
    v15 = 0;
    v27 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v36);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
LABEL_34:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
  if ( v15 )
    goto LABEL_35;
LABEL_36:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
  return v27;
}
