/*
 * XREFs of RaidAdapterFreeDumpInfo @ 0x1C002C94C
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1C0048F18 (RaUnitStorageFreeDumpInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0077780 (RaidAdapterCreateDumpInfo.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C007B60C (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterFreeDumpInfo(PVOID *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx

  v2 = (_QWORD *)*((_QWORD *)*a1 + 6);
  if ( v2 )
  {
    v3 = (void *)v2[6];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x44436152u);
    ExFreePoolWithTag(v2, 0x44436152u);
  }
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
