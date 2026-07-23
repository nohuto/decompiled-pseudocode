/*
 * XREFs of PopFastS4Check @ 0x140779C80
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14038D514 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140C23A80 != 4 )
    return 0;
  if ( byte_140C2333C )
    return 0;
  result = 1;
  if ( byte_140C23B39 != 1 || byte_140C23B30 != 1 || byte_140C23B3E != 2 )
    return 0;
  return result;
}
