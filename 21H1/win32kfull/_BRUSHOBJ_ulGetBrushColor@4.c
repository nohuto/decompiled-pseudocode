/*
 * XREFs of _BRUSHOBJ_ulGetBrushColor@4 @ 0x1CC906
 * Callers:
 *     _NtGdiBRUSHOBJ_ulGetBrushColor@4 @ 0x217138 (_NtGdiBRUSHOBJ_ulGetBrushColor@4.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall BRUSHOBJ_ulGetBrushColor(BRUSHOBJ *pbo)
{
  FLONG flColorType; // ecx
  bool v2; // zf

  if ( ((int)pbo[6].pvRbrush & 0x10) == 0 )
    return -1;
  flColorType = pbo->flColorType;
  if ( (flColorType & 8) == 0 )
    return pbo[1].iSolidColor;
  v2 = (pbo[4].iSolidColor & 1) == 0;
  pbo->flColorType = flColorType & 0xFFFFFFF7;
  if ( v2 )
    return pbo[1].iSolidColor;
  else
    return (ULONG)pbo[7].pvRbrush;
}
