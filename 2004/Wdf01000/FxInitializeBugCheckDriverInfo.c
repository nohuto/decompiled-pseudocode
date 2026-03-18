/*
 * XREFs of FxInitializeBugCheckDriverInfo @ 0x1C00905E8
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C0057170 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     RtlStringCopyWorkerA @ 0x1C002E380 (RtlStringCopyWorkerA.c)
 */

void FxInitializeBugCheckDriverInfo()
{
  void (__fastcall *SystemRoutineAddress)(_KBUGCHECK_REASON_CALLBACK_RECORD *, _QWORD, __int64, const char *); // rbx
  _FX_DUMP_DRIVER_INFO_ENTRY *PoolWithTag; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // r8
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  FxLibraryGlobals.BugCheckDriverInfoCount = 0;
  FxLibraryGlobals.BugCheckDriverInfoIndex = 0;
  FxLibraryGlobals.BugCheckDriverInfo = 0LL;
  funcName = 0LL;
  FxLibraryGlobals.BugCheckCallbackRecord.Entry = 0LL;
  *(_OWORD *)&FxLibraryGlobals.BugCheckCallbackRecord.CallbackRoutine = 0LL;
  *(_OWORD *)&FxLibraryGlobals.BugCheckCallbackRecord.Checksum = 0LL;
  if ( !FxLibraryGlobals.StaticallyLinked )
  {
    RtlInitUnicodeString(&funcName, L"KeRegisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(_KBUGCHECK_REASON_CALLBACK_RECORD *, _QWORD, __int64, const char *))MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      PoolWithTag = (_FX_DUMP_DRIVER_INFO_ENTRY *)ExAllocatePoolWithTag(
                                                    ExDefaultNonPagedPoolType,
                                                    0x230uLL,
                                                    0x72447846u);
      FxLibraryGlobals.BugCheckDriverInfo = PoolWithTag;
      if ( PoolWithTag )
      {
        FxLibraryGlobals.BugCheckDriverInfoCount = 10;
        PoolWithTag->FxDriverGlobals = 0LL;
        FxLibraryGlobals.BugCheckDriverInfo->Version.Major = 1;
        FxLibraryGlobals.BugCheckDriverInfo->Version.Minor = 31;
        FxLibraryGlobals.BugCheckDriverInfo->Version.Build = 0;
        if ( (int)RtlStringCopyWorkerA(FxLibraryGlobals.BugCheckDriverInfo->DriverName, v2, v3, "Wdf01000") < 0 )
          FxLibraryGlobals.BugCheckDriverInfo->DriverName[0] = 0;
        ++FxLibraryGlobals.BugCheckDriverInfoIndex;
        FxLibraryGlobals.BugCheckCallbackRecord.State = 0;
        SystemRoutineAddress(&FxLibraryGlobals.BugCheckCallbackRecord, FxpLibraryBugCheckCallback, 2LL, "Wdf01000");
      }
    }
  }
}
