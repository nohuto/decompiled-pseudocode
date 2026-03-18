/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C013A9D4
 * Callers:
 *     NtGdiFillPath @ 0x1C0138F10 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C01399C0 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C02AC850 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02AC940 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02ACBC0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02ACD20 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02ACEB0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02AD010 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bInactive(DC *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( !*((_QWORD *)this + 25) )
    return 0;
  v1 = *((_DWORD *)this + 62);
  v2 = 1;
  if ( (v1 & 1) != 0 )
    return 0;
  return v2;
}
