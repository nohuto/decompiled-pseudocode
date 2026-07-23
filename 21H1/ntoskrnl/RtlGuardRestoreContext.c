/*
 * XREFs of RtlGuardRestoreContext @ 0x14032BA74
 * Callers:
 *     RtlUnwindEx @ 0x14032C220 (RtlUnwindEx.c)
 * Callees:
 *     RtlGuardCheckExceptionHandler @ 0x14032BAD0 (RtlGuardCheckExceptionHandler.c)
 *     RtlRestoreContext @ 0x1403FE130 (RtlRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140589918 (RtlGuardCheckLongJumpTarget.c)
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
