/*
 * XREFs of ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C00532C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0005D70 (-DeleteObject@FxObject@@UEAAXXZ.c)
 */

void __fastcall FxDriver::DeleteObject(FxDriver *this)
{
  FxObject::DeleteObject(this);
}
