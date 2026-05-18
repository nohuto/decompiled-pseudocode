/*
 * XREFs of sub_18000CA50 @ 0x18000CA50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CEB0 @ 0x18000CEB0 (sub_18000CEB0.c)
 */

void *sub_18000CA50()
{
  if ( !byte_18021F5C0 )
  {
    sub_18000CEB0((LPCWSTR)sub_18000D7A0);
    byte_18021F5C0 = 1;
  }
  return &unk_18021F580;
}
