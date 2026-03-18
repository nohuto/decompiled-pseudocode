/*
 * XREFs of ?CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z @ 0x2161F8
 * Callers:
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngFillPath@28 @ 0x218304 (_NtGdiEngFillPath@28.c)
 *     _NtGdiEngLineTo@36 @ 0x21873E (_NtGdiEngLineTo@36.c)
 *     _NtGdiEngPaint@20 @ 0x21894A (_NtGdiEngPaint@20.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 *     _NtGdiEngStrokeAndFillPath@40 @ 0x219580 (_NtGdiEngStrokeAndFillPath@40.c)
 *     _NtGdiEngStrokePath@32 @ 0x219789 (_NtGdiEngStrokePath@32.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

struct _BRUSHOBJ *__fastcall CaptureAndFakeBRUSHOBJ(_DWORD *a1, _DWORD *a2)
{
  if ( !a1 )
    return 0;
  if ( (unsigned int)a1 >= _MmUserProbeAddress )
    a1 = (_DWORD *)_MmUserProbeAddress;
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  if ( *a2 == -1 )
    return 0;
  a2[1] = 0;
  return (struct _BRUSHOBJ *)a2;
}
