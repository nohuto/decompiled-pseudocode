/*
 * XREFs of _EditionBaseDriverEntryInitialize@0 @ 0xECAA0
 * Callers:
 *     <none>
 * Callees:
 *     _InitializeWin32kCall@0 @ 0xF8EA8 (_InitializeWin32kCall@0.c)
 *     _wil_InitializeFeatureStaging@0 @ 0x292034 (_wil_InitializeFeatureStaging@0.c)
 */

int __stdcall EditionBaseDriverEntryInitialize()
{
  int v0; // esi

  v0 = wil_InitializeFeatureStaging();
  if ( v0 >= 0 )
  {
    v0 = InitializeWin32kCall();
    if ( v0 >= 0 )
    {
      v0 = 0;
      CRitTimerScanWakeSystem::ritTimerScanWakeEvent = (PRKEVENT)CreateKernelEvent(1, 0);
      if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
        CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock = 0;
      else
        return -1073741801;
    }
  }
  return v0;
}
