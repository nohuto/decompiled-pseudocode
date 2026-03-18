/*
 * XREFs of MmAddRangeToCrashDump @ 0x140532AB8
 * Callers:
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x140505CE8 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x140506000 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x140506180 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDeviceNode @ 0x1405062FC (IopMarkPagesForDeviceNode.c)
 *     IopMarkPagesForDpcData @ 0x14050635C (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x140506480 (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x14050653C (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x140506650 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     MiAddPartitionDataToCrashDump @ 0x140531E18 (MiAddPartitionDataToCrashDump.c)
 *     MiAddPartitionToCrashDump @ 0x140532030 (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x1405327BC (MiAddUnicodeStringToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x140532970 (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x140532BC0 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x140532C50 (MmGetDumpRange.c)
 *     ExAddPrivateDataToCrashDump @ 0x1405AD8D0 (ExAddPrivateDataToCrashDump.c)
 *     IopLiveDumpAddTriageDumpData @ 0x1409A75B0 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1409A8D28 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409A8D88 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1409A8F4C (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1409A9008 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409A911C (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MiIsWorkingSetTrimThread @ 0x14033E738 (MiIsWorkingSetTrimThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiAddRangeToCrashDump @ 0x1405322C8 (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64),
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 v6; // r10
  BOOL IsWorkingSetTrimThread; // eax
  int v8; // ecx
  unsigned __int64 v9; // r8
  unsigned __int64 *v10; // rdx
  __int64 v11; // r9
  _QWORD v13[12]; // [rsp+30h] [rbp-88h] BYREF

  memset(v13, 0, 0x58uLL);
  v6 = 1LL;
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    IsWorkingSetTrimThread = MiIsWorkingSetTrimThread();
    v8 = v13[10];
    if ( !IsWorkingSetTrimThread )
      v8 = v6;
    LODWORD(v13[10]) = v8;
  }
  v13[8] = a2;
  v9 = a3 + a2 - 1;
  v13[9] = v9;
  v10 = &v13[1];
  v11 = 4LL;
  do
  {
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v10 - 1) = a2;
    *v10 = v9;
    v10 += 2;
    v11 -= v6;
  }
  while ( v11 );
  return MiAddRangeToCrashDump(a1, a2, v9, (__int64)v13, 3u);
}
