/*
 * XREFs of MmAddRangeToCrashDump @ 0x140593218
 * Callers:
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055CF88 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14055D2EC (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x14055D470 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDeviceNode @ 0x14055D808 (IopMarkPagesForDeviceNode.c)
 *     IopMarkPagesForDpcData @ 0x14055D868 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14055DC8C (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x14055DD48 (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14055DEF4 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     MiAddPartitionDataToCrashDump @ 0x140592758 (MiAddPartitionDataToCrashDump.c)
 *     MiAddPartitionToCrashDump @ 0x140592964 (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x140592C5C (MiAddUnicodeStringToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x1405930C8 (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x1405932F8 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x140593388 (MmGetDumpRange.c)
 *     ExAddPrivateDataToCrashDump @ 0x14063A4B0 (ExAddPrivateDataToCrashDump.c)
 *     IopLiveDumpAddTriageDumpData @ 0x140A656A0 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpMarkDeviceNode @ 0x140A66E54 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x140A66EB4 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x140A67078 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x140A67134 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140A67248 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MiIsWorkingSetTrimThread @ 0x14024C9A8 (MiIsWorkingSetTrimThread.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(__int64 a1, __int64 a2, __int64 a3)
{
  BOOL IsWorkingSetTrimThread; // eax
  int v8; // ecx
  __int64 v9; // [rsp+20h] [rbp-89h] BYREF
  __int64 v10; // [rsp+28h] [rbp-81h]
  __m128i v11[11]; // [rsp+30h] [rbp-79h] BYREF

  memset(v11, 0, sizeof(v11));
  v10 = 0LL;
  if ( !a3 )
    return 0LL;
  v11[0].m128i_i32[0] = 67584;
  v11[2].m128i_i64[0] = a2;
  v11[2].m128i_i64[1] = a3 + a2 - 1;
  v11[9].m128i_i64[1] = (__int64)MiFilterCrashDumpPte;
  v9 = a1;
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    IsWorkingSetTrimThread = MiIsWorkingSetTrimThread();
    v8 = HIDWORD(v10);
    if ( !IsWorkingSetTrimThread )
      v8 = 1;
    HIDWORD(v10) = v8;
  }
  v11[10].m128i_i64[1] = (__int64)&v9;
  MiWalkPageTables(v11);
  return (unsigned int)v10;
}
