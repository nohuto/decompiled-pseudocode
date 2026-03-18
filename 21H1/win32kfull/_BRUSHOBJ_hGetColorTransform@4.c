/*
 * XREFs of _BRUSHOBJ_hGetColorTransform@4 @ 0x1CC7FF
 * Callers:
 *     _NtGdiBRUSHOBJ_hGetColorTransform@4 @ 0x217031 (_NtGdiBRUSHOBJ_hGetColorTransform@4.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall BRUSHOBJ_hGetColorTransform(BRUSHOBJ *pbo)
{
  FLONG flColorType; // ecx
  int v2; // eax
  void *v3; // esi

  if ( !pbo )
    return 0;
  if ( (pbo[4].iSolidColor & 2) == 0 )
    return 0;
  flColorType = pbo[3].flColorType;
  if ( !flColorType )
    return 0;
  v2 = HmgShareLockCheck(flColorType, 14);
  if ( !v2 )
    return 0;
  v3 = *(void **)(v2 + 16);
  DEC_SHARE_REF_CNT(v2);
  return v3;
}
