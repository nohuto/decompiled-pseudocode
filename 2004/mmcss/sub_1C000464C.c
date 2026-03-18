/*
 * XREFs of sub_1C000464C @ 0x1C000464C
 * Callers:
 *     sub_1C000A210 @ 0x1C000A210 (sub_1C000A210.c)
 *     sub_1C000A350 @ 0x1C000A350 (sub_1C000A350.c)
 *     sub_1C000A690 @ 0x1C000A690 (sub_1C000A690.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C000464C(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))qword_1C0007338)(
           a1,
           43LL,
           &unk_1C00053E8,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
