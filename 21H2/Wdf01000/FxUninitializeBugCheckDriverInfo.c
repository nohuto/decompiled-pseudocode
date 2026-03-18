/*
 * XREFs of FxUninitializeBugCheckDriverInfo @ 0x1C0091130
 * Callers:
 *     FxLibraryCommonDecommission @ 0x1C005FF88 (FxLibraryCommonDecommission.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void FxUninitializeBugCheckDriverInfo()
{
  void (__fastcall *SystemRoutineAddress)(_KBUGCHECK_REASON_CALLBACK_RECORD *); // rax
  _UNICODE_STRING funcName; // [rsp+20h] [rbp-18h] BYREF

  funcName = 0LL;
  if ( FxLibraryGlobals.BugCheckCallbackRecord.CallbackRoutine )
  {
    RtlInitUnicodeString(&funcName, L"KeDeregisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(_KBUGCHECK_REASON_CALLBACK_RECORD *))MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      SystemRoutineAddress(&FxLibraryGlobals.BugCheckCallbackRecord);
      FxLibraryGlobals.BugCheckCallbackRecord.CallbackRoutine = 0LL;
      if ( FxLibraryGlobals.BugCheckDriverInfo )
      {
        FxLibraryGlobals.BugCheckDriverInfoIndex = 0;
        FxLibraryGlobals.BugCheckDriverInfoCount = 0;
        ExFreePoolWithTag(FxLibraryGlobals.BugCheckDriverInfo, 0);
        FxLibraryGlobals.BugCheckDriverInfo = 0LL;
      }
    }
  }
}
