/*
 * XREFs of _NtGdiGetPhysicalMonitors@16 @ 0x1D0272
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiGetPhysicalMonitors(int a1, int a2, int a3, int a4)
{
  int PhysicalMonitorObjects; // esi

  OPM::CMutex::Lock((OPM::CMutex *)P);
  PhysicalMonitorObjects = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  if ( PhysicalMonitorObjects >= 0 )
  {
    PhysicalMonitorObjects = DrvCreatePhysicalMonitorObjects(a1, 1, 1, 1, a2, a3, a4);
    ReleaseUserCriticalSection();
  }
  OPM::CMutex::Unlock((OPM::CMutex *)P);
  return PhysicalMonitorObjects;
}
