/*
 * XREFs of sub_1800021B0 @ 0x1800021B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002070 @ 0x180002070 (sub_180002070.c)
 */

_BYTE *sub_1800021B0()
{
  if ( !byte_18005AC64 )
  {
    sub_180002070((LPCWSTR)sub_180002030, 0LL, byte_18005ACB0, 64LL);
    byte_18005AC64 = 1;
  }
  return byte_18005ACB0;
}
