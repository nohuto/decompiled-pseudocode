/*
 * XREFs of _NtGdiEngMarkBandingSurface@4 @ 0x2188DE
 * Callers:
 *     <none>
 * Callees:
 *     _EngMarkBandingSurface@4 @ 0x1EBE65 (_EngMarkBandingSurface@4.c)
 */

int __stdcall NtGdiEngMarkBandingSurface(HSURF hsurf)
{
  int v1; // eax
  int v2; // edx
  int v3; // esi
  int v4; // eax
  int v5; // edi
  BOOL v6; // ebx

  v1 = HmgShareLockCheckIgnoreStockBit(hsurf, 5);
  LOBYTE(v2) = 5;
  v3 = v1;
  v4 = HmgShareLockCheck(hsurf, v2);
  v5 = 1;
  v6 = v4 && (*(_DWORD *)(v4 + 72) & 0x40000) != 0;
  if ( v4 )
    DEC_SHARE_REF_CNT(v4);
  if ( !v6 || !EngMarkBandingSurface(hsurf) )
    v5 = 0;
  if ( v3 )
    DEC_SHARE_REF_CNT(v3);
  return v5;
}
