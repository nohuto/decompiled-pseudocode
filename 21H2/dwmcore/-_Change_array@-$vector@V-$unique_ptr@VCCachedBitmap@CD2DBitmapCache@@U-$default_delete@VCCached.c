/*
 * XREFs of ?_Change_array@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@2@_K1@Z @ 0x18003B338
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18003B240 (--$_Emplace_reallocate@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedB.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800481F8 (-RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const struct IDeviceResourceNotify ***v4; // rbx
  __int64 result; // rax
  const struct IDeviceResourceNotify ***v10; // rbp
  const struct IDeviceResourceNotify **v11; // rsi
  const struct IDeviceResourceNotify *v12; // rcx
  CRenderTargetBitmap *v13; // rcx

  v4 = *(const struct IDeviceResourceNotify ****)a1;
  if ( *(_QWORD *)a1 )
  {
    v10 = *(const struct IDeviceResourceNotify ****)(a1 + 8);
    if ( v4 != v10 )
    {
      do
      {
        v11 = *v4;
        if ( *v4 )
        {
          v12 = v11[1];
          if ( v12 )
          {
            CD2DResource::RemoveResourceNotifier((const struct IDeviceResourceNotify *)((char *)v12 + 104), *v11);
            v13 = v11[1];
            if ( v13 )
              CRenderTargetBitmap::Release(v13);
          }
          operator delete(v11, 0x10uLL);
        }
        ++v4;
      }
      while ( v4 != v10 );
      v4 = *(const struct IDeviceResourceNotify ****)a1;
    }
    std::_Deallocate<16,0>(v4, (*(_QWORD *)(a1 + 16) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)a1 = a2;
  return result;
}
