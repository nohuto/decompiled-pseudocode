/*
 * XREFs of ?CreateStaticThumbnailVisual@TabViewManager@@AEAA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@7@AEBUSize@Foundation@7@@Z @ 0x18026CE98
 * Callers:
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x180273DC0 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIBufferByteAccess@Streams@Storage@Windows@@@?$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBufferByteAccess@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800ACF1C (--$query@UIBufferByteAccess@Streams@Storage@Windows@@@-$com_ptr_t@UIBuffer@Streams@Storage@Windo.c)
 *     ??$query@UICompositionBrush@Composition@UI@Windows@@@?$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UICompositionBrush@Composition@UI@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800ACF6C (--$query@UICompositionBrush@Composition@UI@Windows@@@-$com_ptr_t@UICompositionSurfaceBrush@Compo.c)
 *     ??$query@UIVisual@Composition@UI@Windows@@@?$com_ptr_t@UISpriteVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800AD0AC (--$query@UIVisual@Composition@UI@Windows@@@-$com_ptr_t@UISpriteVisual@Composition@UI@Windows@@Ue.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x18026D77C (-CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUn.c)
 *     ?CreateSurfaceBrushUsingXaml@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x18026D89C (-CreateSurfaceBrushUsingXaml@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIS.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall TabViewManager::CreateStaticThumbnailVisual(
        TabViewManager *this,
        _QWORD *a2,
        struct Windows::UI::Composition::ICompositor *a3,
        struct IUnknown *a4,
        __int64 *a5,
        unsigned int *a6)
{
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  _QWORD *v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, _QWORD); // rdi
  _QWORD *v22; // rax
  int v23; // eax
  __m128 v24; // xmm6
  __m128 v25; // xmm7
  int v26; // eax
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v28; // [rsp+38h] [rbp-48h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  struct IStream *v30; // [rsp+48h] [rbp-38h] BYREF
  __int64 v31; // [rsp+50h] [rbp-30h] BYREF
  __int64 v32; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v10 = *a5;
  v31 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 48))(a5, &v31);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2838LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v31 + 56LL))(v31, &a5);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2841LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v12);
  v30 = 0LL;
  v13 = (unsigned int)a5;
  v14 = (_QWORD *)wil::com_ptr_t<Windows::Storage::Streams::IBuffer,wil::err_exception_policy>::query<Windows::Storage::Streams::IBufferByteAccess>(
                    &v31,
                    (__int64)&v28);
  v15 = SHCreateMemoryStreamOnSharedBuffer(*v14, v13, &v30);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2844LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v15);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
  v28 = 0LL;
  if ( a4 )
  {
    v16 = TabViewManager::CreateSurfaceBrushUsingWIC(this, a3, a4, v30, &v28);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2852LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
  }
  else
  {
    v17 = TabViewManager::CreateSurfaceBrushUsingXaml(this, a3, v30, &v28);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2857LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v17);
  }
  v18 = *(_QWORD *)a3;
  v29 = 0LL;
  v19 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositor *, __int64 *))(v18 + 176))(a3, &v29);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2862LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  v20 = v29;
  v21 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 56LL);
  v22 = (_QWORD *)wil::com_ptr_t<Windows::UI::Composition::ICompositionSurfaceBrush,wil::err_exception_policy>::query<Windows::UI::Composition::ICompositionBrush>(
                    &v28,
                    (__int64)&v32);
  v23 = v21(v20, *v22);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2863LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v23);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v24 = (__m128)*a6;
  v25 = (__m128)a6[1];
  wil::com_ptr_t<Windows::UI::Composition::ISpriteVisual,wil::err_exception_policy>::query<Windows::UI::Composition::IVisual>(
    &v29,
    (__int64)a2);
  v26 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*a2 + 288LL))(
          *a2,
          _mm_unpacklo_ps(v24, v25).m128_u64[0]);
  if ( v26 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2867LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v26);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
  return a2;
}
