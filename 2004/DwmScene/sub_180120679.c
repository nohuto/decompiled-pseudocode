/*
 * XREFs of sub_180120679 @ 0x180120679
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AA4 @ 0x180012AA4 (sub_180012AA4.c)
 *     sub_180075910 @ 0x180075910 (sub_180075910.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_180120679(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 *v4; // rsi
  __int64 v5; // rdi
  const char *v6; // rbx
  __int64 v7; // rax

  v3 = *(_QWORD **)(a2 + 56);
  if ( *v3 )
  {
    v4 = (__int64 *)sub_180012AA4((__int64)v3);
    v5 = *v4;
    v6 = sub_180075910();
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 200) + 8LL))(*(_QWORD *)(a2 + 200));
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, const char *))(v5 + 24))(v4, 0LL, v7, v6);
  }
  throw;
}
