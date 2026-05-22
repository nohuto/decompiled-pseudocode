/*
 * XREFs of ?OnProxyCreated@HotkeyRegistrationForwarder@@UEAAJPEAUIMessageProxy@@@Z @ 0x18002DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::OnProxyCreated(
        HotkeyRegistrationForwarder *this,
        struct IMessageProxy *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 (__fastcall *v5)(struct IMessageProxy *, GUID *, _QWORD *); // rsi
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 48);
  v3 = *((_QWORD *)this + 6);
  v5 = **(__int64 (__fastcall ***)(struct IMessageProxy *, GUID *, _QWORD *))a2;
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v6 = v5(a2, &GUID_869e9b43_7e00_4f26_b722_f81b75205fb0, v2);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x59,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}
