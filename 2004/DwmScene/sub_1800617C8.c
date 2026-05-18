/*
 * XREFs of sub_1800617C8 @ 0x1800617C8
 * Callers:
 *     sub_180061810 @ 0x180061810 (sub_180061810.c)
 * Callees:
 *     sub_1800619F0 @ 0x1800619F0 (sub_1800619F0.c)
 */

char __fastcall sub_1800617C8(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // bl

  if ( *(_DWORD *)(a1 + 24) != 1 )
    return 1;
  v3 = 0;
  if ( (unsigned __int8)sub_1800619F0(a1, 0LL) )
    return 1;
  LOBYTE(v2) = 1;
  if ( (unsigned __int8)sub_1800619F0(a1, v2) )
    return 1;
  return v3;
}
