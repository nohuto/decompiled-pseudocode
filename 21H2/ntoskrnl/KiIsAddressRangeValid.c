/*
 * XREFs of KiIsAddressRangeValid @ 0x1403CA40C
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1403CA270 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x1403CA32C (KiValidateTriageDumpDataArray.c)
 *     IopAddTriageDumpDataBlock @ 0x1403CCA18 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x140501D40 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1405023DC (IoGetLoadedDriverInfo.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405033FC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140504764 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x140504D6C (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x14050AFE0 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14050B048 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14050B0F0 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14050B28C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14050B348 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14050B450 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14050B540 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14050B69C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14050B79C (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14050B82C (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14050BF0C (IopCalculateStackInformation.c)
 *     PopInternalSaveStackToDumpFile @ 0x14056523C (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
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
