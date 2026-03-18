/*
 * XREFs of _EnterEditionCrit@4 @ 0xCC5B6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EnterEditionCrit(int a1)
{
  if ( ExIsResourceAcquiredExclusiveLite(_gpresUser) )
    return 1;
  EnterCrit(a1, 1);
  return 0;
}
