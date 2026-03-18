/*
 * XREFs of KeRegisterNmiCallback @ 0x14050EE50
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1404F393C (HvlpInitializeHvCrashdump.c)
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x14050F1E4 (KiRegisterNmiSxCallback.c)
 *     KiTraceLogNmiCallback @ 0x1408B6E5C (KiTraceLogNmiCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  void *v3; // rbx

  v3 = (void *)KiRegisterNmiSxCallback(CallbackRoutine, Context);
  if ( v3 )
    KiTraceLogNmiCallback(CallbackRoutine);
  return v3;
}
