/*
 * XREFs of _GreCombineTransform@12 @ 0x21D461
 * Callers:
 *     _NtGdiCombineTransform@12 @ 0x21227C (_NtGdiCombineTransform@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall GreCombineTransform(struct _XFORML *a1, int a2, int a3)
{
  int v3; // ebx
  struct _XFORML *v6; // [esp-4h] [ebp-D8h]
  _DWORD v7[3]; // [esp+Ch] [ebp-C8h] BYREF
  struct _XFORML *v8; // [esp+18h] [ebp-BCh]
  _BYTE v9[60]; // [esp+1Ch] [ebp-B8h] BYREF
  _BYTE v10[60]; // [esp+58h] [ebp-7Ch] BYREF
  _BYTE v11[60]; // [esp+94h] [ebp-40h] BYREF

  v3 = 0;
  v8 = a1;
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  memset(v9, 0, sizeof(v9));
  vConvertXformToMatrix(a2, v10);
  vConvertXformToMatrix(a3, v11);
  v7[2] = 0;
  v7[0] = v9;
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)v7, (struct MATRIX *)v10, (struct MATRIX *)v11, 0) )
  {
    v6 = v8;
    *(_DWORD *)(v7[0] + 56) = 32;
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v7, v6);
    return 1;
  }
  return v3;
}
