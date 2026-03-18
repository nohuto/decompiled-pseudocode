/*
 * XREFs of PopFastS4Check @ 0x140766AE0
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14038A998 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140C22E60 != 4 )
    return 0;
  if ( byte_140C238BC )
    return 0;
  result = 1;
  if ( byte_140C22F19 != 1 || byte_140C22F10 != 1 || byte_140C22F1E != 2 )
    return 0;
  return result;
}
