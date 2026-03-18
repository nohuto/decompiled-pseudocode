/*
 * XREFs of ?Initialize@DMMVIDPNSOURCEMODE@@QEAAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C00692E4
 * Callers:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0068130 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::Initialize(
        DMMVIDPNSOURCEMODE *this,
        const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *a2,
        enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE a3)
{
  unsigned int v3; // ebx
  D3DKMDT_COLOR_BASIS ColorBasis; // eax
  D3DKMDT_PIXEL_VALUE_ACCESS_MODE PixelValueAccessMode; // eax
  __int64 result; // rax

  if ( a2->PrimSurfSize.cx < 0x64 || a2->PrimSurfSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, a2->PrimSurfSize.cx, a2->PrimSurfSize.cy, a2);
    v3 = -1071774918;
  }
  else if ( a2->VisibleRegionSize.cx < 0x64 || a2->VisibleRegionSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, a2->VisibleRegionSize.cx, a2->VisibleRegionSize.cy, a2);
    v3 = -1071774917;
  }
  else if ( a2->Stride )
  {
    if ( a2->PixelFormat )
    {
      ColorBasis = a2->ColorBasis;
      if ( ColorBasis && ColorBasis <= D3DKMDT_CB_YPBPR )
      {
        PixelValueAccessMode = a2->PixelValueAccessMode;
        if ( PixelValueAccessMode && PixelValueAccessMode <= D3DKMDT_PVAM_SETTABLEPALETTE )
        {
          *((_DWORD *)this + 18) = a3;
          result = 0LL;
          *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)((char *)this + 76) = *a2;
          return result;
        }
        WdLogSingleEntry2(2LL, a2->PixelValueAccessMode, a2);
        v3 = -1071774913;
      }
      else
      {
        WdLogSingleEntry2(2LL, a2->ColorBasis, a2);
        v3 = -1071774914;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, 0LL, a2);
      v3 = -1071774915;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, a2);
    v3 = -1071774916;
  }
  WdLogSingleEntry0(3LL);
  return v3;
}
