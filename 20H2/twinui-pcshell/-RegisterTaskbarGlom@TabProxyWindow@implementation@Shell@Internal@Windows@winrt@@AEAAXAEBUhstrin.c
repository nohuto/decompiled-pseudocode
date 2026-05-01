/*
 * XREFs of ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800D6E54
 * Callers:
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800D58AC (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800D6720 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008DD62 (WINRT_WindowsGetStringRawBuffer.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800D8074 (-SetWindowAppUserModelId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhs.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        HSTRING *a2)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  HSTRING v6; // rcx
  const WCHAR *StringRawBuffer; // rax
  HRESULT v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppv; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 169) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 96LL))(
           *((_QWORD *)this + 14),
           *((_QWORD *)this + 4));
    v5 = retaddr;
    if ( v4 < 0 )
      goto LABEL_13;
    *((_BYTE *)this + 169) = 0;
  }
  v6 = *a2;
  if ( *a2 )
  {
    ppv = 0LL;
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(v6, 0LL);
    v8 = SHCreateItemInKnownFolder(
           &FOLDERID_AppsFolder,
           0x4000u,
           StringRawBuffer,
           &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93,
           &ppv);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2AB,
        (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
        (const char *)(unsigned int)v8);
LABEL_10:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
      return;
    }
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowAppUserModelId(
      this,
      (const struct winrt::hstring *)a2);
    v9 = *((_QWORD *)this + 14);
    if ( !v9 )
      goto LABEL_10;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 88LL))(
            v9,
            *((_QWORD *)this + 4),
            *((_QWORD *)this + 7));
    if ( v10 >= 0 )
    {
      *((_BYTE *)this + 169) = 1;
      goto LABEL_10;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      695LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v10);
LABEL_13:
    wil::details::in1diag3::Throw_Hr(
      v5,
      670LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowAppUserModelId(
    this,
    (const struct winrt::hstring *)a2);
}
