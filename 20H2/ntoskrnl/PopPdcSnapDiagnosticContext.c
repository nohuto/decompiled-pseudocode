/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x1408F2958
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x140574BC0 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C542C0;
  if ( qword_140C542C0 )
    return (__int64 (*)(void))qword_140C542C0();
  return result;
}
