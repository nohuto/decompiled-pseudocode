/*
 * XREFs of ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180245C20
 * Callers:
 *     ?FrameworkViewTypeChangedForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180240C60 (-FrameworkViewTypeChangedForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_V.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18007FEEC (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18023C438 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemPropertyChangedArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemPropertyChangedArgs@@@Z @ 0x18023C69C (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemProperty.c)
 *     ??$MakeAndInitialize@VViewHostItemPropertyChangedArgs@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemPropertyChangedArgs@@AEAY0BC@$$CBG@Z @ 0x18023D540 (--$MakeAndInitialize@VViewHostItemPropertyChangedArgs@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@Y.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1802449C0 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_RaiseFrameworkViewTypeChanged(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  ViewHostItemPropertyChangedArgs *v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  ViewHostItemPropertyChangedArgs *v14; // [rsp+68h] [rbp+28h] BYREF

  HolographicPositioner::_FindViewHostItem(a1, &v9);
  if ( v9 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v14);
    v2 = Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemPropertyChangedArgs,ViewHostItemPropertyChangedArgs,unsigned short const (&)[18]>(
           &v14,
           L"FrameworkViewType");
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 1651LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v2);
LABEL_12:
      Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v14);
      goto LABEL_15;
    }
    v11 = v14;
    v12 = v9;
    v2 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::IViewHostItem *,ViewHostItemPropertyChangedArgs *>(
           (PVOID)(a1 + 304),
           (volatile int *)&v12,
           (__int64 *)&v11);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 1652LL;
      goto LABEL_6;
    }
    v10 = 0LL;
    v5 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
           &v9,
           &v10);
    v3 = v5;
    if ( v5 < 0 )
    {
      v6 = 1656LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      goto LABEL_12;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10);
    v3 = v5;
    if ( v5 < 0 )
    {
      v6 = 1657LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v14);
  }
  v3 = 0;
LABEL_15:
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[2])(v7);
  }
  return v3;
}
