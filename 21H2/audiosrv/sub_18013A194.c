/*
 * XREFs of sub_18013A194 @ 0x18013A194
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_180138D2C @ 0x180138D2C (sub_180138D2C.c)
 *     sub_180138D68 @ 0x180138D68 (sub_180138D68.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18005248C @ 0x18005248C (sub_18005248C.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_180107110 @ 0x180107110 (sub_180107110.c)
 *     sub_180139610 @ 0x180139610 (sub_180139610.c)
 */

__int64 __fastcall sub_18013A194(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rax
  __int64 i; // rdi
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  __int64 result; // rax

  ++*(_DWORD *)(a1 + 48);
  v2 = *(void **)a1;
  v3 = v2;
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v5 = (_QWORD *)*((_QWORD *)v2 + i);
      v3 = v2;
      if ( v5 )
      {
        do
        {
          v6 = v5;
          v5 = (_QWORD *)v5[2];
          sub_180139610(a1, v6);
        }
        while ( v5 );
        v2 = *(void **)a1;
        v3 = *(void **)a1;
      }
    }
  }
  sub_180033A70(v3);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v7 = sub_1800CF858(a1, 0LL);
    sub_180107110(a1, v7, 0);
  }
  result = sub_18005248C(a1);
  --*(_DWORD *)(a1 + 48);
  return result;
}
