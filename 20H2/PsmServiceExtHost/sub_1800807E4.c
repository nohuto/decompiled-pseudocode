/*
 * XREFs of sub_1800807E4 @ 0x1800807E4
 * Callers:
 *     sub_1800794D8 @ 0x1800794D8 (sub_1800794D8.c)
 * Callees:
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 *     sub_18008011C @ 0x18008011C (sub_18008011C.c)
 *     sub_180081B7C @ 0x180081B7C (sub_180081B7C.c)
 */

__int64 __fastcall sub_1800807E4(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  sub_1800223EC(*(_QWORD *)(a1 + 56));
  if ( (*(_BYTE *)(a1 + 64) & 4) != 0 )
  {
    v4 = -1073741431;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
    {
      v5 = *(_QWORD *)(a1 + 56);
      v6 = *(_DWORD *)(v5 + 340);
      if ( (v6 & 1) == 0 )
      {
        *(_DWORD *)(v5 + 340) = v6 | 1;
        v7 = *(_QWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 64) |= 1u;
        sub_1800260A0(v7);
        v4 = sub_18008011C(*(_QWORD *)(a1 + 56), 1u, 1024, a2, 0xFFFFFFFF);
        sub_180081B7C(
          (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(a1 + 56) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
        + 376);
        return v4;
      }
    }
    v4 = -1073700861;
  }
  sub_1800260A0(*(_QWORD *)(a1 + 56));
  return v4;
}
