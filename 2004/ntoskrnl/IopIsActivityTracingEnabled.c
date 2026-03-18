/*
 * XREFs of IopIsActivityTracingEnabled @ 0x140297AFC
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x14026FE70 (IopAllocateIrpWithExtension.c)
 *     IopQueueWorkItemProlog @ 0x140297A0C (IopQueueWorkItemProlog.c)
 *     IoMakeAssociatedIrpPriv @ 0x1403266B8 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateBackpocketIrp @ 0x1404FACA0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FAF2C (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x1409C17A0 (IovAllocateIrp.c)
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
