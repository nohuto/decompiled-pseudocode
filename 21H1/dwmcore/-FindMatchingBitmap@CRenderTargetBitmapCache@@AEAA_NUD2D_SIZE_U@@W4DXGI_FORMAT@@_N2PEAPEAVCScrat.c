/*
 * XREFs of ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x180031F44
 * Callers:
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180031CD8 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 * Callees:
 *     ?GetSize@CRenderTargetBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18003210C (-GetSize@CRenderTargetBitmap@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x180032158 (-IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18003219C (-GetPixelFormatInfo@CRenderTargetBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x1800321E0 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800CA598 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

bool __fastcall CRenderTargetBitmapCache::FindMatchingBitmap(
        CRenderTargetBitmapCache *this,
        struct D2D_SIZE_U a2,
        enum DXGI_FORMAT a3,
        char a4,
        bool a5,
        struct CScratchRenderTargetBitmap **a6)
{
  unsigned int v6; // r13d
  unsigned int v7; // r15d
  UINT32 width; // ebx
  unsigned int v10; // edi
  struct CScratchRenderTargetBitmap *v11; // rbp
  _BYTE *v12; // r14
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v16; // rcx
  unsigned int v18; // [rsp+24h] [rbp-84h]
  UINT32 v20; // [rsp+30h] [rbp-78h]
  UINT32 v21; // [rsp+34h] [rbp-74h]
  UINT32 height; // [rsp+3Ch] [rbp-6Ch]
  _BYTE v23[16]; // [rsp+50h] [rbp-58h] BYREF

  v6 = -1;
  v7 = *((_DWORD *)this + 6);
  width = a2.width;
  v10 = 0;
  v11 = 0LL;
  height = a2.height;
  v18 = -1;
  if ( v7 )
  {
    do
    {
      v12 = *(_BYTE **)(*(_QWORD *)this + 8LL * --v7);
      if ( (int)CRenderTargetBitmap::IsValid((CRenderTargetBitmap *)(v12 + 192)) < 0 )
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt(this, v7);
        v12[176] = 0;
        CRenderTargetBitmap::Release((CRenderTargetBitmap *)v12);
      }
      else if ( a3 == *(_DWORD *)CRenderTargetBitmap::GetPixelFormatInfo(v12 + 216, v23)
             && a4 == CRenderTargetBitmap::IsHardwareProtected((CRenderTargetBitmap *)(v12 + 192)) )
      {
        CRenderTargetBitmap::GetSize((CRenderTargetBitmap *)(v12 + 240));
        if ( v20 >= width && (!a5 && v21 >= height || v20 == width && v21 == height) && v20 < v6 && v21 < v18 )
        {
          v11 = (struct CScratchRenderTargetBitmap *)v12;
          if ( a5 )
            break;
          v6 = v20;
          v18 = v21;
        }
      }
    }
    while ( v7 );
    if ( v11 )
    {
      v13 = *((_DWORD *)this + 6);
      v14 = *(_QWORD *)this;
      if ( v13 )
      {
        do
        {
          if ( v11 == *(struct CScratchRenderTargetBitmap **)(v14 + 8LL * v10) )
            break;
          ++v10;
        }
        while ( v10 < v13 );
      }
      if ( v10 < v13 )
      {
        for ( ; v10 < v13 - 1; v13 = *((_DWORD *)this + 6) )
        {
          v16 = v10++;
          *(_QWORD *)(v14 + 8 * v16) = *(_QWORD *)(v14 + 8LL * v10);
        }
        *((_DWORD *)this + 6) = v13 - 1;
      }
      LOBYTE(v10) = 1;
    }
  }
  *a6 = v11;
  return v10;
}
