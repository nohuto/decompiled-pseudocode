/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C0138A04
 * Callers:
 *     NtGdiFillPath @ 0x1C0136FC0 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C0137A70 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C02ADE70 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02ADF30 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02AE1B0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02AE310 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02AE4A0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02AE600 (NtGdiWidenPath.c)
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
