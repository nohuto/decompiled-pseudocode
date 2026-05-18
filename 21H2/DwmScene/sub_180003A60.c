/*
 * XREFs of sub_180003A60 @ 0x180003A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005B5DC @ 0x18005B5DC (sub_18005B5DC.c)
 */

__int64 sub_180003A60()
{
  __int64 result; // rax

  result = sub_18005B5DC();
  qword_18021FAE0 = result;
  return result;
}
