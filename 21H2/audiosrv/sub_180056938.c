/*
 * XREFs of sub_180056938 @ 0x180056938
 * Callers:
 *     sub_180056794 @ 0x180056794 (sub_180056794.c)
 * Callees:
 *     sub_180055E9C @ 0x180055E9C (sub_180055E9C.c)
 *     sub_180056A00 @ 0x180056A00 (sub_180056A00.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180056938(__int64 a1)
{
  __int64 v2; // rdx

  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = off_180147388;
  *(_QWORD *)(a1 + 8) = off_180147360;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_180056A00(a1 + 48);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 10;
  sub_180056A00(a1 + 136);
  *(_DWORD *)(a1 + 176) = 0;
  sub_180055E9C(a1 + 184, v2, 0.75, 0.25, 1074790400);
  memset((void *)(a1 + 256), 0, 0x418uLL);
  return a1;
}
