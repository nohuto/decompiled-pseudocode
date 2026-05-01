/*
 * XREFs of ?CreateSurfaceBrushUsingXaml@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x18026D89C
 * Callers:
 *     ?CreateStaticThumbnailVisual@TabViewManager@@AEAA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@7@AEBUSize@Foundation@7@@Z @ 0x18026CE98 (-CreateStaticThumbnailVisual@TabViewManager@@AEAA-AV-$com_ptr_t@UIVisual@Composition@UI@Windows@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::CreateSurfaceBrushUsingXaml(
        TabViewManager *this,
        struct Windows::UI::Composition::ICompositor *a2,
        struct IStream *a3,
        struct Windows::UI::Composition::ICompositionSurfaceBrush **a4)
{
  int v7; // eax
  int v8; // ebx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64); // rdi
  int v18; // eax
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h] BYREF
  __int64 v23; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v25; // [rsp+78h] [rbp+38h] BYREF

  *a4 = 0LL;
  v22 = 0LL;
  v7 = CreateRandomAccessStreamOverStream(a3, 0LL, &GUID_905a0fe1_bc53_11df_8c49_001e4fc686da, &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF4,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v7);
LABEL_15:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
    return (unsigned int)v8;
  }
  v9 = (__int64 *)*((_QWORD *)this + 176);
  v10 = *v9;
  v21 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v10 + 72))(v9, v22, &v21);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF7,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v11);
LABEL_14:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
    goto LABEL_15;
  }
  v12 = *(_QWORD *)a2;
  v25 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositor *, struct Windows::UI::Composition::ICompositionSurfaceBrush **))(v12 + 184))(
          a2,
          &v25);
  v8 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v15 = 2810LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    goto LABEL_14;
  }
  v16 = (__int64)v25;
  v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 104LL);
  v18 = (**v21)(v21, &GUID_1527540d_42c7_47a6_a408_668f79a90dfb, &v23);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v18);
  v8 = v17(v16, v23);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v8 < 0 )
  {
    v14 = (unsigned int)v8;
    v15 = 2811LL;
    goto LABEL_13;
  }
  v20 = v25;
  v25 = 0LL;
  *a4 = v20;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
  return 0LL;
}
