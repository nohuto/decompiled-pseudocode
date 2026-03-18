/*
 * XREFs of IoMakeAssociatedIrp @ 0x140500800
 * Callers:
 *     <none>
 * Callees:
 *     IoMakeAssociatedIrpPriv @ 0x1403266B8 (IoMakeAssociatedIrpPriv.c)
 */

PIRP __stdcall IoMakeAssociatedIrp(PIRP Irp, CCHAR StackSize)
{
  return (PIRP)IoMakeAssociatedIrpPriv((__int64)Irp, 0LL, StackSize);
}
