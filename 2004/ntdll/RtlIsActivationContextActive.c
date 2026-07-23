/*
 * XREFs of RtlIsActivationContextActive @ 0x1800DFA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsActivationContextActive(PACTIVATION_CONTEXT ActivationContext)
{
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *i; // rax

  for ( i = NtCurrentTeb()->ActivationContextStackPointer->ActiveFrame; i; i = i->Previous )
  {
    if ( i->ActivationContext == ActivationContext )
    {
      LOBYTE(i) = 1;
      return (unsigned __int8)i;
    }
  }
  return (unsigned __int8)i;
}
