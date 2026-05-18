/*
 * XREFs of _initp_eh_hooks @ 0x180003FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800854DC @ 0x1800854DC (sub_1800854DC.c)
 */

__int64 initp_eh_hooks()
{
  __int64 result; // rax

  result = sub_1800854DC(&qword_18020F7C8);
  qword_180220C40 = result;
  return result;
}
