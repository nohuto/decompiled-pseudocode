/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x14036A998
 * Callers:
 *     KiInitializeUserApc @ 0x1402E30B0 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 *     KeRaiseUserException @ 0x140510AB0 (KeRaiseUserException.c)
 *     KiRaiseException @ 0x14051C9E0 (KiRaiseException.c)
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
