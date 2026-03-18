/*
 * XREFs of OSNotifyCreateOperationRegionWorker @ 0x1C00597B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C00071F0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C005D840 (EnableDisableRegionSpacesForDevice.c)
 */

void __fastcall OSNotifyCreateOperationRegionWorker(_QWORD *P, __int64 a2)
{
  ULONG_PTR v2; // rbx

  v2 = P[4];
  if ( *(_DWORD *)(v2 + 368) == 3 )
  {
    LOBYTE(a2) = 1;
    EnableDisableRegionSpacesForDevice(P[4], a2);
  }
  ACPIInitDereferenceDeviceExtensionUnlocked(v2);
  ExFreePoolWithTag(P, 0x4D706341u);
}
