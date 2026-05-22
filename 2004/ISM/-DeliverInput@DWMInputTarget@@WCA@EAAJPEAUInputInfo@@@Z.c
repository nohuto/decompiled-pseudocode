/*
 * XREFs of ?DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z @ 0x18004AC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::DeliverInput(__int64 a1, struct InputInfo *a2)
{
  return DWMInputTarget::DeliverInput((DWMInputTarget *)(a1 - 32), a2);
}
