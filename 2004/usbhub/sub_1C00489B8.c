/*
 * XREFs of sub_1C00489B8 @ 0x1C00489B8
 * Callers:
 *     sub_1C0030E40 @ 0x1C0030E40 (sub_1C0030E40.c)
 *     sub_1C0048D4C @ 0x1C0048D4C (sub_1C0048D4C.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

__int64 __fastcall sub_1C00489B8(__int64 a1, _OWORD *a2, __int16 a3)
{
  _DWORD *v5; // rax
  __int64 v6; // rax
  _WORD *i; // rcx

  v5 = sub_1C000F050(a1);
  *a2 = *(_OWORD *)(v5 + 1298);
  a2[1] = *(_OWORD *)(v5 + 1302);
  if ( *((_WORD *)a2 + 8) )
  {
    v6 = 0LL;
    for ( i = (_WORD *)a2 + 9; *i; ++i )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= 5 )
        return 0LL;
    }
    *((_WORD *)a2 + v6 + 9) = a3;
  }
  else
  {
    *((_WORD *)a2 + 8) = a3;
  }
  return 0LL;
}
