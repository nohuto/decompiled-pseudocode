/*
 * XREFs of _xxxUpdateWindows@8 @ 0x1A0618
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 * Callees:
 *     _xxxUpdateThreadsWindows@12 @ 0x17804C (_xxxUpdateThreadsWindows@12.c)
 */

int __stdcall xxxUpdateWindows(int a1, int a2)
{
  xxxUpdateThreadsWindows(_gptiCurrent, a1, a2);
  return 1;
}
