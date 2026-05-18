/*
 * XREFs of sub_1800191A0 @ 0x1800191A0
 * Callers:
 *     sub_180018CB8 @ 0x180018CB8 (sub_180018CB8.c)
 *     sub_1800195DC @ 0x1800195DC (sub_1800195DC.c)
 *     sub_18001B77C @ 0x18001B77C (sub_18001B77C.c)
 *     sub_18001C824 @ 0x18001C824 (sub_18001C824.c)
 *     sub_18001D0A0 @ 0x18001D0A0 (sub_18001D0A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800191A0(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 0x40000;
  *(_BYTE *)(a1 + 4) = 1;
  *(_BYTE *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 58) = 0;
  *(_WORD *)(a1 + 6) = 4;
  *(_QWORD *)(a1 + 16) = 4LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 70) = 4;
  result = a1;
  *(_DWORD *)(a1 + 64) = 0x40000;
  *(_BYTE *)(a1 + 68) = 1;
  *(_BYTE *)(a1 + 72) = 2;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 80) = 8LL;
  *(_WORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 122) = 0;
  *(_DWORD *)(a1 + 128) = 0x40000;
  *(_BYTE *)(a1 + 132) = 1;
  *(_WORD *)(a1 + 134) = 0;
  *(_BYTE *)(a1 + 136) = 1;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_WORD *)(a1 + 184) = 0;
  *(_BYTE *)(a1 + 186) = 0;
  return result;
}
