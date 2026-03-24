/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x1407394CC
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x1407324EC (PiProcessQueryAndCancelRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736914 (PnpProcessQueryRemoveAndEject.c)
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
