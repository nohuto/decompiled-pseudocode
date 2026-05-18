/*
 * XREFs of sub_18002B430 @ 0x18002B430
 * Callers:
 *     <none>
 * Callees:
 *     sub_180029DE8 @ 0x180029DE8 (sub_180029DE8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_18002B430(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v5[320]; // [rsp+30h] [rbp-158h] BYREF

  v1 = sub_180029DE8(a1, &v4);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v1 + 80LL))(*v1, v5);
  v2 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return (v5[304] & 2) == 0;
}
