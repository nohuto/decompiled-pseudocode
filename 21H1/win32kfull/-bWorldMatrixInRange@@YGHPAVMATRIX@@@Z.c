/*
 * XREFs of ?bWorldMatrixInRange@@YGHPAVMATRIX@@@Z @ 0x21CA52
 * Callers:
 *     ?bModifyWorldTransform@XDCOBJ@@QAEHPBU_XFORML@@K@Z @ 0x21C828 (-bModifyWorldTransform@XDCOBJ@@QAEHPBU_XFORML@@K@Z.c)
 * Callees:
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

int __thiscall bWorldMatrixInRange(int *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  int v5; // edi
  _DWORD *v6; // ecx
  int v8[2]; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+14h] [ebp-8h] BYREF
  int v10; // [esp+18h] [ebp-4h]

  v2 = this[1];
  if ( v2 > 52 )
    return 0;
  v3 = this[3];
  if ( v3 > 52 || this[5] > 52 || this[7] > 52 || this[9] > 52 || this[11] > 52 )
    return 0;
  v4 = this[2];
  v5 = 1;
  if ( !v4 && !v3 && !this[4] && !this[5] )
  {
    if ( !*this && !v2 || !this[6] && !this[7] )
      return 0;
    return v5;
  }
  if ( *this || v2 )
  {
    v6 = this + 6;
  }
  else
  {
    v6 = this + 6;
    if ( !this[6] && !this[7] )
    {
      if ( !v4 && !v3 || !this[4] && !this[5] )
        return this[1];
      return v5;
    }
  }
  v9 = *this;
  v10 = this[1];
  mulff3_c(&v9, &v9, v6);
  v8[0] = this[2];
  v8[1] = this[3];
  mulff3_c(v8, v8, this + 4);
  subff3_c(&v9, &v9, v8);
  if ( !v9 )
    return v10 != 0;
  return v5;
}
