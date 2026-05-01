/*
 * XREFs of sub_18000A168 @ 0x18000A168
 * Callers:
 *     sub_180009FE0 @ 0x180009FE0 (sub_180009FE0.c)
 *     sub_18007F078 @ 0x18007F078 (sub_18007F078.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000A168(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 688);
  v3 = *(_QWORD *)(a2 + 688);
  if ( v2 )
  {
    if ( v2 == v3 )
      return 0LL;
    if ( !v3 )
      return 2LL;
    return 3LL;
  }
  else
  {
    if ( v3 )
      return 2LL;
    return 1LL;
  }
}
