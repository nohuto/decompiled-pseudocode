/*
 * XREFs of FxUnregisterBugCheckCallback @ 0x1C00911C8
 * Callers:
 *     FxDestroy @ 0x1C006B75C (FxDestroy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxUnregisterBugCheckCallback(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _KBUGCHECK_REASON_CALLBACK_RECORD *p_BugCheckCallbackRecord; // rdi
  bool v2; // zf
  void (__fastcall *SystemRoutineAddress)(_KBUGCHECK_REASON_CALLBACK_RECORD *); // rax
  unsigned int i; // ecx
  _FX_DRIVER_GLOBALS **v6; // rdx
  _UNICODE_STRING funcName; // [rsp+20h] [rbp-18h] BYREF

  p_BugCheckCallbackRecord = &FxDriverGlobals->BugCheckCallbackRecord;
  v2 = FxDriverGlobals->BugCheckCallbackRecord.CallbackRoutine == 0LL;
  funcName = 0LL;
  if ( !v2 )
  {
    RtlInitUnicodeString(&funcName, L"KeDeregisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(_KBUGCHECK_REASON_CALLBACK_RECORD *))MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      SystemRoutineAddress(p_BugCheckCallbackRecord);
      p_BugCheckCallbackRecord->CallbackRoutine = 0LL;
      if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
      {
        if ( FxLibraryGlobals.DriverTracker.m_PoolToFree )
        {
          for ( i = 0; i < FxLibraryGlobals.DriverTracker.m_Number; ++i )
          {
            v6 = (_FX_DRIVER_GLOBALS **)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                       + i * FxLibraryGlobals.DriverTracker.m_EntrySize);
            if ( *v6 == FxDriverGlobals )
              *v6 = 0LL;
          }
        }
      }
    }
  }
}
