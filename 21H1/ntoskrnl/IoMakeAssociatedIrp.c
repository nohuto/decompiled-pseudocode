/*
 * XREFs of IoMakeAssociatedIrp @ 0x1405001B0
 * Callers:
 *     <none>
 * Callees:
 *     IoMakeAssociatedIrpPriv @ 0x1402ECD88 (IoMakeAssociatedIrpPriv.c)
 */

PIRP __stdcall IoMakeAssociatedIrp(PIRP Irp, CCHAR StackSize)
{
  return (PIRP)IoMakeAssociatedIrpPriv((__int64)Irp, 0LL, StackSize);
}
