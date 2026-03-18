/*
 * XREFs of sub_140619BB0 @ 0x140619BB0
 * Callers:
 *     sub_140619B04 @ 0x140619B04 (sub_140619B04.c)
 *     sub_1407111F8 @ 0x1407111F8 (sub_1407111F8.c)
 * Callees:
 *     sub_140619DB0 @ 0x140619DB0 (sub_140619DB0.c)
 */

__int64 __fastcall sub_140619BB0(__int64 a1, __int64 a2, int a3)
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
      sub_140619DB0(a1, *(_QWORD *)v7);
      *(_OWORD *)v7 = 0LL;
      *(_OWORD *)(v7 + 16) = 0LL;
      --*(_DWORD *)(a2 + 16);
      --v6;
    }
    while ( v6 );
  }
  return v3;
}
