/*
 * XREFs of sub_180033438 @ 0x180033438
 * Callers:
 *     sub_180033B5C @ 0x180033B5C (sub_180033B5C.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000CEEC @ 0x18000CEEC (sub_18000CEEC.c)
 *     sub_1800362DC @ 0x1800362DC (sub_1800362DC.c)
 */

__int64 __fastcall sub_180033438(__int64 a1, void *a2)
{
  DWORD LengthSid; // eax
  int v6; // eax

  if ( !*(_BYTE *)(a1 + 76) || (void *)(a1 + 8) != a2 )
  {
    *(_DWORD *)(a1 + 80) = 7;
    sub_18000CEEC((int **)(a1 + 88));
    sub_18000CEEC((int **)(a1 + 96));
    sub_18000CEEC((int **)(a1 + 104));
    sub_18000CEEC((int **)(a1 + 112));
    *(_BYTE *)(a1 + 76) = 0;
    if ( !IsValidSid(a2) || (LengthSid = GetLengthSid(a2), LengthSid > 0x44) )
      sub_18000A174(-2147024809);
    *(_BYTE *)(a1 + 76) = 1;
    if ( !CopySid(LengthSid, (PSID)(a1 + 8), a2) )
    {
      v6 = sub_1800362DC();
      *(_BYTE *)(a1 + 76) = 0;
      sub_18000A174(v6);
    }
    *(_DWORD *)(a1 + 80) = 8;
  }
  return a1;
}
