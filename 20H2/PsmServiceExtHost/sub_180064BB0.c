/*
 * XREFs of sub_180064BB0 @ 0x180064BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064FD0 @ 0x180064FD0 (sub_180064FD0.c)
 */

void *sub_180064BB0()
{
  if ( !byte_1800B4FA8 )
  {
    sub_180064FD0((LPCWSTR)sub_18003B340);
    byte_1800B4FA8 = 1;
  }
  return &unk_1800B4FD0;
}
