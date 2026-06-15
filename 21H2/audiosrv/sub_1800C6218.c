/*
 * XREFs of sub_1800C6218 @ 0x1800C6218
 * Callers:
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 *     sub_18007B470 @ 0x18007B470 (sub_18007B470.c)
 *     sub_18007B490 @ 0x18007B490 (sub_18007B490.c)
 *     sub_18012A673 @ 0x18012A673 (sub_18012A673.c)
 *     sub_18012C530 @ 0x18012C530 (sub_18012C530.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 */

BOOL __fastcall sub_1800C6218(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_180033A70(v1);
  return result;
}
