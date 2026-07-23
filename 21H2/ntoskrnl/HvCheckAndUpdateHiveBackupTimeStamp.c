/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x1406F8838
 * Callers:
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpCreateHiveRootCell @ 0x14078DDB0 (CmpCreateHiveRootCell.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     HvpPerformLogFileRecovery @ 0x14087421C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x14071F940 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x14071FB10 (HvpGetCellMap.c)
 */

__int64 __fastcall HvCheckAndUpdateHiveBackupTimeStamp(ULONG_PTR BugCheckParameter2)
{
  __int64 CellMap; // rax
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi

  CellMap = HvpGetCellMap(BugCheckParameter2, 0LL);
  v3 = 0;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x13D4uLL);
  v4 = *(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *(_QWORD *)(v4 + 0x14) != *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL) )
  {
    if ( (unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
      *(_QWORD *)(v4 + 20) = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL);
    else
      return (unsigned int)-1073741443;
  }
  return v3;
}
