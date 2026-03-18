/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x14036C978
 * Callers:
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x1402E8960 (KiInitializeUserApc.c)
 *     KeRaiseUserException @ 0x1405143E0 (KeRaiseUserException.c)
 *     KiRaiseException @ 0x1405203B0 (KiRaiseException.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall KiSetupForInstrumentationReturn(__int64 a1)
{
  struct _KTHREAD *result; // rax
  void *InstrumentationCallback; // r8

  result = KeGetCurrentThread();
  InstrumentationCallback = result->ApcState.Process->InstrumentationCallback;
  if ( InstrumentationCallback )
  {
    if ( *(_WORD *)(a1 + 368) == 51 )
    {
      result = *(struct _KTHREAD **)(a1 + 360);
      *(_QWORD *)(a1 + 88) = result;
      *(_QWORD *)(a1 + 360) = InstrumentationCallback;
    }
  }
  return result;
}
