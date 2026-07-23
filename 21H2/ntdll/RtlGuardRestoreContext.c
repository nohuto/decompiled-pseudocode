/*
 * XREFs of RtlGuardRestoreContext @ 0x18006EDE0
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     KiUserExceptionDispatcher @ 0x1800A14C0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006EEF0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardIsValidStackPointer @ 0x18006EFF0 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006F020 (RtlGuardCheckExceptionHandler.c)
 *     LdrpValidateUserCallTarget @ 0x18008CC90 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x18008CCE0 (LdrpValidateUserCallTargetES.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  unsigned __int64 v4; // rsi
  int v5; // eax
  int v6; // eax
  BOOL v7; // eax
  unsigned __int64 v8; // rcx
  int v9; // eax

  if ( ExceptionRecord )
  {
    switch ( ExceptionRecord->ExceptionCode )
    {
      case 0x80000026:
        v4 = ExceptionRecord->ExceptionInformation[0];
        LOBYTE(v5) = LdrControlFlowGuardEnforced();
        if ( v5 && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v4 + 16)) )
          goto LABEL_14;
        if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
          RtlGuardCheckLongJumpTarget(*(PVOID *)(v4 + 80), 0, 0LL);
        goto LABEL_6;
      case 0x80000029:
        if ( ExceptionRecord->NumberParameters )
        {
          LOBYTE(v6) = LdrControlFlowGuardEnforced();
          if ( v6 )
          {
            v7 = LdrControlFlowGuardEnforcedWithExportSuppression();
            v8 = ExceptionRecord->ExceptionInformation[0];
            if ( v7 )
              LdrpValidateUserCallTargetES(v8);
            else
              LdrpValidateUserCallTarget(v8);
          }
        }
        break;
      case 0xC0000027:
        if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
          RtlGuardCheckExceptionHandler((PVOID)ContextRecord->Rip);
        goto LABEL_6;
    }
  }
  LOBYTE(v9) = LdrControlFlowGuardEnforced();
  if ( v9 && !(unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
LABEL_14:
    __fastfail(0xDu);
LABEL_6:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
