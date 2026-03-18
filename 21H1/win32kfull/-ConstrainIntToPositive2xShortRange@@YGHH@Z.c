/*
 * XREFs of ?ConstrainIntToPositive2xShortRange@@YGHH@Z @ 0x302E8
 * Callers:
 *     _xxxAdjustSize@12 @ 0x2D59A (_xxxAdjustSize@12.c)
 *     _ConstrainWindowSIZERECT@4 @ 0x2FFE2 (_ConstrainWindowSIZERECT@4.c)
 *     _NtUserSetWindowPos@28 @ 0x30082 (_NtUserSetWindowPos@28.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     <none>
 */

int __fastcall ConstrainIntToPositive2xShortRange(int a1)
{
  int result; // eax

  result = 0xFFFF;
  if ( a1 <= 0xFFFF )
  {
    if ( a1 < 0 )
      return 0;
    else
      return a1;
  }
  return result;
}
