/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x140502BE0
 * Callers:
 *     IoSaveBugCheckProgress @ 0x140502780 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x14050295C (IoSetBugCheckProgressAndFlag.c)
 *     IoSetBugCheckProgressFlag @ 0x1405029A8 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x140502CD0 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140503D00 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140503E50 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140503FA0 (IopFillTriageDumpDataBlocks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x14051DA80 (KeFrozenProcessorCount.c)
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
