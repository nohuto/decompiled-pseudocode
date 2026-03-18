/*
 * XREFs of ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x18003D1F8
 * Callers:
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003CFE4 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScrat.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F0510 (-IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ @ 0x1800F3970 (-IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ @ 0x1800F3AB0 (-IsHardwareProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180264A8C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetBitmap::IsHardwareProtected(CRenderTargetBitmap *this)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v3; // rcx

  v1 = *((_QWORD *)this - 7);
  v2 = 0;
  if ( v1 )
  {
    v3 = v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL);
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) != 0;
  }
  return v2;
}
