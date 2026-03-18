/*
 * XREFs of ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006BD68
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006BC74 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x180047FAC (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@_N@Z @ 0x18006BF0C (-SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@_N@Z.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18006BFD4 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScrat.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18006DEC0 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800C71D4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800CC100 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800CFC80 (-SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x1800D0AA0 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 */

__int64 __fastcall CRenderTargetBitmapCache::GetCachedTargetBitmap(
        CRenderTargetBitmapCache *a1,
        const struct CResourceTag *a2,
        struct D2D_SIZE_U a3,
        __int64 a4,
        struct RenderTargetInfo *a5,
        int a6,
        CD2DBitmapCache *a7)
{
  CD2DBitmapCache *v7; // r12
  int v8; // r14d
  unsigned int v11; // ebp
  bool v12; // cl
  struct RenderTargetInfo *v13; // r13
  CD2DBitmapCache *v14; // rbx
  CRenderTargetBitmap *v15; // rdi
  CD2DBitmapCache *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct D2D_SIZE_U v21; // [rsp+80h] [rbp+18h] BYREF

  v21 = a3;
  v7 = a7;
  v8 = a6;
  a7 = 0LL;
  v11 = 0;
  *(_QWORD *)v7 = 0LL;
  if ( (v8 & 0xFFFFFFF9) != 0 || (v12 = 1, v8 == 6) )
    v12 = 0;
  v13 = a5;
  if ( CRenderTargetBitmapCache::FindMatchingBitmap(a1, a3, *(enum DXGI_FORMAT *)a4, *((_BYTE *)a5 + 20), v12, &a7) )
  {
    v14 = a7;
    v15 = (CD2DBitmapCache *)((char *)a7 + 120);
    CRenderTargetBitmap::SetAlphaMode((CD2DBitmapCache *)((char *)a7 + 120), *(enum DXGI_ALPHA_MODE *)(a4 + 4));
    CRenderTargetBitmap::SetColorSpace(v15, *(enum DXGI_COLOR_SPACE_TYPE *)(a4 + 8));
    CRenderTargetBitmap::SetDisplayId(v15, *((unsigned int *)v13 + 2));
    CRenderTargetBitmap::SetSDRBoost(v15, *((float *)v13 + 4));
    CD2DBitmapCache::MarkFullInvalid(v14);
LABEL_5:
    CScratchRenderTargetBitmap::SetPurpose(v14, a2, (unsigned int)(v8 - 1) <= 1);
    if ( *((_BYTE *)v14 + 177) )
      ++*((_DWORD *)a1 + 10);
    *(_QWORD *)v7 = ((unsigned __int64)v14 + 120) & -(__int64)(v14 != 0LL);
    return v11;
  }
  v17 = a7;
  a7 = 0LL;
  if ( v17 )
    CRenderTargetBitmap::Release(v17);
  v18 = CD3DDevice::CreateScratchRenderTargetBitmap(
          (CD3DDevice *)(((unsigned __int64)a1 - 512) & -(__int64)(a1 != 0LL)),
          &v21,
          (const struct PixelFormatInfo *)a4,
          v13,
          &a7);
  v11 = v18;
  if ( v18 >= 0 )
  {
    v14 = a7;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x37u, 0LL);
  if ( a7 )
    CRenderTargetBitmap::Release(a7);
  return v11;
}
