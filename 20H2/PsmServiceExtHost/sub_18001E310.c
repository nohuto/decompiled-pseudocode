/*
 * XREFs of sub_18001E310 @ 0x18001E310
 * Callers:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_18007E858 @ 0x18007E858 (sub_18007E858.c)
 * Callees:
 *     sub_180035594 @ 0x180035594 (sub_180035594.c)
 */

__int64 __fastcall sub_18001E310(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r9

  v1 = a1 + 72;
  v2 = *(_QWORD *)(a1 + 80);
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      v3 = 0LL;
    else
      v3 = v2 ^ (v1 | 1);
  }
  else
  {
    v3 = v2;
  }
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    v4 = *(_QWORD *)(v3 + 64);
    v5 = 0LL;
    if ( v4 != v3 + 64 )
      v5 = v4 - 16;
    if ( v5 )
      break;
    v3 = sub_180035594(v3);
    if ( !v3 )
      return 0LL;
  }
  return v5;
}
