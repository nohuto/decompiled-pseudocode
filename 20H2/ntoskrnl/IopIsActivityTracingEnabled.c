/*
 * XREFs of IopIsActivityTracingEnabled @ 0x140209C94
 * Callers:
 *     IopQueueWorkItemProlog @ 0x14020995C (IopQueueWorkItemProlog.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402F3C98 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateIrpWithExtension @ 0x14031F2B8 (IopAllocateIrpWithExtension.c)
 *     IopAllocateBackpocketIrp @ 0x1404FE530 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FE7D0 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x1409C77B0 (IovAllocateIrp.c)
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
