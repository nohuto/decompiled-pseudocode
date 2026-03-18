/*
 * XREFs of ?OnProxyCreated@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z @ 0x14000B010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x14000AC7C (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000BE28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HotKeyClient::OnProxyCreated(HotKeyClient *this, struct IMessageProxy *a2)
{
  __int64 *v2; // rbx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 80);
  if ( *((_QWORD *)this + 10) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD0,
      (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)0x8000FFFFLL,
      v6);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v2);
  v4 = (**(__int64 (__fastcall ***)(struct IMessageProxy *, GUID *, __int64 *))a2)(
         a2,
         &GUID_647859d8_5046_411b_bd66_e49c8745ad3d,
         v2);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD2,
      (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)(unsigned int)v4,
      v6);
  return 0LL;
}
