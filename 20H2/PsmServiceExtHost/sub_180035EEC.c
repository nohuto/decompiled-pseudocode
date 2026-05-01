/*
 * XREFs of sub_180035EEC @ 0x180035EEC
 * Callers:
 *     sub_1800021AC @ 0x1800021AC (sub_1800021AC.c)
 *     sub_180041FAC @ 0x180041FAC (sub_180041FAC.c)
 *     sub_1800422A4 @ 0x1800422A4 (sub_1800422A4.c)
 * Callees:
 *     sub_180035F74 @ 0x180035F74 (sub_180035F74.c)
 */

__int64 __fastcall sub_180035EEC(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = -1;
  *(_QWORD *)a1 = off_1800880A8;
  *(_DWORD *)(a1 + 36) = 1;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 64) = 0LL;
  sub_180035F74(a1 + 72, 24LL, 50LL, sub_18003B2C0);
  *(_QWORD *)(a1 + 1272) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 1280) = 0;
  *(_DWORD *)(a1 + 1284) = 0;
  *(_DWORD *)(a1 + 1288) = -1;
  return result;
}
