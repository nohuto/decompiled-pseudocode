/*
 * XREFs of ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NAEBUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800BAEE8
 * Callers:
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAC5C (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800402F0 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?GetSize@CRenderTargetBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800BB0B8 (-GetSize@CRenderTargetBitmap@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x1800BB10C (-IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800BB15C (-GetPixelFormatInfo@CRenderTargetBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x1800BB1AC (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAHAEBQEAVCScratchRenderTargetBitmap@@@Z @ 0x1800BCD5C (-Remove@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAHAEBQEAVCScratchRenderTargetBitmap@.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

char __fastcall CRenderTargetBitmapCache::FindMatchingBitmap(
        CRenderTargetBitmapCache *this,
        const struct D2D_SIZE_U *a2,
        enum DXGI_FORMAT a3,
        char a4,
        bool a5,
        struct CScratchRenderTargetBitmap **a6)
{
  float v8; // xmm6_4
  unsigned int v9; // ebp
  char v10; // si
  signed int v11; // eax
  struct CScratchRenderTargetBitmap *v12; // rbx
  float v13; // xmm8_4
  __int64 v14; // rdi
  UINT32 width; // eax
  float v16; // xmm1_4
  UINT32 v19; // [rsp+28h] [rbp-90h]
  UINT32 v20; // [rsp+2Ch] [rbp-8Ch]
  __int64 v22; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v23[16]; // [rsp+40h] [rbp-78h] BYREF

  v8 = FLOAT_3_4028235e38;
  v9 = *((_DWORD *)this + 6);
  v10 = 0;
  v11 = ((a2->width + 63) & 0xFFFFFFC0) * ((a2->height + 63) & 0xFFFFFFC0);
  v12 = 0LL;
  v22 = 0LL;
  v13 = 1.0 / (float)v11;
  if ( !v9 )
    goto LABEL_14;
  while ( 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)this + 8LL * --v9);
    if ( (int)CRenderTargetBitmap::IsValid((CRenderTargetBitmap *)(v14 + 192)) < 0 )
    {
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this, v9);
      *(_BYTE *)(v14 + 176) = 0;
      CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v14);
      goto LABEL_11;
    }
    if ( a3 == *(_DWORD *)CRenderTargetBitmap::GetPixelFormatInfo(v14 + 216, v23)
      && a4 == CRenderTargetBitmap::IsHardwareProtected((CRenderTargetBitmap *)(v14 + 192)) )
    {
      CRenderTargetBitmap::GetSize((CRenderTargetBitmap *)(v14 + 240));
      width = a2->width;
      if ( !a5 )
      {
        if ( v19 >= width && v20 >= a2->height )
        {
          v16 = (float)(int)(v19 * v20);
          if ( (float)(v16 * v13) < 4.0 && v8 > v16 )
          {
            v12 = (struct CScratchRenderTargetBitmap *)v14;
            v8 = (float)(int)(v19 * v20);
            v22 = v14;
          }
        }
        goto LABEL_11;
      }
      if ( v19 == width && v20 == a2->height )
        break;
    }
LABEL_11:
    if ( !v9 )
      goto LABEL_12;
  }
  v12 = (struct CScratchRenderTargetBitmap *)v14;
  v22 = v14;
LABEL_12:
  if ( v12 )
  {
    DynArray<CScratchRenderTargetBitmap *,0>::Remove(this, &v22);
    v10 = 1;
  }
LABEL_14:
  *a6 = v12;
  return v10;
}
