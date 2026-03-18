/*
 * XREFs of ?HasVirtualModeScale@CLegacyRenderTarget@@AEBA_NXZ @ 0x18009C730
 * Callers:
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18009BAA0 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?UseSuperSample@CLegacyRenderTarget@@AEBA_NXZ @ 0x18009C70C (-UseSuperSample@CLegacyRenderTarget@@AEBA_NXZ.c)
 *     ?GetClearMode@CLegacyRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x18009D1B0 (-GetClearMode@CLegacyRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CLegacyRenderTarget::HasVirtualModeScale(CLegacyRenderTarget *this)
{
  char v1; // dl
  int v2; // r8d
  int v3; // r9d
  int v4; // eax
  bool v5; // zf

  v1 = 0;
  v2 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  v3 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  v4 = *((_DWORD *)this + 52);
  if ( ((*((_DWORD *)this + 54) - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( v4 - *((_DWORD *)this + 50) != v3 )
      return 1;
    v5 = *((_DWORD *)this + 53) - *((_DWORD *)this + 51) == v2;
  }
  else
  {
    if ( v4 - *((_DWORD *)this + 50) != v2 )
      return 1;
    v5 = *((_DWORD *)this + 53) - *((_DWORD *)this + 51) == v3;
  }
  if ( !v5 )
    return 1;
  return v1;
}
