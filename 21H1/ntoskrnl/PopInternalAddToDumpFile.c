/*
 * XREFs of PopInternalAddToDumpFile @ 0x14055F450
 * Callers:
 *     PopSetRange @ 0x140384990 (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404FD9DC (IopAddBugcheckTriageDataFromParameters.c)
 *     PopIrpWatchdogBugcheck @ 0x14055F698 (PopIrpWatchdogBugcheck.c)
 *     PoAddPowerTriageData @ 0x140568FCC (PoAddPowerTriageData.c)
 *     PopPowerActionWatchdog @ 0x140569B00 (PopPowerActionWatchdog.c)
 *     PopFreeHiberContext @ 0x14075F980 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x1407AADD0 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x1408E2F30 (PoShutdownBugCheck.c)
 *     PopDecompressHiberBlocks @ 0x14098D8EC (PopDecompressHiberBlocks.c)
 *     PopRestoreHiberContext @ 0x14098F728 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x14098FDF4 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x14098FFF4 (PopRequestWrite.c)
 *     PopHiberReadChecksums @ 0x1409AD6A8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409ADB84 (PopRequestRead.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403C8408 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x14055F508 (PopInternalSaveStackToDumpFile.c)
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
  if ( *(_QWORD *)&qword_140C23438 )
    IoAddTriageDumpDataBlock(qword_140C23438, (PVOID)0x1D8);
  if ( qword_140C23440 )
    IoAddTriageDumpDataBlock(qword_140C23440, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x210);
}
