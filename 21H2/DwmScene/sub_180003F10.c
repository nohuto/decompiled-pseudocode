/*
 * XREFs of sub_180003F10 @ 0x180003F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005A890 @ 0x18005A890 (sub_18005A890.c)
 */

__int64 sub_180003F10()
{
  __int64 result; // rax

  result = sub_18005A890();
  byte_180220C12 = result;
  return result;
}
