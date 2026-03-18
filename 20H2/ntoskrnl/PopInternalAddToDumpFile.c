/*
 * XREFs of PopInternalAddToDumpFile @ 0x140563474
 * Callers:
 *     PopSetRange @ 0x140387AA0 (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1405018FC (IopAddBugcheckTriageDataFromParameters.c)
 *     PopIrpWatchdogBugcheck @ 0x1405636C8 (PopIrpWatchdogBugcheck.c)
 *     PoAddPowerTriageData @ 0x14056D04C (PoAddPowerTriageData.c)
 *     PopPowerActionWatchdog @ 0x14056DB80 (PopPowerActionWatchdog.c)
 *     PopFreeHiberContext @ 0x140773150 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x1407BBE70 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x1408E9DC0 (PoShutdownBugCheck.c)
 *     PopRestoreHiberContext @ 0x1409964E8 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140996BB4 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x140996DB4 (PopRequestWrite.c)
 *     PopDecompressHiberBlocks @ 0x140997874 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x1409B4478 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409B4954 (PopRequestRead.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x14056352C (PopInternalSaveStackToDumpFile.c)
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
  if ( *(_QWORD *)&qword_140C23338 )
    IoAddTriageDumpDataBlock(qword_140C23338, (PVOID)0x1D8);
  if ( qword_140C23340 )
    IoAddTriageDumpDataBlock(qword_140C23340, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x210);
}
