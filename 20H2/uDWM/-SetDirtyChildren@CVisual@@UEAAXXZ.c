/*
 * XREFs of ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180042FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetDirtyChildren(CVisual *this)
{
  *((_DWORD *)this + 20) |= 1u;
}
