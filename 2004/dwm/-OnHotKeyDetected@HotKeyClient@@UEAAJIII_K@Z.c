/*
 * XREFs of ?OnHotKeyDetected@HotKeyClient@@UEAAJIII_K@Z @ 0x14000AFC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000BE28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HotKeyClient::OnHotKeyDetected(
        HotKeyClient *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBD,
      (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)(unsigned int)v5,
      a5);
  return 0LL;
}
