/*
 * XREFs of sub_18007E5CC @ 0x18007E5CC
 * Callers:
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_18007E630 @ 0x18007E630 (sub_18007E630.c)
 *     sub_18007E858 @ 0x18007E858 (sub_18007E858.c)
 * Callees:
 *     sub_180035594 @ 0x180035594 (sub_180035594.c)
 */

__int64 __fastcall sub_18007E5CC(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  if ( v1 != v2 + 64 )
    v3 = v1 - 16;
  if ( !v3 )
  {
    while ( 1 )
    {
      v5 = sub_180035594(v2);
      if ( !v5 )
        break;
      v4 = *(_QWORD *)(v5 + 64);
      v3 = 0LL;
      if ( v4 != v5 + 64 )
        v3 = v4 - 16;
      if ( v3 )
        return v3;
      v2 = v5;
    }
    return 0LL;
  }
  return v3;
}
