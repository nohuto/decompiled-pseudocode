/*
 * XREFs of _RtlIsActivationContextActive@4 @ 0x4B33DB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlIsActivationContextActive(struct _ACTIVATION_CONTEXT *a1)
{
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame; // eax

  ActiveFrame = NtCurrentTeb()->ActivationContextStackPointer->ActiveFrame;
  if ( !ActiveFrame )
    return 0;
  while ( ActiveFrame->ActivationContext != a1 )
  {
    ActiveFrame = ActiveFrame->Previous;
    if ( !ActiveFrame )
      return 0;
  }
  return 1;
}
