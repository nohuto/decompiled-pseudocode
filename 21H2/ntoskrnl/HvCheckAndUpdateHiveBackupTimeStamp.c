/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x14068C0C4
 * Callers:
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpCreateHiveRootCell @ 0x1406C9FA0 (CmpCreateHiveRootCell.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140919A88 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     HvpPerformLogFileRecovery @ 0x14091ADA0 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x14071F430 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140AB44C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140AB451C (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvCheckAndUpdateHiveBackupTimeStamp(ULONG_PTR BugCheckParameter2)
{
  __int64 CellMap; // rax
  __int64 v3; // rcx
  __int64 BinAddress; // rdi
  __int64 result; // rax
  __int16 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  HvpGetBinContextInitialize(&v6);
  CellMap = HvpGetCellMap(BugCheckParameter2, 0LL);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x13D7uLL);
  BinAddress = HvpMapEntryGetBinAddress(v3, CellMap, &v6);
  if ( *(_QWORD *)(BinAddress + 20) == *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL) )
    return 0LL;
  result = HvpMarkDirty(BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(BinAddress + 20) = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL);
    return 0LL;
  }
  return result;
}
