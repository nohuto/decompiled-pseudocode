/*
 * XREFs of PopFastS4Check @ 0x140775B10
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14038CCA4 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140C23320 != 4 )
    return 0;
  if ( byte_140C23D5C )
    return 0;
  result = 1;
  if ( byte_140C233D9 != 1 || byte_140C233D0 != 1 || byte_140C233DE != 2 )
    return 0;
  return result;
}
