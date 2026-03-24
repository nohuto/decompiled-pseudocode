/*
 * XREFs of ?GetClearMode@CLegacyRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x180093530
 * Callers:
 *     <none>
 * Callees:
 *     ?HasVirtualModeScale@CLegacyRenderTarget@@AEBA_NXZ @ 0x180092AB0 (-HasVirtualModeScale@CLegacyRenderTarget@@AEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CLegacyRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800935CC (-GetPixelFormatInfo@CLegacyRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1801845A0 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetClearMode(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // ebx
  __int64 v4; // rcx
  CDirectFlipInfo *v5; // rcx
  int v6; // edi
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 1;
  v2 = 0;
  if ( *(_BYTE *)(a1 + 128)
    || CLegacyRenderTarget::HasVirtualModeScale((CLegacyRenderTarget *)a1)
    || *(_DWORD *)(CLegacyRenderTarget::GetPixelFormatInfo(v4 + 18640, v8) + 4) == 1 )
  {
    v1 = 2;
  }
  v5 = *(CDirectFlipInfo **)(a1 + 11768);
  v6 = 0;
  if ( v5 )
  {
    v6 = *((_DWORD *)v5 + 13);
    if ( v6 == 4 && !CDirectFlipInfo::RenderingRealizationChanged(v5) )
      v6 = 2;
  }
  if ( v6 < 3 )
    return v1;
  return v2;
}
