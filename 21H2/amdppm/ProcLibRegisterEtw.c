/*
 * XREFs of ProcLibRegisterEtw @ 0x1C0038228
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00387D0 (ProcLibGlobalInit.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0021658 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

NTSTATUS ProcLibRegisterEtw()
{
  NTSTATUS result; // eax

  result = EtwRegister(
             &PPM_ETW_PROVIDER,
             (PETWENABLECALLBACK)ProcLibTraceControlCallback,
             0LL,
             (PREGHANDLE)&WPP_MAIN_CB.Queue);
  if ( result >= 0 )
  {
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation();
    result = 0;
    ProcLibEtwRegistered = 1;
  }
  return result;
}
