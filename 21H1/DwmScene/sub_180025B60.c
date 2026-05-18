/*
 * XREFs of sub_180025B60 @ 0x180025B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180024518 @ 0x180024518 (sub_180024518.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_180025B60(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v5[320]; // [rsp+30h] [rbp-158h] BYREF

  v1 = sub_180024518(a1, &v4);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v1 + 80LL))(*v1, v5);
  v2 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return (v5[304] & 2) == 0;
}
