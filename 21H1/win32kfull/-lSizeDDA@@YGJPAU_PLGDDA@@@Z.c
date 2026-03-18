/*
 * XREFs of ?lSizeDDA@@YGJPAU_PLGDDA@@@Z @ 0x244759
 * Callers:
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bSubOverflow@@YGHJJ@Z @ 0x1E555E (-bSubOverflow@@YGHJJ@Z.c)
 *     ?bAddOverflow@@YGHJJ@Z @ 0x241428 (-bAddOverflow@@YGHJJ@Z.c)
 *     ?bMulOverflow@@YGHJJ@Z @ 0x24351C (-bMulOverflow@@YGHJJ@Z.c)
 */

int __thiscall lSizeDDA(_DWORD *this)
{
  int v1; // esi
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int v8; // ecx
  _DWORD v10[4]; // [esp+4h] [ebp-14h]

  v10[1] = this[3];
  v1 = this[1];
  v2 = v1;
  v10[2] = this[5];
  v3 = this[7];
  v10[0] = v1;
  v4 = 1;
  v10[3] = v3;
  do
  {
    v5 = v10[v4];
    if ( v2 > v5 )
      v2 = v10[v4];
    if ( v1 < v5 )
      v1 = v10[v4];
    ++v4;
  }
  while ( v4 < 4 );
  if ( bSubOverflow(v1, v2) )
    return 0;
  v7 = v1 - v6;
  if ( !v7 )
    v7 = 1;
  if ( bAddOverflow(v7) || bMulOverflow(v7 + 4) || bAddOverflow(8 * v8) )
    return 0;
  else
    return 8 * v7 + 36;
}
