/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x14036D158
 * Callers:
 *     KiInitializeUserApc @ 0x140230744 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 *     KeRaiseUserException @ 0x140516160 (KeRaiseUserException.c)
 *     KiRaiseException @ 0x1405220D0 (KiRaiseException.c)
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
