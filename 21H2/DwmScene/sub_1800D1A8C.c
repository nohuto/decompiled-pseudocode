/*
 * XREFs of sub_1800D1A8C @ 0x1800D1A8C
 * Callers:
 *     sub_1800D1880 @ 0x1800D1880 (sub_1800D1880.c)
 *     sub_1800D1B78 @ 0x1800D1B78 (sub_1800D1B78.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D1A8C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 36;
    do
    {
      *(_QWORD *)(a3 + 16) = 0LL;
      *(_QWORD *)(a3 + 24) = 0LL;
      sub_180020B7C((_QWORD *)a3, v5 - 36);
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(v5 - 4);
      *(_DWORD *)(a3 + 36) = *(_DWORD *)v5;
      *(_BYTE *)(a3 + 40) = *(_BYTE *)(v5 + 4);
      *(_DWORD *)(a3 + 44) = *(_DWORD *)(v5 + 8);
      a3 += 48LL;
      v5 += 48LL;
    }
    while ( v5 - 36 != a2 );
  }
  return a3;
}
