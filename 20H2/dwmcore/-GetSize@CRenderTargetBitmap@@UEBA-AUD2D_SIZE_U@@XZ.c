/*
 * XREFs of ?GetSize@CRenderTargetBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18006C19C
 * Callers:
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18006BFD4 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAA_NUD2D_SIZE_U@@W4DXGI_FORMAT@@_N2PEAPEAVCScrat.c)
 *     ?GetSize@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F0140 (-GetSize@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTargetBitmap@@$4PPPPPPPM@7EBA?AUD2D_SIZE_U@@XZ @ 0x1800F35A0 (-GetSize@CRenderTargetBitmap@@$4PPPPPPPM@7EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F36E0 (-GetSize@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180263CAC (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CRenderTargetBitmap::GetSize(CRenderTargetBitmap *this, _DWORD *a2)
{
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, _DWORD *); // rcx

  v3 = *((_QWORD *)this - 13);
  if ( v3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, _DWORD *))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 16LL));
    (**v4)(v4, a2);
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
  }
  return (struct D2D_SIZE_U)a2;
}
