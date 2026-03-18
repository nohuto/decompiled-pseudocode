/*
 * XREFs of WmipDeregisterDevice @ 0x14073F450
 * Callers:
 *     IoWMIRegistrationControl @ 0x14073F4F0 (IoWMIRegistrationControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x1402729C4 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     WmipFindRegEntryByDevice @ 0x14036E9A4 (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterRegEntry @ 0x14036EB54 (WmipDeregisterRegEntry.c)
 */

__int64 __fastcall WmipDeregisterDevice(__int64 a1)
{
  unsigned int v2; // edi
  char *RegEntryByDevice; // rsi
  PVOID *i; // rbx

  v2 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice(a1);
  if ( RegEntryByDevice )
  {
    for ( i = (PVOID *)WmipRegWorkList; i != &WmipRegWorkList; i = (PVOID *)*i )
    {
      if ( i[3] == RegEntryByDevice )
      {
        i[3] = 0LL;
        WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
      }
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( RegEntryByDevice )
  {
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
    WmipDeregisterRegEntry(RegEntryByDevice);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
