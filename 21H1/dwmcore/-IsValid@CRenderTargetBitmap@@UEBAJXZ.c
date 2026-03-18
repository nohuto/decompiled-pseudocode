/*
 * XREFs of ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x1800321E0
 * Callers:
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x180031AB0 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x180031F44 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScrat.c)
 *     ?IsValid@CRenderTargetBitmap@@$4PPPPPPPM@A@EBAJXZ @ 0x1800ED5B0 (-IsValid@CRenderTargetBitmap@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?IsValid@CRenderTargetBitmap@@$4PPPPPPPM@7EBAJXZ @ 0x1800F0A10 (-IsValid@CRenderTargetBitmap@@$4PPPPPPPM@7EBAJXZ.c)
 *     ?IsValid@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBAJXZ @ 0x1800F0B50 (-IsValid@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBAJXZ.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180264EE4 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
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
