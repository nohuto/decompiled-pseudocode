/*
 * XREFs of IoWMIRegistrationControl @ 0x14073D970
 * Callers:
 *     WheaWmiInit @ 0x1405B7BAC (WheaWmiInit.c)
 *     PpmEnableWmiInterface @ 0x1407B1A4C (PpmEnableWmiInterface.c)
 *     ViDdiDriverEntry @ 0x1409C5290 (ViDdiDriverEntry.c)
 *     WmipDriverEntry @ 0x140A659B0 (WmipDriverEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x1402DF324 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14036DD74 (WmipFindRegEntryByDevice.c)
 *     WmipUpdateRegistration @ 0x14073C3F8 (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x14073D8D0 (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x14073DA48 (WmipRegisterDevice.c)
 *     WmipSetTraceNotify @ 0x14076BDA8 (WmipSetTraceNotify.c)
 */

NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  char v2; // r14
  ULONG v4; // eax
  ULONG v5; // eax
  NTSTATUS v6; // ebx
  ULONG v8; // eax
  ULONG v10; // eax
  ULONG v11; // eax
  __int64 RegEntryByDevice; // rbx

  v2 = 0;
  if ( WmipServiceDeviceObject )
  {
    v4 = Action & 0x7FFFFFFF;
    if ( (Action & 0x80000000) == 0 )
      v4 = Action;
    if ( (v4 & 0x10000) != 0 )
    {
      v2 = 1;
      v4 &= 0xFF0EFFFF;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v6 = WmipRegisterDevice(DeviceObject);
      if ( v2 )
        WmipSetTraceNotify(DeviceObject);
      return v6;
    }
    v8 = v5 - 1;
    if ( !v8 )
      return WmipDeregisterDevice((__int64)DeviceObject);
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          return -1073741811;
        RegEntryByDevice = WmipFindRegEntryByDevice((__int64)DeviceObject);
        if ( !RegEntryByDevice )
          return -1073741811;
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        _InterlockedOr((volatile signed __int32 *)(RegEntryByDevice + 48), 0x20000000u);
        KeReleaseMutex(&WmipSMMutex, 0);
        WmipUnreferenceRegEntry(RegEntryByDevice);
        return 0;
      }
      return WmipUpdateRegistration((__int64)DeviceObject);
    }
    else
    {
      v6 = WmipDeregisterDevice((__int64)DeviceObject);
      if ( v6 < 0 )
        return v6;
      return WmipRegisterDevice(DeviceObject);
    }
  }
  return -1073741823;
}
