/*
 * XREFs of ?UnLink@CVisualTreeData@@MEAAXXZ @ 0x1800C9F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisualTreeData::UnLink(CVisualTreeData *this)
{
  __int64 v1; // r9
  CVisualTreeData **v2; // rdx
  CVisualTreeData **v3; // r8
  CVisualTreeData **v4; // r8
  CVisualTreeData **v5; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 40);
    v2 = (CVisualTreeData **)*((_QWORD *)this + 38);
    if ( v2[1] != (CVisualTreeData *)((char *)this + 304)
      || (v3 = (CVisualTreeData **)*((_QWORD *)this + 39), *v3 != (CVisualTreeData *)((char *)this + 304))
      || (*v3 = (CVisualTreeData *)v2,
          v2[1] = (CVisualTreeData *)v3,
          --*(_DWORD *)(v1 + 5888),
          v4 = (CVisualTreeData **)*((_QWORD *)this + 36),
          v4[1] != (CVisualTreeData *)((char *)this + 288))
      || (v5 = (CVisualTreeData **)*((_QWORD *)this + 37), *v5 != (CVisualTreeData *)((char *)this + 288)) )
    {
      __fastfail(3u);
    }
    *v5 = (CVisualTreeData *)v4;
    v4[1] = (CVisualTreeData *)v5;
    *((_BYTE *)this + 16) = 0;
  }
}
