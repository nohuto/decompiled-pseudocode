/*
 * XREFs of KeRegisterNmiCallback @ 0x140514B50
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1404F931C (HvlpInitializeHvCrashdump.c)
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x140514EE4 (KiRegisterNmiSxCallback.c)
 *     KiTraceLogNmiCallback @ 0x1408BB3DC (KiTraceLogNmiCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  void *v3; // rbx

  v3 = (void *)KiRegisterNmiSxCallback(CallbackRoutine, Context);
  if ( v3 )
    KiTraceLogNmiCallback(CallbackRoutine);
  return v3;
}
