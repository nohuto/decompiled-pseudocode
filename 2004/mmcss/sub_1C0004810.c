/*
 * XREFs of sub_1C0004810 @ 0x1C0004810
 * Callers:
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C0004810(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, int *, __int64, __int64 *, __int64, _QWORD))qword_1C0007338)(
           a1,
           43LL,
           &unk_1C0005418,
           11LL,
           &v5,
           4LL,
           (__int64 *)va,
           8LL,
           0LL);
}
