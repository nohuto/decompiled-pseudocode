/*
 * XREFs of ?OnProxyCreated@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z @ 0x180148210
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HotKeyClient::OnProxyCreated(HotKeyClient *this, struct IMessageProxy *a2)
{
  __int64 *v2; // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 80);
  if ( *((_QWORD *)this + 10) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      208LL,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)0x8000FFFFLL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v2);
  v4 = (**(__int64 (__fastcall ***)(struct IMessageProxy *, GUID *, __int64 *))a2)(
         a2,
         &GUID_647859d8_5046_411b_bd66_e49c8745ad3d,
         v2);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      210LL,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
