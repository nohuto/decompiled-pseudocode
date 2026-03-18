/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800DE2D4
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800474A4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180061494 (--1CWindowNode@@MEAA@XZ.c)
 *     ??1CThreadContext@@AEAA@XZ @ 0x180261A1C (--1CThreadContext@@AEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (v2 & 2) != 0 )
    DefaultHeap::Free((void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)this = 0LL;
}
