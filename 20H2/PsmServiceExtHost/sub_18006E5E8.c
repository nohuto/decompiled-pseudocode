/*
 * XREFs of sub_18006E5E8 @ 0x18006E5E8
 * Callers:
 *     sub_18006EF94 @ 0x18006EF94 (sub_18006EF94.c)
 * Callees:
 *     sub_18006E308 @ 0x18006E308 (sub_18006E308.c)
 */

__int64 __fastcall sub_18006E5E8(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // edi
  int v6; // eax
  __int64 v7; // rax

  v2 = a1 + 72;
  v3 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v3 )
    v3 ^= v2;
  v4 = *(_BYTE *)(v2 + 8) & 1;
  if ( !v3 )
    return 0LL;
  do
  {
    v6 = sub_18006E308(a2, v3);
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        break;
      v7 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v7 = *(_QWORD *)v3;
    }
    if ( v4 && v7 )
      v3 ^= v7;
    else
      v3 = v7;
  }
  while ( v3 );
  if ( v3 )
    return v3;
  else
    return 0LL;
}
