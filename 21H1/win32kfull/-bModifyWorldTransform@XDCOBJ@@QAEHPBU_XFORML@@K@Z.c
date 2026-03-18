/*
 * XREFs of ?bModifyWorldTransform@XDCOBJ@@QAEHPBU_XFORML@@K@Z @ 0x21C828
 * Callers:
 *     _NtGdiModifyWorldTransform@12 @ 0x21DA7A (_NtGdiModifyWorldTransform@12.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bMultToWorld@EXFORMOBJ@@QAEHPAVMATRIX@@K@Z @ 0x21C9F4 (-bMultToWorld@EXFORMOBJ@@QAEHPAVMATRIX@@K@Z.c)
 *     ?bWorldMatrixInRange@@YGHPAVMATRIX@@@Z @ 0x21CA52 (-bWorldMatrixInRange@@YGHPAVMATRIX@@@Z.c)
 *     ?bWorldXformIdentity@@YGHPBU_XFORML@@@Z @ 0x21CB59 (-bWorldXformIdentity@@YGHPBU_XFORML@@@Z.c)
 */

int __thiscall XDCOBJ::bModifyWorldTransform(XDCOBJ *this, const struct _XFORML *a2, unsigned int a3)
{
  int v3; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  bool v9; // zf
  struct MATRIX *v11; // [esp+0h] [ebp-5Ch]
  struct MATRIX *v12; // [esp+0h] [ebp-5Ch]
  _DWORD v13[3]; // [esp+Ch] [ebp-50h] BYREF
  const struct _XFORML *v14; // [esp+18h] [ebp-44h]
  _BYTE Buf1[60]; // [esp+1Ch] [ebp-40h] BYREF

  v14 = a2;
  v3 = 0;
  memset(Buf1, 0, sizeof(Buf1));
  if ( a3 == 1 )
    goto LABEL_15;
  if ( a3 <= 1 )
    return v3;
  if ( a3 <= 3 )
  {
    vConvertXformToMatrix(v14, Buf1);
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)this + 1020) + 340) & 2) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v13, this, 515);
      if ( !v13[0] || !EXFORMOBJ::bMultToWorld((EXFORMOBJ *)v13, (struct MATRIX *)Buf1, a3) )
        return v3;
    }
    if ( !bWorldMatrixInRange(v11) )
      return v3;
    qmemcpy((void *)(*(_DWORD *)this + 360), Buf1, 0x38u);
    qmemcpy((void *)(*(_DWORD *)(*(_DWORD *)this + 1020) + 356), Buf1, 0x38u);
    v8 = memcmp(Buf1, gmxIdentity_LToL, 0x38u);
    v6 = *(_DWORD *)this;
    v9 = v8 == 0;
    v7 = *(_DWORD *)(*(_DWORD *)this + 1020);
    if ( !v9 )
      goto LABEL_8;
LABEL_17:
    *(_DWORD *)(v7 + 340) |= 0x80B2u;
    return 1;
  }
  if ( a3 != 4 )
    return v3;
  if ( bWorldXformIdentity((const struct _XFORML *)v11) )
  {
LABEL_15:
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)this + 1020) + 340) & 2) != 0 )
      return 1;
    qmemcpy((void *)(*(_DWORD *)this + 360), gmxIdentity_LToL, 0x38u);
    qmemcpy((void *)(*(_DWORD *)(*(_DWORD *)this + 1020) + 356), gmxIdentity_LToL, 0x38u);
    v7 = *(_DWORD *)(*(_DWORD *)this + 1020);
    goto LABEL_17;
  }
  vConvertXformToMatrix(v5, Buf1);
  if ( bWorldMatrixInRange(v12) )
  {
    qmemcpy((void *)(*(_DWORD *)this + 360), Buf1, 0x38u);
    qmemcpy((void *)(*(_DWORD *)(*(_DWORD *)this + 1020) + 356), Buf1, 0x38u);
    v6 = *(_DWORD *)this;
    v7 = *(_DWORD *)(*(_DWORD *)this + 1020);
LABEL_8:
    *(_DWORD *)(v7 + 340) |= 0x80B0u;
    *(_DWORD *)(*(_DWORD *)(v6 + 1020) + 340) &= ~2u;
    return 1;
  }
  return v3;
}
