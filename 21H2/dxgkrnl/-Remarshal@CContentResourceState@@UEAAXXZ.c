/*
 * XREFs of ?Remarshal@CContentResourceState@@UEAAXXZ @ 0x1C0080B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Remarshal@CFlipResourceState@@UEAAXXZ @ 0x1C007F2F0 (-Remarshal@CFlipResourceState@@UEAAXXZ.c)
 */

void __fastcall CContentResourceState::Remarshal(CContentResourceState *this)
{
  *((_BYTE *)this + 64) |= 1u;
  CFlipResourceState::Remarshal(this);
}
