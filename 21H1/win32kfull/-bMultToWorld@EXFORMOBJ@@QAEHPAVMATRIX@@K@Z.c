/*
 * XREFs of ?bMultToWorld@EXFORMOBJ@@QAEHPAVMATRIX@@K@Z @ 0x21C9F4
 * Callers:
 *     ?bModifyWorldTransform@XDCOBJ@@QAEHPBU_XFORML@@K@Z @ 0x21C828 (-bModifyWorldTransform@XDCOBJ@@QAEHPBU_XFORML@@K@Z.c)
 * Callees:
 *     ??0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z @ 0x8A776 (--0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall EXFORMOBJ::bMultToWorld(struct MATRIX **this, struct MATRIX *a2, unsigned int a3)
{
  struct MATRIX *v4; // eax
  _BYTE v6[12]; // [esp+Ch] [ebp-4Ch] BYREF
  _BYTE v7[60]; // [esp+18h] [ebp-40h] BYREF

  qmemcpy(v7, a2, sizeof(v7));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v6, a2, 0);
  v4 = *this;
  if ( a3 == 2 )
    return EXFORMOBJ::bMultiply((EXFORMOBJ *)v6, (struct MATRIX *)v7, v4, 0);
  else
    return EXFORMOBJ::bMultiply((EXFORMOBJ *)v6, v4, (struct MATRIX *)v7, 0);
}
