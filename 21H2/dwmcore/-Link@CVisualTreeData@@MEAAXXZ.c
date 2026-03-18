/*
 * XREFs of ?Link@CVisualTreeData@@MEAAXXZ @ 0x1800D91A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z @ 0x1800D9200 (-AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z.c)
 */

void __fastcall CVisualTreeData::Link(CVisualTreeData *this)
{
  __int64 v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // r8

  v1 = *((_QWORD *)this + 52);
  v3 = (_QWORD *)((char *)this + 400);
  v4 = *(_QWORD **)(v1 + 4688);
  if ( *v4 != v1 + 4680 )
    __fastfail(3u);
  *v3 = v1 + 4680;
  v3[1] = v4;
  *v4 = v3;
  *(_QWORD *)(v1 + 4688) = v3;
  ++*(_DWORD *)(v1 + 4696);
  CVisual::AddVisualTreeDataToList(*((CVisual **)this + 36), this);
  *((_BYTE *)this + 10) = 1;
}
