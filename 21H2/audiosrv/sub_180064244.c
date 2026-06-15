/*
 * XREFs of sub_180064244 @ 0x180064244
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_180053FA0 @ 0x180053FA0 (sub_180053FA0.c)
 */

__int64 *sub_180064244()
{
  __int64 *result; // rax

  result = sub_180053FA0();
  if ( !result[6] )
  {
    byte_18019F888 = 1;
    qword_18019F870 = (__int64)off_180148F50;
    byte_18019F878 = 0;
    result[6] = (__int64)&qword_18019F870;
  }
  return result;
}
