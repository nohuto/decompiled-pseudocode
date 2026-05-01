/*
 * XREFs of ?PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ @ 0x1802247F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180168208 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x18019ED18 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x180223A8C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x1802245FC (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicForegroundAssistant::PurloinForeground(HolographicForegroundAssistant *this)
{
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v2; // rdx
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  enum Windows::Internal::Shell::Holographic::UserInputContext *v5; // rdx
  int UserDisplayContext; // ebx
  __int64 v7; // rdx
  bool v9; // r14
  HWND ForegroundWindow; // rsi
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, HWND, __int64 *); // rbx
  __int64 v13; // rbx
  int (__fastcall *v14)(__int64, __int64 *); // rdi
  __int64 v15; // rcx
  int v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+34h] [rbp-4Ch] BYREF
  int v18; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v3 = (_DWORD *)wil::details::static_lazy<HolographicPositionerProvider>::get(
                   (__int64)this,
                   _lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 0x400000000000LL) )
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1804E16FC, 0LL, 0LL, 2u, &v22);
  v16 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v16,
                         v2);
  if ( UserDisplayContext < 0 )
  {
    v7 = 96LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicforegroundassistant.cpp",
      (const char *)(unsigned int)UserDisplayContext);
    return (unsigned int)UserDisplayContext;
  }
  v17 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserInputContext(
                         (Windows::Internal::Shell::Holographic *)&v17,
                         v5);
  if ( UserDisplayContext < 0 )
  {
    v7 = 99LL;
    goto LABEL_6;
  }
  if ( v16 || v17 )
    goto LABEL_19;
  v9 = 0;
  ForegroundWindow = GetForegroundWindow();
  v20 = 0LL;
  v11 = *((_QWORD *)this + 8);
  v12 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v11 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  if ( v12(v11, ForegroundWindow, &v20) >= 0 )
  {
    v19 = 0LL;
    v21 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v20, &v21) >= 0 )
    {
      v13 = v21;
      v14 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      if ( v14(v13, &v19) >= 0 )
      {
        v18 = 0;
        if ( (*(int (__fastcall **)(__int64, const wchar_t *, int *))(*(_QWORD *)v19 + 88LL))(
               v19,
               L"Microsoft.MixedReality.Portal_8wekyb3d8bbwe!App",
               &v18) >= 0 )
          v9 = v18 != 0;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  if ( !v9 )
    return 2147942405LL;
LABEL_19:
  v15 = *((_QWORD *)this + 9);
  if ( !v15 )
  {
    UserDisplayContext = -2147467261;
    v7 = 129LL;
    goto LABEL_6;
  }
  UserDisplayContext = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
  if ( UserDisplayContext < 0 )
  {
    v7 = 130LL;
    goto LABEL_6;
  }
  return 0LL;
}
