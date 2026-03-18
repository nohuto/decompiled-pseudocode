/*
 * XREFs of _XFORMOBJ_bApplyXform@20 @ 0x1F32FA
 * Callers:
 *     _NtGdiXFORMOBJ_bApplyXform@20 @ 0x21B239 (_NtGdiXFORMOBJ_bApplyXform@20.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ??0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z @ 0x8A776 (--0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __stdcall XFORMOBJ_bApplyXform(XFORMOBJ *pxo, ULONG iMode, ULONG cPoints, PVOID pvIn, PVOID pvOut)
{
  int *v5; // esi
  _DWORD *v6; // edi
  BOOL result; // eax
  struct MATRIX **v8; // ecx
  _DWORD *v9; // eax
  struct MATRIX **v10; // ecx
  _BYTE v11[12]; // [esp+Ch] [ebp-50h] BYREF
  struct MATRIX **v12; // [esp+18h] [ebp-44h]
  _BYTE v13[60]; // [esp+1Ch] [ebp-40h] BYREF

  v12 = (struct MATRIX **)pxo;
  v5 = (int *)pvIn;
  v6 = pvOut;
  if ( !pxo || !pvIn || !pvOut )
    return 0;
  if ( !iMode )
  {
    if ( pvIn == pvOut )
      return EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (struct _POINTL *)pvIn, cPoints);
    if ( EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (struct _POINTL *)pvIn, (struct _POINTFIX *)pvOut, cPoints) )
    {
      while ( v6 < (_DWORD *)((char *)pvOut + 8 * cPoints) )
      {
        *v6 = (*v6 + 8) >> 4;
        v6[1] = (v6[1] + 8) >> 4;
        v6 += 2;
      }
      return 1;
    }
    return 0;
  }
  if ( iMode == 2 )
    return EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (struct _POINTL *)pvIn, (struct _POINTFIX *)pvOut, cPoints);
  memset(v13, 0, sizeof(v13));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v11, (struct MATRIX *)v13, 0);
  if ( !EXFORMOBJ::bInverse((EXFORMOBJ *)v11, *v12) )
    return 0;
  if ( iMode != 1 )
  {
    if ( iMode == 3 )
      return EXFORMOBJ::bXform((EXFORMOBJ *)v11, (struct _POINTFIX *)pvIn, (struct _POINTL *)pvOut, cPoints);
    return 0;
  }
  if ( pvIn == pvOut )
    return EXFORMOBJ::bXform((EXFORMOBJ *)v11, (struct _POINTL *)pvIn, cPoints);
  v8 = (struct MATRIX **)((char *)pvIn + 8 * cPoints);
  v9 = pvIn;
  v12 = v8;
  if ( pvIn < v8 )
  {
    do
    {
      *v9 *= 16;
      v9[1] *= 16;
      v9 += 2;
    }
    while ( v9 < v8 );
  }
  result = EXFORMOBJ::bXform((EXFORMOBJ *)v11, (struct _POINTFIX *)pvIn, (struct _POINTL *)pvOut, cPoints);
  v10 = v12;
  while ( v5 < (int *)v10 )
  {
    *v5 >>= 4;
    v5[1] >>= 4;
    v5 += 2;
  }
  return result;
}
