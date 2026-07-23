/*
 * XREFs of IopIsActivityTracingEnabled @ 0x14020D8C0
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x14020D120 (IopAllocateIrpWithExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x14020D298 (IoMakeAssociatedIrpPriv.c)
 *     IopQueueWorkItemProlog @ 0x1402AAFA0 (IopQueueWorkItemProlog.c)
 *     IopAllocateBackpocketIrp @ 0x140500050 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1405002F0 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x1409C57A0 (IovAllocateIrp.c)
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
