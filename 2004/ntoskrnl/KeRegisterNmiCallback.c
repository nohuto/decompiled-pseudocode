/*
 * XREFs of KeRegisterNmiCallback @ 0x14050F4A0
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1404F3F8C (HvlpInitializeHvCrashdump.c)
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x14050F834 (KiRegisterNmiSxCallback.c)
 *     KiTraceLogNmiCallback @ 0x1408B817C (KiTraceLogNmiCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  void *v3; // rbx

  v3 = (void *)KiRegisterNmiSxCallback(CallbackRoutine, Context);
  if ( v3 )
    KiTraceLogNmiCallback(CallbackRoutine);
  return v3;
}
