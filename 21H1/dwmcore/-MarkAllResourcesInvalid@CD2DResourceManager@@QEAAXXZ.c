/*
 * XREFs of ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x1800A4C88
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800A3A10 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18003105C (-UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x1800A4CE4 (-MarkInvalid@CD2DResource@@IEAAXXZ.c)
 */

void __fastcall CD2DResourceManager::MarkAllResourcesInvalid(CD2DResourceManager *this)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax

  while ( *(CD2DResourceManager **)this != this )
  {
    v2 = *((_QWORD *)this + 1);
    if ( *(CD2DResourceManager **)v2 != this || (v3 = *(_QWORD **)(v2 + 8), *v3 != v2) )
      __fastfail(3u);
    *((_QWORD *)this + 1) = v3;
    *v3 = this;
    CD2DResourceManager::UnmanageResource((CD2DContext **)this, (struct CD2DResource *)(v2 - 40));
    CD2DResource::MarkInvalid((CD2DResource *)(v2 - 40));
  }
}
