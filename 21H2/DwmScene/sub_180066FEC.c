/*
 * XREFs of sub_180066FEC @ 0x180066FEC
 * Callers:
 *     sub_1800B51BC @ 0x1800B51BC (sub_1800B51BC.c)
 * Callees:
 *     sub_18006698C @ 0x18006698C (sub_18006698C.c)
 */

__int64 __fastcall sub_180066FEC(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 8) = 1;
  sub_18006698C(a1, 0);
  return a2;
}
