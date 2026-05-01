/*
 * XREFs of sub_18006E670 @ 0x18006E670
 * Callers:
 *     sub_18006E42C @ 0x18006E42C (sub_18006E42C.c)
 *     sub_18006E504 @ 0x18006E504 (sub_18006E504.c)
 *     sub_18006EEBC @ 0x18006EEBC (sub_18006EEBC.c)
 *     sub_18006EF94 @ 0x18006EF94 (sub_18006EF94.c)
 *     sub_1800701C0 @ 0x1800701C0 (sub_1800701C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006E670(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx

  v2 = 0LL;
  v3 = a1 + 8;
  v5 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v5 )
      v5 ^= v3;
    else
      v5 = 0LL;
  }
  v6 = *(_BYTE *)(v3 + 8) & 1;
  while ( v5 )
  {
    if ( a2 < *(_DWORD *)(v5 + 100) )
    {
      v7 = *(_QWORD *)v5;
    }
    else
    {
      if ( a2 <= *(_DWORD *)(v5 + 100) )
      {
        v2 = v5 - 8;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 - 8)) <= 1 )
          __fastfail(0xEu);
        return v2;
      }
      v7 = *(_QWORD *)(v5 + 8);
    }
    if ( v6 && v7 )
      v5 ^= v7;
    else
      v5 = v7;
  }
  return v2;
}
