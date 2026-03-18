/*
 * XREFs of MiHotAddBootDeferredDescriptors @ 0x140855C60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140B26348 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 */

LONG MiHotAddBootDeferredDescriptors()
{
  MiHotAddBootDeferredDescriptorsDiscardable();
  return KeSetEvent(&stru_140C51E68, 0, 0);
}
