/*
 * XREFs of EngCreateFastMutex @ 0x1C014C260
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C007423C (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
