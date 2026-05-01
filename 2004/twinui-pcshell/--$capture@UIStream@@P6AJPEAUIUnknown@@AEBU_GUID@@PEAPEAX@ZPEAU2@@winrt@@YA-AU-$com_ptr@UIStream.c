/*
 * XREFs of ??$capture@UIStream@@P6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA?AU?$com_ptr@UIStream@@@0@P6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z$$QEAPEAU2@@Z @ 0x1800D31B4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800D6AA0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800D8810 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180095E84 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::capture<IStream,long (*)(IUnknown *,_GUID const &,void * *),IUnknown *>(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD, void *, __int64 *),
        _QWORD *a3)
{
  unsigned int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v4 = a2(*a3, &winrt::impl::guid_storage<IStream>::value, &v6);
  winrt::check_hresult(v4);
  *a1 = v6;
  return a1;
}
