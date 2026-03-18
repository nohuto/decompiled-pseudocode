/*
 * XREFs of ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x1800C60B8
 * Callers:
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800C5F7C (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x1800C6004 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180066514 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CVisual::OnTransformChanged(CVisual *this)
{
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx

  *((_QWORD *)this + 55) = 0LL;
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( TreeDataListHead )
  {
    for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      i[-11].Blink = 0LL;
  }
}
