/*
 * XREFs of sub_18008057C @ 0x18008057C
 * Callers:
 *     sub_180027374 @ 0x180027374 (sub_180027374.c)
 *     sub_180079190 @ 0x180079190 (sub_180079190.c)
 * Callees:
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 */

__int64 __fastcall sub_18008057C(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi

  sub_1800223EC(*(_QWORD *)(a1 + 56));
  v2 = *(_DWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 56);
  if ( (v2 & 4) != 0 )
  {
    v4 = -1073700861;
    sub_1800260A0(v3);
  }
  else
  {
    *(_DWORD *)(a1 + 64) = v2 | 4;
    sub_1800260A0(v3);
    sub_1800274E0((_QWORD *)a1);
    return 0;
  }
  return v4;
}
