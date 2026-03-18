/*
 * XREFs of _NtGdiGetNumberOfPhysicalMonitors@8 @ 0xEC712
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiGetNumberOfPhysicalMonitors(int a1, int a2)
{
  int result; // eax
  int SuggestedPhysicalMonitorArraySize; // esi

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  if ( result >= 0 )
  {
    SuggestedPhysicalMonitorArraySize = DrvGetSuggestedPhysicalMonitorArraySize(a1, 1, a2);
    ReleaseUserCriticalSection();
    return SuggestedPhysicalMonitorArraySize;
  }
  return result;
}
