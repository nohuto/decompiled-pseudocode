/*
 * XREFs of _SqmPenDownCount@0 @ 0x159471
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall SqmPenDownCount()
{
  unsigned int result; // eax

  result = gSqmPenDownCount;
  if ( gSqmPenDownCount )
    return --gSqmPenDownCount;
  return result;
}
