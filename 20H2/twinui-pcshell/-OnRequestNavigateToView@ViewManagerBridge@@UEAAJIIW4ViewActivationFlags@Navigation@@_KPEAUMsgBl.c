/*
 * XREFs of ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x1802C08D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180064FD8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800794E4 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800795B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007963C (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802A93BC (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802BCF78 (-DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z.c)
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802BFE68 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 *     ?StartActivity@OnRequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKK@Z @ 0x1802C3264 (-StartActivity@OnRequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewManagerBridge::OnRequestNavigateToView(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct MsgBlob *a6)
{
  struct Windows::Foundation::Collections::IPropertySet *v10; // rax
  int v11; // eax
  int v12; // eax
  struct Windows::Foundation::Collections::IPropertySet *v14; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-1A0h]
  __int64 v16; // [rsp+40h] [rbp-198h]
  _QWORD v17[40]; // [rsp+50h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v16 = a1;
  v15 = a2;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"OnRequestNavigateToView");
  v17[0] = &ViewManagerInteropTraceLogging::OnRequestNavigateToView::`vftable';
  try
  {
    ViewManagerInteropTraceLogging::OnRequestNavigateToView::StartActivity(
      (ViewManagerInteropTraceLogging::OnRequestNavigateToView *)v17,
      a2,
      a3,
      a4);
    v10 = 0LL;
    v14 = 0LL;
    if ( a6 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      v11 = DeserializePropertySet(a6, &v14);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1157LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v11);
      v10 = v14;
    }
    if ( (a4 & 0x20) != 0 )
    {
      if ( !v10 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1165LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)0x80070057LL);
      v12 = ViewManagerBridge::OnRequestApplicationViewSwitcherOperation((ViewManagerBridge *)(a1 - 32), a2, a3, v10);
      if ( v12 >= 0 )
        goto LABEL_12;
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1166LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    }
    ViewEventDispatcher::ViewNavigationRequested(
      *(_QWORD *)(a1 + 48),
      a2,
      a3,
      a4,
      (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v10);
LABEL_12:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v17, 0);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v17[0] = &ViewManagerInteropTraceLogging::OnRequestNavigateToView::`vftable';
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v17);
  }
  catch ( ... )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(v16 + 72) + 112LL))(
      *(_QWORD *)(v16 + 72),
      v15,
      0LL,
      0LL,
      1);
  }
  return 0LL;
}
