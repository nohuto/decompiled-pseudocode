/*
 * XREFs of ?bInactive@DC@@QBEHXZ @ 0x2113DA
 * Callers:
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

BOOL __thiscall DC::bInactive(DC *this)
{
  BOOL result; // eax

  result = 0;
  if ( *((_DWORD *)this + 34) )
    return (*((_BYTE *)this + 172) & 1) == 0;
  return result;
}
