/*
 * XREFs of ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800C7CE4
 * Callers:
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003CD78 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800C7CB8 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ @ 0x18019CAC8 (-MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ.c)
 *     ?MarkFullDirty@CColorKeyBitmapRealization@@UEAAXXZ @ 0x180260CC0 (-MarkFullDirty@CColorKeyBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CWICBitmapRealization@@UEAAXXZ @ 0x180261780 (-MarkFullDirty@CWICBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x180263268 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmapCache::MarkFullInvalid(CD2DBitmapCache *this)
{
  __int64 v1; // rax
  __int64 v2; // r10
  __int64 i; // r9
  int v4; // r10d
  int v5; // r11d
  int v6; // ebx
  int v7; // edi
  _DWORD *v8; // rdx
  int v9; // edi
  int v10; // esi
  int v11; // r11d
  int v12; // ebx
  _DWORD *v13; // rdx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    v4 = *(_DWORD *)(v1 + 40);
    v5 = *(_DWORD *)(v1 + 48);
    v6 = *(_DWORD *)(v1 + 44);
    v7 = *(_DWORD *)(v1 + 52);
    if ( v4 >= v5 || v6 >= v7 )
    {
      **(_DWORD **)(v1 + 56) = 0;
    }
    else
    {
      v8 = *(_DWORD **)(v1 + 56);
      *v8 = 2;
      v8[7] = v4;
      v8[8] = v5;
      v8[1] = v4;
      v8[4] = 16;
      v8[2] = v5;
      v8[3] = v6;
      v8[6] = 16;
      v8[5] = v7;
    }
  }
  v2 = *((_QWORD *)this + 7);
  for ( i = *((_QWORD *)this + 6); i != v2; i += 8LL )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 248LL);
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 256LL);
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 252LL);
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 260LL);
    if ( v9 >= v10 || v11 >= v12 )
    {
      **(_DWORD **)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 264LL) = 0;
    }
    else
    {
      v13 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 264LL);
      *v13 = 2;
      v13[7] = v9;
      v13[8] = v10;
      v13[1] = v9;
      v13[4] = 16;
      v13[2] = v10;
      v13[3] = v11;
      v13[6] = 16;
      v13[5] = v12;
    }
  }
}
