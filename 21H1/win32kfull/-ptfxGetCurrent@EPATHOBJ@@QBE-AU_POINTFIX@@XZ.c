/*
 * XREFs of ?ptfxGetCurrent@EPATHOBJ@@QBE?AU_POINTFIX@@XZ @ 0x1E578B
 * Callers:
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     _GrePolyBezierTo@12 @ 0x1FFDFC (_GrePolyBezierTo@12.c)
 *     _GrePolyDraw@16 @ 0x1FFFA3 (_GrePolyDraw@16.c)
 *     _GrePolylineTo@12 @ 0x2009B9 (_GrePolylineTo@12.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall EPATHOBJ::ptfxGetCurrent(EPATHOBJ *this, _DWORD *a2)
{
  int v2; // ecx
  _DWORD *v3; // edx
  _DWORD *result; // eax

  v2 = *((_DWORD *)this + 2);
  if ( (*(_BYTE *)(v2 + 56) & 1) != 0 )
    v3 = (_DWORD *)(v2 + 44);
  else
    v3 = (_DWORD *)(*(_DWORD *)(v2 + 24) + 8 * (*(_DWORD *)(*(_DWORD *)(v2 + 24) + 12) + 1));
  result = a2;
  *a2 = *v3;
  a2[1] = v3[1];
  return result;
}
