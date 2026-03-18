/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x140733028
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x14072028C (PiProcessQueryAndCancelRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
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
