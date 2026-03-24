/*
 * XREFs of IopIsActivityTracingEnabled @ 0x1402EDEF0
 * Callers:
 *     IopQueueWorkItemProlog @ 0x140206670 (IopQueueWorkItemProlog.c)
 *     IopAllocateIrpWithExtension @ 0x1402ED748 (IopAllocateIrpWithExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402ED8C8 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateBackpocketIrp @ 0x1405000D0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140500370 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x1409C47A0 (IovAllocateIrp.c)
 * Callees:
 *     <none>
 */

char IopIsActivityTracingEnabled()
{
  char v0; // cl

  if ( (IopFunctionPointerMask & 4) == 0 )
    return 0;
  v0 = 1;
  if ( (IopIrpExtensionStatus & 1) == 0 )
    return 0;
  return v0;
}
