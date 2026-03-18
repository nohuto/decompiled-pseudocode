/*
 * XREFs of ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C0069E00
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008430 (-DeleteObject@FxObject@@UEAAXXZ.c)
 */

void __fastcall FxDriver::DeleteObject(FxDriver *this)
{
  FxObject::DeleteObject(this);
}
