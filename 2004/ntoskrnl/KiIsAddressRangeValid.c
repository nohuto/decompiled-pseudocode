/*
 * XREFs of KiIsAddressRangeValid @ 0x1403C6C3C
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1403C6AA0 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x1403C6B5C (KiValidateTriageDumpDataArray.c)
 *     IopAddTriageDumpDataBlock @ 0x1403C9298 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x1404FC970 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1404FD00C (IoGetLoadedDriverInfo.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404FE02C (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x1404FF394 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x1404FF99C (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x140505940 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405059A8 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140505A50 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140505BEC (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x140505CA8 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140505DB0 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x140505EA0 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x140505FFC (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1405060FC (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14050618C (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14050686C (IopCalculateStackInformation.c)
 *     PopInternalSaveStackToDumpFile @ 0x14055FB58 (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402594E0 (MmIsAddressValidEx.c)
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
