/*
 * XREFs of sub_1800A58CC @ 0x1800A58CC
 * Callers:
 *     sub_1800A23B4 @ 0x1800A23B4 (sub_1800A23B4.c)
 *     sub_180126FFE @ 0x180126FFE (sub_180126FFE.c)
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_18007B8A0 @ 0x18007B8A0 (sub_18007B8A0.c)
 */

__int64 __fastcall sub_1800A58CC(__int64 a1, __int64 a2)
{
  sub_18001FFEC((__int64 *)(a2 + 56), a2 + 56);
  sub_18007B8A0((_QWORD *)(a2 + 40));
  return j_j__o_free(a2);
}
