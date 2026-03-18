/*
 * XREFs of EngCreateSemaphore @ 0x1C00A3CC0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C00A56B4 (GreCreateSemaphoreInternal.c)
 */

HSEMAPHORE EngCreateSemaphore(void)
{
  return (HSEMAPHORE)GreCreateSemaphoreInternal(1LL);
}
