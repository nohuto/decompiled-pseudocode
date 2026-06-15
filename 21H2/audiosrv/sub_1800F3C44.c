/*
 * XREFs of sub_1800F3C44 @ 0x1800F3C44
 * Callers:
 *     sub_1800F2970 @ 0x1800F2970 (sub_1800F2970.c)
 * Callees:
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

_QWORD *__fastcall sub_1800F3C44(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _OWORD *v13; // rcx
  __int128 v14; // xmm1

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v7 = sub_180064CCC((_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 40), 0x4E0uLL);
    if ( !v7 )
      sub_1800B8610(-2147024882);
    v8 = *(_DWORD *)(a1 + 40);
    for ( i = &v7[156 * (unsigned int)(v8 - 1) + 1]; --v8 >= 0; i -= 156 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  result = *(_QWORD **)(a1 + 32);
  v11 = 9LL;
  v12 = *result;
  v13 = result + 2;
  do
  {
    *v13 = *a2;
    v13[1] = a2[1];
    v13[2] = a2[2];
    v13[3] = a2[3];
    v13[4] = a2[4];
    v13[5] = a2[5];
    v13[6] = a2[6];
    v13 += 8;
    v14 = a2[7];
    a2 += 8;
    *(v13 - 1) = v14;
    --v11;
  }
  while ( v11 );
  *v13 = *a2;
  v13[1] = a2[1];
  v13[2] = a2[2];
  v13[3] = a2[3];
  v13[4] = a2[4];
  *(_QWORD *)(a1 + 32) = v12;
  result[1] = 0LL;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
