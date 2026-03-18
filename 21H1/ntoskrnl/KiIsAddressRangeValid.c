/*
 * XREFs of KiIsAddressRangeValid @ 0x1403C5CCC
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1403C5B30 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x1403C5BEC (KiValidateTriageDumpDataArray.c)
 *     IopAddTriageDumpDataBlock @ 0x1403C8488 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x1404FC320 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1404FC9BC (IoGetLoadedDriverInfo.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404FD9DC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x1404FED44 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x1404FF34C (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x1405052F0 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140505358 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140505400 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14050559C (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x140505658 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140505760 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x140505850 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1405059AC (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140505AAC (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x140505B3C (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14050621C (IopCalculateStackInformation.c)
 *     PopInternalSaveStackToDumpFile @ 0x14055F508 (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402B2510 (MmIsAddressValidEx.c)
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
