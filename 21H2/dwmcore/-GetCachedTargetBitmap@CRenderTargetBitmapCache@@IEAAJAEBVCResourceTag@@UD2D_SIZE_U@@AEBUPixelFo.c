/*
 * XREFs of ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAC5C
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAB68 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18006C318 (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@_N@Z @ 0x1800BAE00 (-SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@_N@Z.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800BAEE8 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCSc.c)
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x1800BCDD0 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800BCE30 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800BCEB0 (-SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800BCF30 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800D95A0 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 */

__int64 __fastcall CRenderTargetBitmapCache::GetCachedTargetBitmap(
        CRenderTargetBitmapCache *a1,
        const struct CResourceTag *a2,
        struct D2D_SIZE_U a3,
        __int64 a4,
        struct RenderTargetInfo *a5,
        int a6,
        unsigned __int64 *a7)
{
  unsigned __int64 *v7; // rdi
  unsigned int v8; // r15d
  int v9; // esi
  bool v12; // al
  struct RenderTargetInfo *v13; // r13
  CD2DBitmapCache *v14; // rbx
  CRenderTargetBitmap *v15; // rdi
  CD2DBitmapCache *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct D2D_SIZE_U v21; // [rsp+80h] [rbp+50h] BYREF
  CD2DBitmapCache *v22; // [rsp+88h] [rbp+58h] BYREF

  v21 = a3;
  v7 = a7;
  v8 = 0;
  v22 = 0LL;
  v9 = a6;
  *a7 = 0LL;
  v12 = (v9 & 0xFFFFFFF9) == 0 && v9 != 6;
  v13 = a5;
  if ( CRenderTargetBitmapCache::FindMatchingBitmap(a1, &v21, *(enum DXGI_FORMAT *)a4, *((_BYTE *)a5 + 20), v12, &v22) )
  {
    v14 = v22;
    v15 = (CD2DBitmapCache *)((char *)v22 + 120);
    CRenderTargetBitmap::SetAlphaMode((CD2DBitmapCache *)((char *)v22 + 120), *(enum DXGI_ALPHA_MODE *)(a4 + 4));
    CRenderTargetBitmap::SetColorSpace(v15, *(enum DXGI_COLOR_SPACE_TYPE *)(a4 + 8));
    CRenderTargetBitmap::SetDisplayId(v15, *((unsigned int *)v13 + 2));
    CRenderTargetBitmap::SetSDRBoost(v15, *((float *)v13 + 4));
    CD2DBitmapCache::MarkFullInvalid(v14);
    v7 = a7;
LABEL_5:
    CScratchRenderTargetBitmap::SetPurpose(v14, a2, (unsigned int)(v9 - 1) <= 1);
    if ( *((_BYTE *)v14 + 177) )
      ++*((_DWORD *)a1 + 10);
    *v7 = ((unsigned __int64)v14 + 120) & -(__int64)(v14 != 0LL);
    return v8;
  }
  if ( (v9 & 0xFFFFFFF9) != 0 || v9 == 6 )
  {
    v21.width = (v21.width + 63) & 0xFFFFFFC0;
    v21.height = (v21.height + 63) & 0xFFFFFFC0;
  }
  v17 = v22;
  v22 = 0LL;
  if ( v17 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v17);
  v18 = CD3DDevice::CreateScratchRenderTargetBitmap(
          (CD3DDevice *)(((unsigned __int64)a1 - 464) & -(__int64)(a1 != 0LL)),
          &v21,
          (const struct PixelFormatInfo *)a4,
          v13,
          &v22);
  v8 = v18;
  if ( v18 >= 0 )
  {
    v14 = v22;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x3Eu);
  if ( v22 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v22);
  return v8;
}
