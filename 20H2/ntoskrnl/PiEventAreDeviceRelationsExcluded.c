/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x1407424B8
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x14072E27C (PiProcessQueryAndCancelRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073F768 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

char __fastcall PiEventAreDeviceRelationsExcluded(int a1)
{
  char result; // al

  result = 1;
  if ( a1 <= 1 || a1 == 4 || a1 >= 7 )
    return 0;
  return result;
}
