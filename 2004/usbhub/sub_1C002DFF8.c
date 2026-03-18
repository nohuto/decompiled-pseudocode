/*
 * XREFs of sub_1C002DFF8 @ 0x1C002DFF8
 * Callers:
 *     sub_1C002B680 @ 0x1C002B680 (sub_1C002B680.c)
 *     sub_1C004BD30 @ 0x1C004BD30 (sub_1C004BD30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_1C002DFF8(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = (__int64 (__fastcall *)(__int64))*((_QWORD *)sub_1C000F050(a1) + 572);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a2);
  return result;
}
