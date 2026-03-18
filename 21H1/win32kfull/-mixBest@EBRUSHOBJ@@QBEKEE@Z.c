/*
 * XREFs of ?mixBest@EBRUSHOBJ@@QBEKEE@Z @ 0x1E5756
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     <none>
 */

int __thiscall EBRUSHOBJ::mixBest(EBRUSHOBJ *this, char a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // al

  v3 = ((a2 - 1) & 0xF) + 1;
  if ( a3 == 1 && (*((_DWORD *)this + 19) & 0x8000) != 0 )
    return v3 | 0xB00;
  else
    return v3 | (v3 << 8);
}
