/*
 * XREFs of sub_180003A80 @ 0x180003A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 */

__int64 sub_180003A80()
{
  __int64 result; // rax

  result = sub_1800618F0();
  qword_18021FAD8 = result;
  return result;
}
