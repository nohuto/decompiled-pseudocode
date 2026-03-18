/*
 * XREFs of KeRegisterNmiCallback @ 0x14056A870
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x14054B14C (HvlpInitializeHvCrashdump.c)
 *     DifKeRegisterNmiCallbackWrapper @ 0x140614220 (DifKeRegisterNmiCallbackWrapper.c)
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x14056ACB8 (KiRegisterNmiSxCallback.c)
 *     KiTraceLogNmiCallback @ 0x140961170 (KiTraceLogNmiCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  void *v3; // rbx

  v3 = (void *)KiRegisterNmiSxCallback(CallbackRoutine, Context);
  if ( v3 )
    KiTraceLogNmiCallback(CallbackRoutine);
  return v3;
}
