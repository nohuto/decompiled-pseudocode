/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x140845558
 * Callers:
 *     PopDiagInitialize @ 0x140B1BC34 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

NTSTATUS PopDiagSleepStudyInitialize()
{
  NTSTATUS result; // eax

  if ( PopDiagSleepStudyHandleRegistered )
    return -1073740008;
  result = EtwRegister(
             &SLEEPSTUDY_ETW_PROVIDER,
             (PETWENABLECALLBACK)PopDiagTraceControlCallback,
             &PopDiagSleepStudyHandle,
             &PopDiagSleepStudyHandle);
  if ( result >= 0 )
    PopDiagSleepStudyHandleRegistered = 1;
  return result;
}
