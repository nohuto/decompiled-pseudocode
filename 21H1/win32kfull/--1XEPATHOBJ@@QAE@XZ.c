/*
 * XREFs of ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D (--0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z.c)
 *     _GrePolyDraw@16 @ 0x1FFFA3 (_GrePolyDraw@16.c)
 *     _NtGdiCloseFigure@4 @ 0x2115FD (_NtGdiCloseFigure@4.c)
 *     _NtGdiFillPath@4 @ 0x2116F1 (_NtGdiFillPath@4.c)
 *     _NtGdiFlattenPath@4 @ 0x2117E2 (_NtGdiFlattenPath@4.c)
 *     _NtGdiGetPath@16 @ 0x21186F (_NtGdiGetPath@16.c)
 *     _NtGdiPathToRegion@4 @ 0x211A5D (_NtGdiPathToRegion@4.c)
 *     _NtGdiSelectClipPath@8 @ 0x211B56 (_NtGdiSelectClipPath@8.c)
 *     _NtGdiStrokeAndFillPath@4 @ 0x211C98 (_NtGdiStrokeAndFillPath@4.c)
 *     _NtGdiStrokePath@4 @ 0x211DC5 (_NtGdiStrokePath@4.c)
 *     _NtGdiWidenPath@4 @ 0x211EC9 (_NtGdiWidenPath@4.c)
 * Callees:
 *     <none>
 */

void __thiscall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  char *v2; // esi

  EPATHOBJ::vUnlock(this);
  v2 = (char *)this + 48;
  if ( *((_DWORD *)v2 + 4) )
  {
    PopThreadGuardedObject(v2);
    *((_DWORD *)v2 + 4) = 0;
  }
}
