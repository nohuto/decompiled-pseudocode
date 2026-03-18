/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x140553164
 * Callers:
 *     IoSaveBugCheckProgress @ 0x140552B40 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x140552EE8 (IoSetBugCheckProgressAndFlag.c)
 *     IoSetBugCheckProgressFlag @ 0x140552F34 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x140553244 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140554390 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405544E0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140554654 (IopFillTriageDumpDataBlocks.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x140579B48 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x140554090 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 */

__int64 IoUpdateBugCheckProgressEnvVariable()
{
  __int64 result; // rax

  result = IopBugCheckProgressEfiVariableServicesAvailable();
  if ( (_BYTE)result )
  {
    BugCheckProgressEfiCalled = 1;
    result = ((__int64 (__fastcall *)(const wchar_t *, __int64 *, __int64, __int64, int))IopReportBugCheckProgress)(
               L"BugCheckProgress",
               BUGCHECK_EFI_GUID,
               CrashdmpDumpBlock + 1404,
               4LL,
               1);
    BugCheckProgressEfiCalled = 0;
  }
  return result;
}
