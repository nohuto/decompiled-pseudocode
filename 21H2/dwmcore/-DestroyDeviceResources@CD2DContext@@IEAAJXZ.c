/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800225BC
 * Callers:
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x180021788 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800217BC (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x180022734 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x180022828 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800228A0 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x180023E88 (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DResourceManager **this)
{
  CD2DResourceManager *v2; // rcx
  CD2DResourceManager *v3; // rcx
  CD2DResourceManager *v4; // rcx
  CD2DResourceManager *v5; // rcx
  CD2DResourceManager *v6; // rcx
  CD2DResourceManager *v7; // rcx
  CD2DResourceManager *v8; // rcx
  CD2DResourceManager *v9; // rcx
  __int64 i; // rdi
  CD2DResourceManager *v12; // r14
  __int64 v13; // rcx

  CD2DContext::ReleaseCachedD2DTarget((CD2DContext *)this);
  v2 = this[21];
  if ( v2 )
  {
    CD2DResourceManager::MarkAllResourcesInvalid(v2);
    v3 = this[21];
    if ( v3 )
    {
      operator delete(v3, 0x20uLL);
      this[21] = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable((CD2DContext *)this);
  v4 = this[39];
  if ( v4 )
  {
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v4 + 16LL))(v4);
    this[39] = 0LL;
  }
  v5 = this[26];
  if ( v5 )
  {
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v5 + 16LL))(v5);
    this[26] = 0LL;
  }
  v6 = this[25];
  if ( v6 )
  {
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v6 + 16LL))(v6);
    this[25] = 0LL;
  }
  v7 = this[23];
  if ( v7 )
  {
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v7 + 16LL))(v7);
    this[23] = 0LL;
  }
  v8 = this[24];
  if ( v8 )
  {
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v8 + 16LL))(v8);
    this[24] = 0LL;
  }
  v9 = this[40];
  if ( v9 )
  {
    this[40] = 0LL;
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 76); i = (unsigned int)(i + 1) )
  {
    v12 = this[35];
    v13 = *((_QWORD *)v12 + i);
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      *((_QWORD *)v12 + i) = 0LL;
    }
  }
  *((_DWORD *)this + 76) = 0;
  CDrawListBatchManager::DestroyDeviceResources((CDrawListBatchManager *)(this + 1));
  return 0LL;
}
