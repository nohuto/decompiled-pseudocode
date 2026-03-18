/*
 * XREFs of ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18003D280
 * Callers:
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x18003CB50 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003CFE4 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScrat.c)
 *     ?IsValid@CRenderTargetBitmap@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F0540 (-IsValid@CRenderTargetBitmap@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?IsValid@CRenderTargetBitmap@@$4PPPPPPPM@7EBAJXZ @ 0x1800F39A0 (-IsValid@CRenderTargetBitmap@@$4PPPPPPPM@7EBAJXZ.c)
 *     ?IsValid@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBAJXZ @ 0x1800F3AE0 (-IsValid@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBAJXZ.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180262474 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::IsValid(CRenderTargetBitmap *this)
{
  __int64 v1; // rdx
  __int64 (__fastcall ***v2)(_QWORD); // rcx

  v1 = *((_QWORD *)this - 7);
  if ( !v1 )
    return 2291674884LL;
  v2 = (__int64 (__fastcall ***)(_QWORD))(v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL));
  return (**v2)(v2);
}
