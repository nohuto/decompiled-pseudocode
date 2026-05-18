/*
 * XREFs of sub_18001A2B0 @ 0x18001A2B0
 * Callers:
 *     sub_18001BBB4 @ 0x18001BBB4 (sub_18001BBB4.c)
 * Callees:
 *     sub_18000EE98 @ 0x18000EE98 (sub_18000EE98.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_18001A2B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h] BYREF
  __int64 v9; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v9 = va_arg(va1, _QWORD);
  v7 = a2;
  v8 = a3;
  v6 = a4;
  v4 = *(_QWORD *)(a1 + 112);
  if ( !v4 )
    sub_18000EE98();
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, char *))(*(_QWORD *)v4 + 32LL))(
           v4,
           &v7,
           &v8,
           &v6,
           (__int64 *)va,
           va1);
}
