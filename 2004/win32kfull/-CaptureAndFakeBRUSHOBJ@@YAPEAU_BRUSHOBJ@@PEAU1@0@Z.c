/*
 * XREFs of ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013137C
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C012F020 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C012F4E0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C012FA90 (NtGdiEngTextOut.c)
 *     NtGdiEngFillPath @ 0x1C02B30A0 (NtGdiEngFillPath.c)
 *     NtGdiEngLineTo @ 0x1C02B36D0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B38E0 (NtGdiEngPaint.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3F00 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B4210 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

struct _BRUSHOBJ *__fastcall CaptureAndFakeBRUSHOBJ(struct _BRUSHOBJ *a1, struct _BRUSHOBJ *a2)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (struct _BRUSHOBJ *)MmUserProbeAddress;
  *a2 = *a1;
  if ( a2->iSolidColor == -1 )
    return 0LL;
  a2->pvRbrush = 0LL;
  return a2;
}
