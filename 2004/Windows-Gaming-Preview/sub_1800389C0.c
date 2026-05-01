/*
 * XREFs of sub_1800389C0 @ 0x1800389C0
 * Callers:
 *     sub_1800283F4 @ 0x1800283F4 (sub_1800283F4.c)
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 * Callees:
 *     memcmp @ 0x180045C77 (memcmp.c)
 */

__int64 __fastcall sub_1800389C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 *v5; // rbp
  __int64 *v6; // rbx
  __int64 *v7; // rdi

  v2 = 0LL;
  if ( !*a2 && !a2[1] && *(_QWORD *)(a1 + 88) )
    return *(_QWORD *)(**(_QWORD **)(a1 + 80) + 48LL);
  v5 = *(__int64 **)(a1 + 80);
  v6 = v5;
  v7 = (__int64 *)v5[1];
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( memcmp(v7 + 4, a2, 0x10uLL) >= 0 )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( v6 == v5 || memcmp(a2, v6 + 4, 0x10uLL) < 0 )
    v6 = v5;
  if ( v6 != v5 )
    return v6[6];
  return v2;
}
