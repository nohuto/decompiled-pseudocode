/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x1404FD140
 * Callers:
 *     IoSaveBugCheckProgress @ 0x1404FCCE0 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x1404FCEBC (IoSetBugCheckProgressAndFlag.c)
 *     IoSetBugCheckProgressFlag @ 0x1404FCF08 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x1404FD230 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1404FE260 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1404FE3B0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1404FE500 (IopFillTriageDumpDataBlocks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x140517F80 (KeFrozenProcessorCount.c)
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
