/*
 * XREFs of sub_1C0004738 @ 0x1C0004738
 * Callers:
 *     sub_1C000DAA0 @ 0x1C000DAA0 (sub_1C000DAA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C0004738(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, _QWORD))qword_1C0007338)(
           a1,
           43LL,
           &unk_1C00053F8,
           17LL,
           (__int64 *)va,
           8LL,
           0LL);
}
