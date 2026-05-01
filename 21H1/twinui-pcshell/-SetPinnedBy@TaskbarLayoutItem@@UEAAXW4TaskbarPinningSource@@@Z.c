/*
 * XREFs of ?SetPinnedBy@TaskbarLayoutItem@@UEAAXW4TaskbarPinningSource@@@Z @ 0x18008A310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TaskbarLayoutItem::SetPinnedBy(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 112) = a2;
}
