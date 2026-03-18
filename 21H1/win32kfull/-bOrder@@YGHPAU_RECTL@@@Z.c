/*
 * XREFs of ?bOrder@@YGHPAU_RECTL@@@Z @ 0x216D49
 * Callers:
 *     _NtGdiEngAlphaBlend@28 @ 0x2173F0 (_NtGdiEngAlphaBlend@28.c)
 *     _NtGdiEngCopyBits@24 @ 0x217AED (_NtGdiEngCopyBits@24.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 *     _NtGdiEngTransparentBlt@32 @ 0x219BED (_NtGdiEngTransparentBlt@32.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall bOrder(_DWORD *this)
{
  return *this < this[2] && this[1] < this[3];
}
