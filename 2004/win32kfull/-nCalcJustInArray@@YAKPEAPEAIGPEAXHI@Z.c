/*
 * XREFs of ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C02BBFD4
 * Callers:
 *     GreGetCharacterPlacementW @ 0x1C02BC170 (GreGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 */

__int64 __fastcall nCalcJustInArray(unsigned int **a1, unsigned __int16 a2, char *a3, int a4, unsigned int a5)
{
  int v5; // r12d
  bool v7; // zf
  unsigned __int64 v8; // r8
  unsigned __int64 v10; // r9
  char *v12; // rbp
  char *v13; // rsi
  int v14; // r15d
  unsigned int v15; // edi
  char *v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int *v19; // rax
  unsigned int *v20; // r8
  char *i; // rcx
  char *j; // rdx

  v5 = a2;
  v7 = a4 == 0;
  v8 = a5;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = a3;
  if ( v7 )
  {
    v12 = &a3[2 * a5];
    if ( a3 > v12 )
      v8 = 0LL;
    if ( !v8 )
      goto LABEL_28;
    do
    {
      v7 = *(_WORD *)v16 == (unsigned __int16)v5;
      v18 = v15 + 1;
      v16 += 2;
      if ( !v7 )
        v18 = v15;
      ++v10;
      v15 = v18;
    }
    while ( v10 < v8 );
  }
  else
  {
    v13 = &a3[4 * a5];
    v14 = v5;
    if ( a3 > v13 )
      v8 = 0LL;
    if ( !v8 )
      goto LABEL_28;
    do
    {
      v7 = *(_DWORD *)v16 == v5;
      v17 = v15 + 1;
      v16 += 4;
      if ( !v7 )
        v17 = v15;
      ++v10;
      v15 = v17;
    }
    while ( v10 < v8 );
  }
  if ( !v15 || (v19 = (unsigned int *)PALLOCMEM2(4 * v15, 2037147463LL, 1)) == 0LL )
  {
LABEL_28:
    *a1 = 0LL;
    return 0LL;
  }
  v20 = v19;
  if ( a4 )
  {
    for ( i = a3; i < v13; i += 4 )
    {
      if ( *(_DWORD *)i == v14 )
        *v20++ = (i - a3) >> 2;
    }
  }
  else
  {
    for ( j = a3; j < v12; j += 2 )
    {
      if ( *(_WORD *)j == (_WORD)v5 )
        *v20++ = (j - a3) >> 1;
    }
  }
  *a1 = v19;
  return v15;
}
