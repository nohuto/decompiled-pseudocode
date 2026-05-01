/*
 * XREFs of sub_180064130 @ 0x180064130
 * Callers:
 *     sub_18006570C @ 0x18006570C (sub_18006570C.c)
 * Callees:
 *     sub_180039D8C @ 0x180039D8C (sub_180039D8C.c)
 *     sub_18003D0D0 @ 0x18003D0D0 (sub_18003D0D0.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180064130(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 24) = a3[1];
  a3[1] = 0LL;
  memset((void *)(a1 + 40), 0, 0x108uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  sub_180039D8C(a1 + 40);
  sub_18003D0D0(a1 + 232);
  return a1;
}
