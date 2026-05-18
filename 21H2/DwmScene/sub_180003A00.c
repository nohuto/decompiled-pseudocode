/*
 * XREFs of sub_180003A00 @ 0x180003A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062194 @ 0x180062194 (sub_180062194.c)
 */

__int64 sub_180003A00()
{
  __int64 result; // rax

  result = sub_180062194();
  qword_18021FAF0 = result;
  return result;
}
