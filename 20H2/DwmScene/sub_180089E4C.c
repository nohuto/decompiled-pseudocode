/*
 * XREFs of sub_180089E4C @ 0x180089E4C
 * Callers:
 *     sub_180089770 @ 0x180089770 (sub_180089770.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180089E4C(volatile signed __int8 *a1, signed __int8 *a2, signed __int8 a3, int a4)
{
  int v4; // eax
  int v6; // eax
  int v7; // ecx
  signed __int8 v8; // al
  signed __int8 v9; // tt
  signed __int8 v11; // tt

  v4 = a4;
  if ( a4 == 3 )
    v4 = 0;
  if ( a4 == 4 )
    v4 = 2;
  v6 = dword_1801C6BD0[6 * a4 + v4];
  if ( !v6 )
    goto LABEL_13;
  if ( v6 <= 0 )
  {
LABEL_11:
    v7 = 0;
    return v7 != 0;
  }
  if ( v6 < 4 )
  {
LABEL_13:
    v11 = *a2;
    v8 = _InterlockedCompareExchange8(a1, a3, *a2);
    if ( v11 == v8 )
    {
      v7 = 1;
      return v7 != 0;
    }
    goto LABEL_10;
  }
  v7 = 1;
  if ( (unsigned int)(v6 - 4) > 1 )
    goto LABEL_11;
  v9 = *a2;
  v8 = _InterlockedCompareExchange8(a1, a3, *a2);
  if ( v9 != v8 )
  {
LABEL_10:
    *a2 = v8;
    goto LABEL_11;
  }
  return v7 != 0;
}
