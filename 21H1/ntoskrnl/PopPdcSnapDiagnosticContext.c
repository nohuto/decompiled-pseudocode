/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x1408EBAC8
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x140570B40 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C54340;
  if ( qword_140C54340 )
    return (__int64 (*)(void))qword_140C54340();
  return result;
}
