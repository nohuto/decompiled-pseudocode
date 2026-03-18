/*
 * XREFs of sub_1C0004A34 @ 0x1C0004A34
 * Callers:
 *     sub_1C0004874 @ 0x1C0004874 (sub_1C0004874.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C0004A34(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_1C0007338)(
           a1,
           43LL,
           &unk_1C0005428,
           10LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
