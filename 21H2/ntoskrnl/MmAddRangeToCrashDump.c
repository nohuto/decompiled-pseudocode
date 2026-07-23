/*
 * XREFs of MmAddRangeToCrashDump @ 0x140538818
 * Callers:
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14050B9D8 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14050BCF0 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x14050BE70 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDeviceNode @ 0x14050BFEC (IopMarkPagesForDeviceNode.c)
 *     IopMarkPagesForDpcData @ 0x14050C04C (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14050C170 (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x14050C22C (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14050C340 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     MiAddPartitionDataToCrashDump @ 0x140537B78 (MiAddPartitionDataToCrashDump.c)
 *     MiAddPartitionToCrashDump @ 0x140537D90 (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x14053851C (MiAddUnicodeStringToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x1405386D0 (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x140538920 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x1405389B0 (MmGetDumpRange.c)
 *     ExAddPrivateDataToCrashDump @ 0x1405B3780 (ExAddPrivateDataToCrashDump.c)
 *     IopLiveDumpAddTriageDumpData @ 0x1409AC1B0 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1409AD928 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409AD988 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1409ADB4C (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1409ADC08 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409ADD1C (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MiIsWorkingSetTrimThread @ 0x140243290 (MiIsWorkingSetTrimThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiAddRangeToCrashDump @ 0x140538028 (MiAddRangeToCrashDump.c)
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
