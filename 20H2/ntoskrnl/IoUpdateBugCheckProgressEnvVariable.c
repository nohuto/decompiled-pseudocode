/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x140501060
 * Callers:
 *     IoSaveBugCheckProgress @ 0x140500C00 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x140500DDC (IoSetBugCheckProgressAndFlag.c)
 *     IoSetBugCheckProgressFlag @ 0x140500E28 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x140501150 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140502180 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405022D0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140502420 (IopFillTriageDumpDataBlocks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x14051BFA0 (KeFrozenProcessorCount.c)
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
