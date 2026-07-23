/*
 * XREFs of _RtlIsActivationContextActive@4 @ 0x4B33DB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsActivationContextActive(PACTIVATION_CONTEXT ActivationContext)
{
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame; // eax

  ActiveFrame = NtCurrentTeb()->ActivationContextStackPointer->ActiveFrame;
  if ( !ActiveFrame )
    return 0;
  while ( ActiveFrame->ActivationContext != ActivationContext )
  {
    ActiveFrame = ActiveFrame->Previous;
    if ( !ActiveFrame )
      return 0;
  }
  return 1;
}
