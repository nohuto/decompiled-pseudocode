/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C000EFA4
 * Callers:
 *     LinkNodepAddLinkNodeWorker @ 0x1C00917E0 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTranslateResources @ 0x1C0093200 (IrqTranslateResources.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AF240 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B6160 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B6410 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B6960 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent(Object, 0, 0);
}
