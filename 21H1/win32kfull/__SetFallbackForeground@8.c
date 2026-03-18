/*
 * XREFs of __SetFallbackForeground@8 @ 0x141A87
 * Callers:
 *     _NtUserSetFallbackForeground@8 @ 0x1694A1 (_NtUserSetFallbackForeground@8.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall _SetFallbackForeground(int a1, int a2)
{
  int result; // eax

  if ( a1 )
    HMAssignmentLock(a1, a2);
  else
    HMAssignmentUnlock(*(_DWORD *)(_gptiCurrent + 248) + 184);
  result = 1;
  if ( a2 != 1 )
    _gpqForegroundPrev = 0;
  return result;
}
