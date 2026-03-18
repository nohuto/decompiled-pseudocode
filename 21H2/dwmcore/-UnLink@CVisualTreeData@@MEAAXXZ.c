/*
 * XREFs of ?UnLink@CVisualTreeData@@MEAAXXZ @ 0x1800DD560
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

  if ( *((_BYTE *)this + 10) )
  {
    v1 = *((_QWORD *)this + 52);
    v2 = (CVisualTreeData **)*((_QWORD *)this + 50);
    if ( v2[1] != (CVisualTreeData *)((char *)this + 400)
      || (v3 = (CVisualTreeData **)*((_QWORD *)this + 51), *v3 != (CVisualTreeData *)((char *)this + 400))
      || (*v3 = (CVisualTreeData *)v2,
          v2[1] = (CVisualTreeData *)v3,
          --*(_DWORD *)(v1 + 4696),
          v4 = (CVisualTreeData **)*((_QWORD *)this + 48),
          v4[1] != (CVisualTreeData *)((char *)this + 384))
      || (v5 = (CVisualTreeData **)*((_QWORD *)this + 49), *v5 != (CVisualTreeData *)((char *)this + 384)) )
    {
      __fastfail(3u);
    }
    *v5 = (CVisualTreeData *)v4;
    v4[1] = (CVisualTreeData *)v5;
    *((_BYTE *)this + 10) = 0;
  }
}
