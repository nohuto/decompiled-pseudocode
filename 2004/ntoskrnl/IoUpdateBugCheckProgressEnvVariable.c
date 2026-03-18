/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x1404FD790
 * Callers:
 *     IoSaveBugCheckProgress @ 0x1404FD330 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x1404FD50C (IoSetBugCheckProgressAndFlag.c)
 *     IoSetBugCheckProgressFlag @ 0x1404FD558 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x1404FD880 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1404FE8B0 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1404FEA00 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1404FEB50 (IopFillTriageDumpDataBlocks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x1405185D0 (KeFrozenProcessorCount.c)
 */

__int64 IoUpdateBugCheckProgressEnvVariable()
{
  __int64 result; // rax

  result = KeFrozenProcessorCount();
  if ( (unsigned int)(KeNumberProcessors_0 - result) <= 1 && !BugCheckProgressEFICalled )
  {
    BugCheckProgressEFICalled = 1;
    result = ((__int64 (__fastcall *)(const wchar_t *, __int64 *, __int64, __int64, int))IopReportBugCheckProgress)(
               L"BugCheckProgress",
               BUGCHECK_EFI_GUID,
               CrashdmpDumpBlock + 1404,
               4LL,
               1);
    BugCheckProgressEFICalled = 0;
  }
  return result;
}
