/*
 * XREFs of ?GetPixelFormatInfo@CRenderTargetBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18003D23C
 * Callers:
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003CFE4 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScrat.c)
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800F04E0 (-GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@7EBA?AUPixelFormatInfo@@XZ @ 0x1800F3940 (-GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@7EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F3A80 (-GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180264A8C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CRenderTargetBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, _DWORD *); // rcx

  v3 = *(_QWORD *)(a1 - 80);
  if ( v3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, _DWORD *))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 12LL));
    (**v4)(v4, a2);
  }
  else
  {
    *a2 = 0;
    a2[2] = 0;
    a2[1] = 3;
  }
  return a2;
}
