/*
 * XREFs of RtlGuardRestoreContext @ 0x1402E6944
 * Callers:
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 * Callees:
 *     RtlGuardCheckExceptionHandler @ 0x1402E69A0 (RtlGuardCheckExceptionHandler.c)
 *     RtlRestoreContext @ 0x1403FF3C0 (RtlRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058A008 (RtlGuardCheckLongJumpTarget.c)
 */

void __fastcall RtlGuardRestoreContext(PCONTEXT ContextRecord, _EXCEPTION_RECORD *ExceptionRecord, BOOL *a3)
{
  if ( ExceptionRecord )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483610 )
    {
      RtlGuardCheckLongJumpTarget(*(PVOID *)(ExceptionRecord->ExceptionInformation[0] + 80), (BOOL)ExceptionRecord, a3);
    }
    else if ( ExceptionRecord->ExceptionCode == -1073741785 )
    {
      RtlGuardCheckExceptionHandler((PVOID)ContextRecord->Rip);
    }
  }
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
