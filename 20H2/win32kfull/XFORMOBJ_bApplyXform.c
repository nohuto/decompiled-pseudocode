/*
 * XREFs of XFORMOBJ_bApplyXform @ 0x1C02BDDD0
 * Callers:
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02B4440 (NtGdiXFORMOBJ_bApplyXform.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0097914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C0134C14 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

BOOL __stdcall XFORMOBJ_bApplyXform(XFORMOBJ *pxo, ULONG iMode, ULONG cPoints, PVOID pvIn, PVOID pvOut)
{
  _DWORD *v5; // rdi
  int v6; // esi
  unsigned __int64 v7; // rbp
  struct _POINTFIX *v8; // rbx
  struct _POINTFIX *v13; // r14
  struct _POINTFIX *i; // rax
  _BYTE v15[16]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v16[2]; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+50h] [rbp-38h]

  v5 = pvOut;
  v6 = 0;
  v7 = cPoints;
  v8 = (struct _POINTFIX *)pvIn;
  if ( !pxo || !pvIn || !pvOut )
    return 0;
  if ( iMode )
  {
    if ( iMode == 2 )
      return EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (struct _POINTL *)pvIn, (struct _POINTFIX *)pvOut, cPoints);
    v17 = 0;
    memset(v16, 0, sizeof(v16));
    EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v15, (struct MATRIX *)v16, 0);
    if ( !EXFORMOBJ::bInverse((EXFORMOBJ *)v15, *(struct MATRIX **)&pxo->ulReserved) )
      return v6;
    if ( iMode == 1 )
    {
      if ( v8 != pvOut )
      {
        v13 = &v8[v7];
        for ( i = v8; i < v13; ++i )
        {
          i->x *= 16;
          i->y *= 16;
        }
        v6 = EXFORMOBJ::bXform((EXFORMOBJ *)v15, v8, (struct _POINTL *)pvOut, v7);
        while ( v8 < v13 )
        {
          v8->x >>= 4;
          v8->y >>= 4;
          ++v8;
        }
        return v6;
      }
      return EXFORMOBJ::bXform((EXFORMOBJ *)v15, (struct _POINTL *)v8);
    }
    else
    {
      if ( iMode != 3 )
        return v6;
      return EXFORMOBJ::bXform((EXFORMOBJ *)v15, v8, (struct _POINTL *)pvOut, v7);
    }
  }
  if ( pvIn == pvOut )
    return EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (struct _POINTL *)pvIn);
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (struct _POINTL *)pvIn, (struct _POINTFIX *)pvOut, cPoints) )
    return 0;
  while ( v5 < (_DWORD *)((char *)pvOut + 8 * v7) )
  {
    *v5 = (*v5 + 8) >> 4;
    v5[1] = (v5[1] + 8) >> 4;
    v5 += 2;
  }
  return 1;
}
