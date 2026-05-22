/*
 * XREFs of ?UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z @ 0x1800A2950
 * Callers:
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x18009F2F8 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 * Callees:
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18002A434 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall PnpApiWrapper::Details::UnregisterDeviceEventHandler(PnpApiWrapper::Details *this, void **a2)
{
  _QWORD *v2; // rdi
  unsigned int v4; // eax
  int v5; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    v4 = CM_Unregister_Notification(*v2, a2);
    v5 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v4);
    result = 2147943568LL;
    if ( v5 == -2147023728 )
      return result;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x284,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    *(_QWORD *)this = 0LL;
    operator delete(v2, (const struct std::nothrow_t *)0x18);
  }
  return 0LL;
}
