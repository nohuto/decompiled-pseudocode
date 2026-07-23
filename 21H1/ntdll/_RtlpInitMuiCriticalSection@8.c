/*
 * XREFs of _RtlpInitMuiCriticalSection@8 @ 0x4B2D5E84
 * Callers:
 *     _LdrpSetThreadPreferredLangList@0 @ 0x4B2BA5F0 (_LdrpSetThreadPreferredLangList@0.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlpSetProcUserMachineLangList@8 @ 0x4B2D3D47 (_RtlpSetProcUserMachineLangList@8.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpSetProcMergedLangList@8 @ 0x4B2EBADE (_RtlpSetProcMergedLangList@8.c)
 *     _RtlGetProcessPreferredUILanguages@16 @ 0x4B352330 (_RtlGetProcessPreferredUILanguages@16.c)
 *     _RtlSetProcessPreferredUILanguages@12 @ 0x4B352E10 (_RtlSetProcessPreferredUILanguages@12.c)
 *     _RtlUpdateProcessRegistryInfo@0 @ 0x4B3530B9 (_RtlUpdateProcessRegistryInfo@0.c)
 *     _RtlpCleanupRegistryKeys@0 @ 0x4B353540 (_RtlpCleanupRegistryKeys@0.c)
 * Callees:
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 *     _ZwDelayExecution@8 @ 0x4B2F2CC0 (_ZwDelayExecution@8.c)
 */

NTSTATUS RtlpInitMuiCriticalSection()
{
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [esp+0h] [ebp-8h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  while ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
  {
    result = InitRegistryInfoCritSect;
    if ( InitRegistryInfoCritSect == 1 )
    {
      ZwDelayExecution(0, &DelayInterval);
      result = InitRegistryInfoCritSect;
    }
    if ( result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0, 0);
  InitRegistryInfoCritSect = 2;
  return result;
}
