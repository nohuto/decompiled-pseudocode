/*
 * XREFs of PopInternalAddToDumpFile @ 0x14055FAA0
 * Callers:
 *     PopSetRange @ 0x140385900 (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404FE02C (IopAddBugcheckTriageDataFromParameters.c)
 *     PopIrpWatchdogBugcheck @ 0x14055FCE8 (PopIrpWatchdogBugcheck.c)
 *     PoAddPowerTriageData @ 0x14056961C (PoAddPowerTriageData.c)
 *     PopPowerActionWatchdog @ 0x14056A150 (PopPowerActionWatchdog.c)
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x140767A78 (PopFreeHiberContext.c)
 *     PopThermalWorker @ 0x1407ADF30 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x1408E41B0 (PoShutdownBugCheck.c)
 *     PopRestoreHiberContext @ 0x140990478 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140990730 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140990B44 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x140990D44 (PopRequestWrite.c)
 *     PopDecompressHiberBlocks @ 0x140991804 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x1409AE508 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409AE9E4 (PopRequestRead.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x14055FB58 (PopInternalSaveStackToDumpFile.c)
 */

char __fastcall PopInternalAddToDumpFile(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( a1 )
  {
    if ( a2 )
      v4 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
    else
      LODWORD(v4) = 1;
    IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (PVOID)(unsigned int)((_DWORD)v4 << 12));
  }
  if ( a3 )
    PopInternalSaveStackToDumpFile(a3);
  IoAddTriageDumpDataBlock((ULONG)&PopHiberInfo, (PVOID)0xD8);
  IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1C8);
  if ( *(_QWORD *)&qword_140C22E78 )
    IoAddTriageDumpDataBlock(qword_140C22E78, (PVOID)0x1D8);
  if ( qword_140C22E80 )
    IoAddTriageDumpDataBlock(qword_140C22E80, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x210);
}
