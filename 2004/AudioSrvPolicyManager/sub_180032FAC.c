/*
 * XREFs of sub_180032FAC @ 0x180032FAC
 * Callers:
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000D02C @ 0x18000D02C (sub_18000D02C.c)
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18003AE1B (memmove.c)
 */

__int64 __fastcall sub_180032FAC(__int64 *a1, __int64 a2, int a3)
{
  _DWORD *v4; // rcx
  signed int v5; // edx
  signed int v6; // r8d
  int v7; // esi
  int v8; // ebx
  int v9; // ebp
  char *v10; // rdx

  v4 = (_DWORD *)*a1;
  v5 = 0;
  if ( a3 >= 0 )
    v5 = a3;
  v6 = *(v4 - 4);
  if ( 0x7FFFFFFF - v5 < 0 )
    goto LABEL_17;
  v7 = *(v4 - 4);
  if ( v5 <= v6 )
    v7 = v5;
  if ( v7 > 0 )
  {
    v8 = v6 - v7;
    v9 = v6 - v7 + 1;
    if ( (int)*(v4 - 2) > 1 )
    {
      sub_18000D02C(a1, v6);
      v4 = (_DWORD *)*a1;
    }
    v10 = (char *)v4 + 2 * v7;
    if ( 2LL * v9 )
    {
      if ( !v4 || !v10 )
      {
        *(_DWORD *)o__errno(v4, v10) = 22;
        o__invalid_parameter_noinfo();
        sub_18000A174(-2147024809);
      }
      memmove(v4, v10, 2LL * v9);
    }
    if ( v8 >= 0 && v8 <= *(_DWORD *)(*a1 - 12) )
    {
      *(_DWORD *)(*a1 - 16) = v8;
      *(_WORD *)(*a1 + 2LL * v8) = 0;
      v4 = (_DWORD *)*a1;
      return (unsigned int)*(v4 - 4);
    }
LABEL_17:
    sub_18000A174(-2147024809);
  }
  return (unsigned int)*(v4 - 4);
}
