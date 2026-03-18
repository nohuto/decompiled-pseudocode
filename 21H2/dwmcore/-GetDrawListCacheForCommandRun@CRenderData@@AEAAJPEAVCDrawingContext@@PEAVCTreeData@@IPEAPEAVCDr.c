/*
 * XREFs of ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18005B9CC
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18005AAF0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800961B0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AF4F4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800AF97C (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800C8140 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D75D0 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CRenderData::GetDrawListCacheForCommandRun(
        CRenderData *this,
        const struct IDeviceTarget **a2,
        struct CTreeData *a3,
        unsigned int a4,
        struct CDrawListCache **a5)
{
  int Cache; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  struct CDrawingContext *v12; // r8
  CDrawListCache *v13; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  struct D2D_SIZE_F v17; // [rsp+30h] [rbp-18h] BYREF
  CDrawListCache *v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = 0LL;
  if ( *((_BYTE *)a2 + 8043) )
  {
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v18);
    Cache = CDrawListCacheSet::GetCache((struct CTreeData *)((char *)a3 + 16), 2u, a4, a2[4], &v18);
    v11 = Cache;
    if ( Cache < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Cache, 0x1CDu, 0LL);
      goto LABEL_6;
    }
    v12 = (struct CDrawingContext *)a2;
    v13 = v18;
    if ( CContent::IsDrawListCacheDirty(this, v18, v12, &v17, 0LL) )
      CDrawListCache::Invalidate(v13);
  }
  else
  {
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v18);
    v15 = CDrawListCache::Create(&v18);
    v11 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1D7u, 0LL);
      goto LABEL_6;
    }
    v13 = v18;
  }
  v18 = 0LL;
  *a5 = v13;
LABEL_6:
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v18);
  return v11;
}
