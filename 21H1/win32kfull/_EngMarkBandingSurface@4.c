/*
 * XREFs of _EngMarkBandingSurface@4 @ 0x1EBE65
 * Callers:
 *     _NtGdiEngMarkBandingSurface@4 @ 0x2188DE (_NtGdiEngMarkBandingSurface@4.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  int v1; // eax
  BOOL v2; // esi

  v1 = HmgShareLockCheckIgnoreStockBit(hsurf, 5);
  v2 = 0;
  if ( v1 )
  {
    *(_DWORD *)(v1 + 72) |= 0x2000000u;
    v2 = 1;
    DEC_SHARE_REF_CNT(v1);
  }
  return v2;
}
