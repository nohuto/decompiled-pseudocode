/*
 * XREFs of PopFastS4Check @ 0x140765120
 * Callers:
 *     PopActionRetrieveInitialState @ 0x140389928 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140C23420 != 4 )
    return 0;
  if ( byte_140C23EDC )
    return 0;
  result = 1;
  if ( byte_140C234D9 != 1 || byte_140C234D0 != 1 || byte_140C234DE != 2 )
    return 0;
  return result;
}
