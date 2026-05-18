/*
 * XREFs of sub_1800CC1BC @ 0x1800CC1BC
 * Callers:
 *     sub_1800CBFB0 @ 0x1800CBFB0 (sub_1800CBFB0.c)
 *     sub_1800CC2A8 @ 0x1800CC2A8 (sub_1800CC2A8.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CC1BC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 36;
    do
    {
      *(_QWORD *)(a3 + 16) = 0LL;
      *(_QWORD *)(a3 + 24) = 0LL;
      sub_18001CDF8((_QWORD *)a3, v5 - 36);
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
