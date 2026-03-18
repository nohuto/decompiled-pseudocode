/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x1408ECD48
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x140571190 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C54240;
  if ( qword_140C54240 )
    return (__int64 (*)(void))qword_140C54240();
  return result;
}
