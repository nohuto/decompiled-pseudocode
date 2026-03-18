/*
 * XREFs of __RegisterLogonProcess@8 @ 0xEDF06
 * Callers:
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall _RegisterLogonProcess(int a1, int a2)
{
  return __imp___RegisterLogonProcess@8(a1, a2);
}
