/*
 * XREFs of KeRegisterNmiCallback @ 0x140512DD0
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1404F77FC (HvlpInitializeHvCrashdump.c)
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x140513164 (KiRegisterNmiSxCallback.c)
 *     KiTraceLogNmiCallback @ 0x1408BDD9C (KiTraceLogNmiCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  void *v3; // rbx

  v3 = (void *)KiRegisterNmiSxCallback(CallbackRoutine, Context);
  if ( v3 )
    KiTraceLogNmiCallback(CallbackRoutine);
  return v3;
}
