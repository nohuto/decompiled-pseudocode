/*
 * XREFs of IopIsActivityTracingEnabled @ 0x14025B27C
 * Callers:
 *     IopQueueWorkItemProlog @ 0x14025B18C (IopQueueWorkItemProlog.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402ECD88 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateIrpWithExtension @ 0x14033F4AC (IopAllocateIrpWithExtension.c)
 *     IopAllocateBackpocketIrp @ 0x1404FA650 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FA8DC (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x1409C1790 (IovAllocateIrp.c)
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
