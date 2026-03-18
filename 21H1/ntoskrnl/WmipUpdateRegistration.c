/*
 * XREFs of WmipUpdateRegistration @ 0x14073C3F8
 * Callers:
 *     IoWMIRegistrationControl @ 0x14073D970 (IoWMIRegistrationControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1402DF324 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14036DD74 (WmipFindRegEntryByDevice.c)
 *     WmipQueueRegWork @ 0x14073DBB4 (WmipQueueRegWork.c)
 */

__int64 __fastcall WmipUpdateRegistration(__int64 a1)
{
  __int64 RegEntryByDevice; // rax
  __int64 v2; // rdi
  unsigned int v3; // ebx

  RegEntryByDevice = WmipFindRegEntryByDevice(a1);
  v2 = RegEntryByDevice;
  if ( RegEntryByDevice )
  {
    v3 = WmipQueueRegWork(1LL, RegEntryByDevice);
    WmipUnreferenceRegEntry(v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
