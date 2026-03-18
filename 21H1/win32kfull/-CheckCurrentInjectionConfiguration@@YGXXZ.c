/*
 * XREFs of ?CheckCurrentInjectionConfiguration@@YGXXZ @ 0x149044
 * Callers:
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 *     _NtUserInitializeTouchInjection@8 @ 0x16557C (_NtUserInitializeTouchInjection@8.c)
 * Callees:
 *     <none>
 */

void __stdcall CheckCurrentInjectionConfiguration(struct tagPROCESSINFO *a1, int a2)
{
  int v2; // eax

  if ( gbPendRecreateTouchInjectionDevices == 1
    || (v2 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 508)) != 0 && *(_DWORD *)(v2 + 48) )
  {
    if ( gbPendRecreateTouchInjectionDevices )
      gbPendRecreateTouchInjectionDevices = 0;
    RealizePendingRecreateTouchInjectionDevices(a1, a2);
  }
}
