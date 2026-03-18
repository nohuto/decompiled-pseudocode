/*
 * XREFs of __EnableSessionForMMCSS@4 @ 0xC4416
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _WakeRIT@4 @ 0x9C542 (_WakeRIT@4.c)
 *     ?ToggleMMCSSForDT@@YGXXZ @ 0xC4470 (-ToggleMMCSSForDT@@YGXXZ.c)
 */

int __stdcall _EnableSessionForMMCSS(int a1)
{
  int v1; // esi
  int CurrentProcess; // eax

  v1 = 0;
  GreLockDwmState();
  CurrentProcess = PsGetCurrentProcess();
  if ( IsProcessDwm(CurrentProcess) )
  {
    if ( a1 )
      _InterlockedOr(_gpsi, 0x1000u);
    else
      _InterlockedAnd(_gpsi, 0xFFFFEFFF);
    WakeRIT(4u);
    ToggleMMCSSForDT();
    v1 = 1;
  }
  GreUnlockDwmState();
  return v1;
}
