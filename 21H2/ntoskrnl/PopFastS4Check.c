/*
 * XREFs of PopFastS4Check @ 0x1408080D4
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1403987D0 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140C227E0 != 4 )
    return 0;
  if ( byte_140C232DC )
    return 0;
  result = 1;
  if ( byte_140C22899 != 1 || byte_140C22890 != 1 || byte_140C2289E != 2 )
    return 0;
  return result;
}
