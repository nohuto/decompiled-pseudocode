/*
 * XREFs of sub_180003A40 @ 0x180003A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005ABE8 @ 0x18005ABE8 (sub_18005ABE8.c)
 */

__int64 sub_180003A40()
{
  __int64 result; // rax

  result = sub_18005ABE8();
  qword_18021FAD0 = result;
  return result;
}
