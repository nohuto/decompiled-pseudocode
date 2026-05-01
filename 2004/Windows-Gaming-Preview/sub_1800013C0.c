/*
 * XREFs of sub_1800013C0 @ 0x1800013C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL sub_1800013C0()
{
  BOOL result; // eax

  result = InitOnceExecuteOnce(&InitOnce, InitFn, 0LL, 0LL);
  byte_18005AE90 = 1;
  byte_18005AE80 = 1;
  return result;
}
