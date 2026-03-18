/*
 * XREFs of ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x1800DEC88
 * Callers:
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800DEB38 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x1800DEBCC (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CVisual::OnTransformChanged(CVisual *this)
{
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx

  *((_QWORD *)this + 76) = 0LL;
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( TreeDataListHead )
  {
    for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      i[-7].Flink = 0LL;
  }
}
