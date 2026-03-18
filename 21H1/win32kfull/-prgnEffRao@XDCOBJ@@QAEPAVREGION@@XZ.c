/*
 * XREFs of ?prgnEffRao@XDCOBJ@@QAEPAVREGION@@XZ @ 0x538D4
 * Callers:
 *     _GreExtSelectClipRgnInternal@16 @ 0xF7316 (_GreExtSelectClipRgnInternal@16.c)
 *     _NtGdiFastPolyPolyline@16 @ 0xF7700 (_NtGdiFastPolyPolyline@16.c)
 * Callees:
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 */

struct REGION *__thiscall XDCOBJ::prgnEffRao(DC **this)
{
  DC *v1; // ecx

  if ( DC::prgnRao(*this) )
    return DC::prgnRao(v1);
  else
    return DC::prgnVisSnap(v1);
}
