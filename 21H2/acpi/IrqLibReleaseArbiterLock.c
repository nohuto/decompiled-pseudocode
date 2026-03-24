/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C000F364
 * Callers:
 *     LinkNodepAddLinkNodeWorker @ 0x1C0091AF0 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTranslateResources @ 0x1C0093510 (IrqTranslateResources.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AF560 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B6480 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B6730 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B6C80 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent(Object, 0, 0);
}
