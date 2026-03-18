/*
 * XREFs of ?ValidateHWNDIA@@YGHPAUHWND__@@PAPAUtagWND@@@Z @ 0x30032
 * Callers:
 *     _NtUserSetWindowPos@28 @ 0x30082 (_NtUserSetWindowPos@28.c)
 *     _NtUserDeferWindowPosAndBand@40 @ 0x749C8 (_NtUserDeferWindowPosAndBand@40.c)
 *     _NtUserSetWindowBand@12 @ 0x9BCD0 (_NtUserSetWindowBand@12.c)
 * Callees:
 *     _ValidateHwndIAM@4 @ 0x25B92 (_ValidateHwndIAM@4.c)
 */

int __fastcall ValidateHWNDIA(void *a1, int *a2)
{
  int v2; // esi
  int v5; // eax
  int v6; // eax

  v2 = 1;
  if ( (unsigned int)a1 <= 1 || a1 == (void *)-1 || a1 == (void *)-2 )
  {
    *a2 = (int)a1;
  }
  else
  {
    v5 = ValidateHwndIAM(a1);
    *a2 = v5;
    if ( !v5 )
      return 0;
    v6 = *(_WORD *)(*(_DWORD *)(v5 + 20) + 30) & 0x3FFF;
    if ( v6 == 669 || v6 == 671 )
      return 0;
  }
  return v2;
}
