/*
 * XREFs of sub_14065F2D0 @ 0x14065F2D0
 * Callers:
 *     sub_14065F224 @ 0x14065F224 (sub_14065F224.c)
 *     sub_1406ED6C8 @ 0x1406ED6C8 (sub_1406ED6C8.c)
 * Callees:
 *     sub_14065F4D0 @ 0x14065F4D0 (sub_14065F4D0.c)
 */

__int64 __fastcall sub_14065F2D0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbp
  __int64 v7; // rbx

  v3 = 0;
  if ( a3 <= -1 )
    a3 = *(_DWORD *)(a2 + 16);
  if ( (unsigned int)a3 > *(_DWORD *)(a2 + 16) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 > 0 )
  {
    v6 = (unsigned int)a3;
    do
    {
      v7 = *(_QWORD *)(a2 + 24) + 32LL * (unsigned int)(*(_DWORD *)(a2 + 16) - 1);
      sub_14065F4D0(a1, *(_QWORD *)v7);
      *(_OWORD *)v7 = 0LL;
      *(_OWORD *)(v7 + 16) = 0LL;
      --*(_DWORD *)(a2 + 16);
      --v6;
    }
    while ( v6 );
  }
  return v3;
}
