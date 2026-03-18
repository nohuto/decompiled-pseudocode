/*
 * XREFs of ?Remarshal@CContentResourceState@@UEAAXXZ @ 0x1C006C680
 * Callers:
 *     <none>
 * Callees:
 *     ?Remarshal@CFlipResourceState@@UEAAXXZ @ 0x1C006C6A0 (-Remarshal@CFlipResourceState@@UEAAXXZ.c)
 */

void __fastcall CContentResourceState::Remarshal(CContentResourceState *this)
{
  *((_BYTE *)this + 56) |= 1u;
  CFlipResourceState::Remarshal(this);
}
