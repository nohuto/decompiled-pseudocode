/*
 * XREFs of RaidAdapterFreeDriverInfo @ 0x1C002BA0C
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1C0048108 (RaUnitStorageFreeDumpInfo.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C0076020 (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C00762AC (RaidAdapterCreateDumpInfo.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C007A10C (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterFreeDriverInfo(PVOID **a1)
{
  PVOID *v2; // rcx

  v2 = *a1;
  if ( v2[4] )
  {
    ExFreePoolWithTag(v2[4], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[5] )
  {
    ExFreePoolWithTag(v2[5], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[6] )
  {
    ExFreePoolWithTag(v2[6], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[7] )
  {
    ExFreePoolWithTag(v2[7], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[9] )
  {
    ExFreePoolWithTag(v2[9], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[17] )
  {
    ExFreePoolWithTag(v2[17], 0);
    v2 = *a1;
  }
  ExFreePoolWithTag(v2, 0x44436152u);
}
