/*
 * XREFs of ?_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z @ 0x18039CC60
 * Callers:
 *     ?InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x18039C950 (-InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180045060 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewForegroundStaging@@@?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewForegroundStaging@@@WRL@Microsoft@@@Details@12@@Z @ 0x18039607C (--$As@UIMultitaskingViewForegroundStaging@@@-$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Mic.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_699ed6b2b7b76f9a4c3ea034ba222507___ @ 0x18039C524 (Windows--Internal--ComTaskPool--QueueTask__lambda_699ed6b2b7b76f9a4c3ea034ba222507___.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSnapAssistViewController::_OnItemInvoked(
        CSnapAssistViewController *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  struct IApplicationView *v16; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  struct IApplicationView *v19; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v17[1] = -2LL;
  *((_BYTE *)this + 176) = 1;
  v16 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  v13 = 0LL;
  v4 = *((_QWORD *)this + 18);
  v14 = 2;
  v17[0] = v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v13);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         &v13,
         (__int64)&GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d,
         v17,
         &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v15 = 0LL;
    v7 = Microsoft::WRL::ComPtr<IMultitaskingViewManagerInternal>::As<IMultitaskingViewForegroundStaging>(
           (_QWORD *)this + 19,
           &v15);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v18 = *((_OWORD *)this + 10);
        v19 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
        v20 = v13;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
        v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_699ed6b2b7b76f9a4c3ea034ba222507___(v11, &v18);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        if ( v6 >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
          goto LABEL_11;
        }
        v8 = (unsigned int)v6;
        v9 = 118LL;
      }
      else
      {
        v8 = (unsigned int)v10;
        v9 = 110LL;
      }
    }
    else
    {
      v8 = (unsigned int)v7;
      v9 = 109LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
      (const char *)v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6A,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
    (const char *)(unsigned int)v5);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v6;
}
