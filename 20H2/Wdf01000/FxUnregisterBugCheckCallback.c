/*
 * XREFs of FxUnregisterBugCheckCallback @ 0x1C0090090
 * Callers:
 *     FxDestroy @ 0x1C005644C (FxDestroy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
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
        if ( stru_1C00A9F68.m_PoolToFree )
        {
          for ( i = 0; i < stru_1C00A9F68.m_Number; ++i )
          {
            v6 = (_FX_DRIVER_GLOBALS **)((char *)&stru_1C00A9F68.m_DriverUsage->FxDriverGlobals
                                       + i * stru_1C00A9F68.m_EntrySize);
            if ( *v6 == FxDriverGlobals )
              *v6 = 0LL;
          }
        }
      }
    }
  }
}
