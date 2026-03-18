/*
 * XREFs of ?ValidateHWNDND@@YGHPAUHWND__@@PAPAUtagWND@@@Z @ 0x74B40
 * Callers:
 *     _NtUserDeferWindowPosAndBand@40 @ 0x749C8 (_NtUserDeferWindowPosAndBand@40.c)
 *     _NtUserSetCoreWindow@8 @ 0xA22FE (_NtUserSetCoreWindow@8.c)
 *     _NtUserSetCoreWindowPartner@12 @ 0xC4150 (_NtUserSetCoreWindowPartner@12.c)
 *     _NtUserSetShellWindowEx@8 @ 0xE0E32 (_NtUserSetShellWindowEx@8.c)
 *     _NtUserFlashWindowEx@4 @ 0x161709 (_NtUserFlashWindowEx@4.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ValidateHWNDND(int a1, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  BOOL result; // eax

  v3 = ValidateHwnd(a1);
  *a2 = v3;
  result = 0;
  if ( v3 )
  {
    v4 = *(_WORD *)(*(_DWORD *)(v3 + 20) + 30) & 0x3FFF;
    if ( v4 != 669 && v4 != 671 )
      return 1;
  }
  return result;
}
