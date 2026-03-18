/*
 * XREFs of KiIsAddressRangeValid @ 0x1403D7FD4
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1403D7DF0 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x1403D7ED0 (KiValidateTriageDumpDataArray.c)
 *     IopAddTriageDumpDataBlock @ 0x1403D9A34 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x14055225C (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1405528FC (IoGetLoadedDriverInfo.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140553A48 (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x1405550FC (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x140555698 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x14055C354 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14055C3BC (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14055C464 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14055C600 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14055C6BC (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14055C7C4 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14055C8B4 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14055CA14 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14055CB14 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14055CBA8 (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14055D50C (IopCalculateStackInformation.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140567630 (KiCollectTriageDumpDataBlocks.c)
 *     PopInternalSaveStackToDumpFile @ 0x1405C6710 (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
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
