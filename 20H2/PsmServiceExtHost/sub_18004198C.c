/*
 * XREFs of sub_18004198C @ 0x18004198C
 * Callers:
 *     sub_180041A40 @ 0x180041A40 (sub_180041A40.c)
 * Callees:
 *     sub_180035F74 @ 0x180035F74 (sub_180035F74.c)
 */

__int64 __fastcall sub_18004198C(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = off_18008D658;
  *(_QWORD *)(a1 + 8) = off_18008D630;
  *(_DWORD *)(a1 + 16) = 1;
  sub_180035F74(a1 + 24, 8LL, 2LL, (__int64 (__fastcall *)(__int64))unknown_libname_1);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = a1 + 88;
  *(_QWORD *)(a1 + 96) = a1 + 88;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_WORD *)(a1 + 120) = 2048;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_WORD *)(a1 + 200) = 2048;
  result = a1;
  *(_DWORD *)(a1 + 160) = 0;
  return result;
}
