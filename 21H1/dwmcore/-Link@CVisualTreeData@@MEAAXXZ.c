/*
 * XREFs of ?Link@CVisualTreeData@@MEAAXXZ @ 0x1800BEA00
 * Callers:
 *     <none>
 * Callees:
 *     ?AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z @ 0x1800BEA5C (-AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z.c)
 */

void __fastcall CVisualTreeData::Link(CVisualTreeData *this)
{
  __int64 v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // r8

  v1 = *((_QWORD *)this + 40);
  v3 = (_QWORD *)((char *)this + 304);
  v4 = *(_QWORD **)(v1 + 5880);
  if ( *v4 != v1 + 5872 )
    __fastfail(3u);
  *v3 = v1 + 5872;
  v3[1] = v4;
  *v4 = v3;
  *(_QWORD *)(v1 + 5880) = v3;
  ++*(_DWORD *)(v1 + 5888);
  CVisual::AddVisualTreeDataToList(*((CVisual **)this + 3), this);
  *((_BYTE *)this + 16) = 1;
}
