/*
 * XREFs of EngCreateFastMutex @ 0x1C014E6B0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C000A9CC (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
