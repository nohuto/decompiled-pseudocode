/*
 * XREFs of sub_18000B3E0 @ 0x18000B3E0
 * Callers:
 *     sub_18000DC80 @ 0x18000DC80 (sub_18000DC80.c)
 *     sub_18000DF10 @ 0x18000DF10 (sub_18000DF10.c)
 * Callees:
 *     sub_18000C694 @ 0x18000C694 (sub_18000C694.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000B3E0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdx
  _QWORD v5[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+58h] [rbp-20h]
  __int64 v7; // [rsp+90h] [rbp+18h] BYREF

  v7 = a3;
  v5[0] = off_18003EC10;
  v5[1] = &v7;
  v6 = v5;
  sub_18000C694(a1, a2, v5);
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v3);
  }
  return 0LL;
}
