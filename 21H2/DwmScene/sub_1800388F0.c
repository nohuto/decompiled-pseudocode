/*
 * XREFs of sub_1800388F0 @ 0x1800388F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800388F0(__int64 *a1, __int64 a2, float a3, float a4, int a5, int a6)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, __int64, _DWORD *); // rax
  _DWORD v9[4]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a1;
  *(float *)v9 = a3;
  v7 = *(__int64 (__fastcall **)(__int64 *, __int64, _DWORD *))(v6 + 88);
  *(float *)&v9[1] = a4;
  v9[2] = a5;
  v9[3] = a6;
  return v7(a1, a2, v9);
}
