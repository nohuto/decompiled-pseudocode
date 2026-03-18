/*
 * XREFs of EngCreateFastMutex @ 0x1C0154A00
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C002109C (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
