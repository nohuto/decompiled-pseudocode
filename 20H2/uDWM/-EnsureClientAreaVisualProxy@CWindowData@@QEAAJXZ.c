/*
 * XREFs of ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x180012364
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180013120 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800410A0 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180012318 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180025220 (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowData::EnsureClientAreaVisualProxy(CWindowData *this)
{
  char *v1; // rdi
  int ProxyFromShared; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 128;
  if ( *((_QWORD *)this + 16) )
    return 0LL;
  hObject = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  ProxyFromShared = (*(__int64 (__fastcall **)(_QWORD, HANDLE *))(**((_QWORD **)this + 3) + 320LL))(
                      *((_QWORD *)this + 3),
                      &hObject);
  v4 = ProxyFromShared;
  if ( ProxyFromShared < 0 )
  {
    v6 = 7135LL;
  }
  else
  {
    ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(
                        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                        hObject,
                        v1);
    v4 = ProxyFromShared;
    if ( ProxyFromShared >= 0 )
    {
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      return 0LL;
    }
    v6 = 7137LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)ProxyFromShared);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v4;
}
