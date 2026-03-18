/*
 * XREFs of ?SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ @ 0x1C0055840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1C00557D0 (-SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ.c)
 */

void __fastcall FxMemoryBufferFromPoolLookaside::SelfDestruct(FxMemoryBufferFromPoolLookaside *this)
{
  unsigned int v2; // edx
  unsigned int v3; // r8d

  ((void (__fastcall *)(FxLookasideList *, void *))this->m_pLookaside->FxMemoryBufferFromLookaside::__vftable[1].SelfDestruct)(
    this->m_pLookaside,
    this->m_Pool);
  FxMemoryBufferFromLookaside::SelfDestruct(this, v2, v3);
}
