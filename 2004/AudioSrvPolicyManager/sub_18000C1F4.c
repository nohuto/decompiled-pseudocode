/*
 * XREFs of sub_18000C1F4 @ 0x18000C1F4
 * Callers:
 *     sub_18000DF10 @ 0x18000DF10 (sub_18000DF10.c)
 * Callees:
 *     sub_18000C694 @ 0x18000C694 (sub_18000C694.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000C1F4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall ***v3)(); // rdx
  __int128 v5; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall **v6)(); // [rsp+30h] [rbp-50h] BYREF
  __int128 v7; // [rsp+38h] [rbp-48h]
  __int64 (__fastcall ***v8)(); // [rsp+68h] [rbp-18h]
  __int64 v9; // [rsp+98h] [rbp+18h] BYREF

  v9 = a2;
  *(_QWORD *)&v5 = a1;
  *((_QWORD *)&v5 + 1) = &v9;
  v6 = off_18003EB68;
  v8 = &v6;
  v7 = v5;
  sub_18000C694(a1, a3, &v6);
  if ( v8 )
  {
    v3 = &v6;
    LOBYTE(v3) = v8 != &v6;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v8)[4])(v8, v3);
  }
  return 0LL;
}
