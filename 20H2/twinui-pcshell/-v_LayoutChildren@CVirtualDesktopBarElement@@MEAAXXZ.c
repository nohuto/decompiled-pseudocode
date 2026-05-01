/*
 * XREFs of ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x1803AE8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180012934 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18008E5A6 (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18038D410 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18038D494 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18039C070 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW.c)
 *     ??$As@UIVirtualDesktopNewElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803ADB70 (--$As@UIVirtualDesktopNewElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$C.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1803AE704 (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 */

void __fastcall CVirtualDesktopBarElement::v_LayoutChildren(CVirtualDesktopBarElement *this)
{
  int v2; // edx
  __int64 v3; // rcx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  LANGID ThreadUILanguage_0; // ax
  int v9; // edi
  int v10; // eax
  __int64 v11; // r8
  int v12; // ecx
  _DWORD v13[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v14; // [rsp+38h] [rbp-11h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v16; // [rsp+50h] [rbp+7h] BYREF
  _DWORD v17[2]; // [rsp+60h] [rbp+17h] BYREF
  int v18; // [rsp+68h] [rbp+1Fh]
  int v19; // [rsp+6Ch] [rbp+23h]
  __int128 v20; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *(_QWORD *)&v16 = *((_QWORD *)this + 28);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v15, (__int64 *)&v16, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  v2 = *((_DWORD *)this + 15);
  v3 = *((_QWORD *)this + 11);
  LODWORD(v16) = *((_DWORD *)this + 14);
  DWORD2(v16) = v16 + 1;
  DWORD1(v16) = v2;
  HIDWORD(v16) = v2 + 1;
  (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, &v16, 0LL, 0LL);
  CVirtualDesktopBarElement::_LayoutBackground(this);
  v4 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  *(_QWORD *)&v16 = 0LL;
  v17[1] = 0;
  v13[0] = 0;
  v13[1] = 0;
  v14 = 0LL;
  *((_QWORD *)&v16 + 1) = __PAIR64__(v5, v4);
  v18 = v4;
  v19 = v5;
  v6 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopNewElement>((_QWORD *)this + 94, &v14);
  if ( v6 < 0 )
  {
    v7 = 265LL;
LABEL_3:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_8;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v14 + 24LL))(v14, v13);
  if ( v6 < 0 )
  {
    v7 = 266LL;
    goto LABEL_3;
  }
  if ( v5 <= v13[0] )
    v5 = v13[0];
LABEL_8:
  v17[0] = v18 - v5;
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
  {
    v9 = v4 - v18;
    v10 = v9 - v17[0];
    v17[0] = v9;
    v18 += v10;
  }
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 94) + 104LL))(*((_QWORD *)this + 94), v17);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActivitiesInShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ActivitiesInShell>::GetImpl'::`2'::impl,
    0,
    v11);
  v12 = *((_DWORD *)this + 84);
  v20 = v16;
  if ( v12 <= v18 - v17[0] )
    v12 = v18 - v17[0];
  DWORD2(v20) -= v12;
  LODWORD(v20) = v12;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 93) + 104LL))(*((_QWORD *)this + 93), &v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v15);
}
