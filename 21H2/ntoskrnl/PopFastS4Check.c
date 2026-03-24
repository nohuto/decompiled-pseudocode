/*
 * XREFs of PopFastS4Check @ 0x140779AC0
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14038D3C4 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140C23460 != 4 )
    return 0;
  if ( byte_140C23E9C )
    return 0;
  result = 1;
  if ( byte_140C23519 != 1 || byte_140C23510 != 1 || byte_140C2351E != 2 )
    return 0;
  return result;
}
