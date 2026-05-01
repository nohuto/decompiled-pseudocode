/*
 * XREFs of sub_180080768 @ 0x180080768
 * Callers:
 *     sub_180079380 @ 0x180079380 (sub_180079380.c)
 * Callees:
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 *     sub_18007FF10 @ 0x18007FF10 (sub_18007FF10.c)
 */

__int64 __fastcall sub_180080768(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 56);
  sub_1800223EC(v1);
  if ( (*(_BYTE *)(a1 + 64) & 4) != 0 )
  {
    v3 = -1073741431;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 64) & 2) == 0 && (*(_BYTE *)(v1 + 340) & 2) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 340LL) |= 2u;
      *(_DWORD *)(a1 + 64) |= 2u;
      sub_1800260A0(v1);
      sub_18007FF10(v1);
      return 0;
    }
    v3 = -1073700861;
  }
  sub_1800260A0(v1);
  return v3;
}
