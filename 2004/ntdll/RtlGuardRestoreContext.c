/*
 * XREFs of RtlGuardRestoreContext @ 0x18006DCA0
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     KiUserExceptionDispatcher @ 0x1800A0C80 (KiUserExceptionDispatcher.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006DDB0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardIsValidStackPointer @ 0x18006DEB0 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006DEE0 (RtlGuardCheckExceptionHandler.c)
 *     LdrpValidateUserCallTarget @ 0x18008C590 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x18008C5E0 (LdrpValidateUserCallTargetES.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  BOOL v6; // eax
  unsigned __int64 v7; // rcx

  if ( ExceptionRecord )
  {
    switch ( ExceptionRecord->ExceptionCode )
    {
      case 0x80000026:
        v4 = ExceptionRecord->ExceptionInformation[0];
        if ( (unsigned int)LdrControlFlowGuardEnforced()
          && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v4 + 16)) )
        {
          goto LABEL_14;
        }
        if ( ((*((_QWORD *)&xmmword_18017F390 + 1) >> 60) & 3) != 1 )
          RtlGuardCheckLongJumpTarget(*(_QWORD *)(v4 + 80), 0LL, 0LL);
        goto LABEL_6;
      case 0x80000029:
        if ( ExceptionRecord->NumberParameters && (unsigned int)LdrControlFlowGuardEnforced() )
        {
          v6 = LdrControlFlowGuardEnforcedWithExportSuppression(v5);
          v7 = ExceptionRecord->ExceptionInformation[0];
          if ( v6 )
            LdrpValidateUserCallTargetES(v7);
          else
            LdrpValidateUserCallTarget(v7);
        }
        break;
      case 0xC0000027:
        if ( ((*((_QWORD *)&xmmword_18017F390 + 1) >> 60) & 3) != 1 )
          RtlGuardCheckExceptionHandler(ContextRecord->Rip, 0LL, 0LL);
        goto LABEL_6;
    }
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() && !(unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
LABEL_14:
    __fastfail(0xDu);
LABEL_6:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
