/*
 * XREFs of _EditionHandleAltTabCancel@32 @ 0xACBB8
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0xA4996 (-IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     _xxxCancelCoolSwitch@0 @ 0x15D2FA (_xxxCancelCoolSwitch@0.c)
 */

BOOL __stdcall EditionHandleAltTabCancel(char a1, int a2, int a3, int a4, int a5, char a6, void *a7, char a8)
{
  BOOL result; // eax

  result = 0;
  if ( gspwndAltTab )
  {
    if ( !a5 && a6 != 9 && a6 != 16 && a6 != 18 )
    {
      xxxCancelCoolSwitch();
      if ( !IsGpqForegroundAccessibleExplicit(a7, a3, a1, a2) || a6 == 27 && (a8 & 2) == 0 )
        return 1;
    }
  }
  return result;
}
