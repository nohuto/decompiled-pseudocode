/*
 * XREFs of sub_180033A50 @ 0x180033A50
 * Callers:
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 * Callees:
 *     sub_180033B08 @ 0x180033B08 (sub_180033B08.c)
 */

__int64 __fastcall sub_180033A50(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r9
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi

  v2 = *(_QWORD **)(a1 + 80);
  v3 = *(_QWORD *)(a1 + 400);
  if ( a2 && a2 <= *(_QWORD *)(a1 + 456) && v3 && (*(_BYTE *)(a1 + 408) & 1) != 0 )
    v3 = a2;
  if ( (*(_BYTE *)(a1 + 480) & 0x20) != 0 )
  {
    v4 = v2[125];
    v5 = v2[139] & -(__int64)((v2[81] & 0x2000000000000LL) != 0);
    if ( v4 && v4 != a1 && (int)sub_180033B08(a1, v4, 1LL) <= 0 )
      v3 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v3 == -1LL )
    return -1LL;
  if ( v3 < v5 )
    return 0LL;
  return v3 - v5;
}
