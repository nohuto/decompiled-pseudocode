/*
 * XREFs of ?SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800D8074
 * Callers:
 *     ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800D6E54 (-RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstrin.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18003C7E4 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008DD62 (WINRT_WindowsGetStringRawBuffer.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowAppUserModelId(
        HWND *this,
        HSTRING *a2)
{
  HRESULT v3; // eax
  wil::details::in1diag3 *v4; // rcx
  PCWSTR StringRawBuffer; // rax
  __int64 v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-28h] BYREF
  PCWSTR v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *ppv; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  ppv = 0LL;
  v3 = SHGetPropertyStoreForWindow(this[4], &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, &ppv);
  v4 = retaddr;
  if ( v3 < 0 )
    goto LABEL_8;
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v14,
    (__int64)ppv);
  StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*a2, 0LL);
  LOWORD(v10) = 31;
  v11 = StringRawBuffer;
  v6 = v14;
  v7 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, int *))(*(_QWORD *)v14 + 48LL))(
         v14,
         &PKEY_AppUserModel_ID,
         &v10);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_9;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      714LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v9);
LABEL_8:
    wil::details::in1diag3::Throw_Hr(
      v4,
      711LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v3);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v8,
      713LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  if ( ppv )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
}
