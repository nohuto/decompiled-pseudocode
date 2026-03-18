/*
 * XREFs of ?bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z @ 0x216D04
 * Callers:
 *     _NtGdiEngAlphaBlend@28 @ 0x2173F0 (_NtGdiEngAlphaBlend@28.c)
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngCopyBits@24 @ 0x217AED (_NtGdiEngCopyBits@24.c)
 *     _NtGdiEngPlgBlt@44 @ 0x218A7F (_NtGdiEngPlgBlt@44.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 *     _NtGdiEngTransparentBlt@32 @ 0x219BED (_NtGdiEngTransparentBlt@32.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall bCheckXlate(int a1, int a2)
{
  BOOL result; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  result = 1;
  if ( a1 && a2 && (*(_BYTE *)(a2 + 4) & 1) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 44) - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          return *(_DWORD *)(a2 + 12) <= 0x100u;
      }
      else
      {
        v5 = *(_DWORD *)(a2 + 12);
        if ( v5 != 16 )
          return v5 == 8;
      }
    }
    else
    {
      return *(_DWORD *)(a2 + 12) == 2;
    }
  }
  return result;
}
