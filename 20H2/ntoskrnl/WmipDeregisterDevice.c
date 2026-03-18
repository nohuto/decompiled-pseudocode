/*
 * XREFs of WmipDeregisterDevice @ 0x14074E030
 * Callers:
 *     IoWMIRegistrationControl @ 0x14074E0D0 (IoWMIRegistrationControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x14023FFF4 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     WmipFindRegEntryByDevice @ 0x1403708F4 (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterRegEntry @ 0x140370AA4 (WmipDeregisterRegEntry.c)
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
