/*
 * XREFs of BcdDeleteElement @ 0x140A1D394
 * Callers:
 *     PopAdaptiveInitializeBootContext @ 0x140AF3434 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BiDeleteElement @ 0x14080271C (BiDeleteElement.c)
 */

__int64 __fastcall BcdDeleteElement(void *a1, unsigned int a2)
{
  return BiDeleteElement(a1, a2);
}
