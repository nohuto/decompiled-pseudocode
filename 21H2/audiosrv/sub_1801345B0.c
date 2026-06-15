/*
 * XREFs of sub_1801345B0 @ 0x1801345B0
 * Callers:
 *     sub_180134830 @ 0x180134830 (sub_180134830.c)
 * Callees:
 *     sub_180134430 @ 0x180134430 (sub_180134430.c)
 *     sub_180138128 @ 0x180138128 (sub_180138128.c)
 */

__int64 (__fastcall **__fastcall sub_1801345B0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax

  *a1 = off_180156348;
  sub_180138128(a1 + 1, 0LL);
  sub_180134430((__int64)(a1 + 2));
  result = &off_18014B148;
  *a1 = &off_18014B148;
  if ( a1[1] )
    return (__int64 (__fastcall **)())RtlUnsubscribeWnfNotificationWaitForCompletion();
  return result;
}
