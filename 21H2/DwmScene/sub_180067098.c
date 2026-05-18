/*
 * XREFs of sub_180067098 @ 0x180067098
 * Callers:
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 * Callees:
 *     sub_1800672C0 @ 0x1800672C0 (sub_1800672C0.c)
 */

char __fastcall sub_180067098(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // bl

  if ( *(_DWORD *)(a1 + 24) != 1 )
    return 1;
  v3 = 0;
  if ( (unsigned __int8)sub_1800672C0(a1, 0LL) )
    return 1;
  LOBYTE(v2) = 1;
  if ( (unsigned __int8)sub_1800672C0(a1, v2) )
    return 1;
  return v3;
}
