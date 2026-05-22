/*
 * XREFs of ?OnConnected@HotkeyRegistrationForwarder@@UEAAJPEAUIMessageProxy@@@Z @ 0x18003AD80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::OnConnected(
        HotkeyRegistrationForwarder *this,
        struct IMessageProxy *a2,
        __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *i; // rbx
  __int64 v7; // rcx
  __int64 v8; // xmm0_8
  int v9; // eax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (__int64 *)*((_QWORD *)this + 3);
  for ( i = (__int64 *)*((_QWORD *)this + 2); i != v3; i = (__int64 *)((char *)i + 12) )
  {
    LOBYTE(a3) = 1;
    v7 = *((_QWORD *)this + 6);
    v8 = *i;
    v11 = *((_DWORD *)i + 2);
    *(_QWORD *)v10 = v8;
    v9 = (*(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v7 + 488LL))(v7, v10, a3);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x65,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
        (const char *)(unsigned int)v9,
        v10[0]);
  }
  return 0LL;
}
