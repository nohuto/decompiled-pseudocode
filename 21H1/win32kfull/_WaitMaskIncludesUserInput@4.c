/*
 * XREFs of _WaitMaskIncludesUserInput@4 @ 0x45832
 * Callers:
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 *     _xxxSleepThreadWithPwnd@16 @ 0xAB35C (_xxxSleepThreadWithPwnd@16.c)
 * Callees:
 *     <none>
 */

int __fastcall WaitMaskIncludesUserInput(char a1)
{
  int v1; // edx

  v1 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 56) )
    return 1;
  return v1;
}
