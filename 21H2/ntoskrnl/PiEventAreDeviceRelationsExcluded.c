/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x14073968C
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x1407326AC (PiProcessQueryAndCancelRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
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
