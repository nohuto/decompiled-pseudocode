/*
 * XREFs of sub_180020440 @ 0x180020440
 * Callers:
 *     sub_18001CEC4 @ 0x18001CEC4 (sub_18001CEC4.c)
 * Callees:
 *     sub_180021BEC @ 0x180021BEC (sub_180021BEC.c)
 */

char __fastcall sub_180020440(int a1, int a2, __int64 a3)
{
  int v5; // eax

  if ( *(_BYTE *)(a3 + 56) )
  {
    v5 = sub_180021BEC(
           a1,
           *(_QWORD *)(a3 + 24),
           *(_DWORD *)(a3 + 32) - (unsigned int)*(_QWORD *)(a3 + 24),
           0,
           0LL,
           a2,
           1);
    if ( v5 == -1073741823 )
      return 0;
    if ( v5 )
      sub_180021BEC(a1, *(_QWORD *)(a3 + 24), *(_DWORD *)(a3 + 32) - *(_DWORD *)(a3 + 24), 0, 0LL, 0, 0);
  }
  return 1;
}
