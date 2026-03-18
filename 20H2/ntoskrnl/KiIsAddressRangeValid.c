/*
 * XREFs of KiIsAddressRangeValid @ 0x1403C96CC
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1403C9530 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x1403C95EC (KiValidateTriageDumpDataArray.c)
 *     IopAddTriageDumpDataBlock @ 0x1403CBED8 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x140500240 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1405008DC (IoGetLoadedDriverInfo.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405018FC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140502C64 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x14050326C (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x140509270 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405092D8 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140509380 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14050951C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x1405095D8 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1405096E0 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1405097D0 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14050992C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140509A2C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x140509ABC (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14050A19C (IopCalculateStackInformation.c)
 *     PopInternalSaveStackToDumpFile @ 0x14056352C (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402CC2D0 (MmIsAddressValidEx.c)
 */

char __fastcall KiIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( !v3 )
    return 1;
  while ( v2 >= 0x10000 && MmIsAddressValidEx(v2) )
  {
    v2 += 4096LL;
    if ( !--v3 )
      return 1;
  }
  return 0;
}
