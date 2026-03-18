/*
 * XREFs of ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C0080B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CFlipResourceState@@UEAAXXZ @ 0x1C007F320 (-Remove@CFlipResourceState@@UEAAXXZ.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C00816B4 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0081710 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

void __fastcall CContentResourceState::Remove(CContentResourceState *this)
{
  CContentResourceState::SetBoundBuffer(this, 0LL);
  CContentResourceState::SetBoundPropertySet(this, 0LL);
  *((_BYTE *)this + 64) &= ~1u;
  CFlipResourceState::Remove(this);
}
