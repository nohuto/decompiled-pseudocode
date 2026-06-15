/*
 * XREFs of sub_18000FEA0 @ 0x18000FEA0
 * Callers:
 *     sub_18000FD74 @ 0x18000FD74 (sub_18000FD74.c)
 * Callees:
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_18000A19C @ 0x18000A19C (sub_18000A19C.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_18000FEA0(__int64 a1, int a2)
{
  _QWORD *v4; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = off_18003F240;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 32));
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 10;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 10;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 168), 0, 0);
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = a2;
  *(_DWORD *)(a1 + 216) = 0;
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 224));
  *(_QWORD *)(a1 + 264) = 0LL;
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 280));
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_DWORD *)(a1 + 328) = 0;
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 336));
  *(_QWORD *)(a1 + 376) = 0LL;
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 384));
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_DWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 436) = 1;
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 440));
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_DWORD *)(a1 + 488) = 0;
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 496));
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 4LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_DWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 588) = 1LL;
  *(_QWORD *)(a1 + 596) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_QWORD *)(a1 + 624) = 0LL;
  *(_QWORD *)(a1 + 632) = 0LL;
  *(_QWORD *)(a1 + 648) = 0LL;
  *(_QWORD *)(a1 + 656) = 0LL;
  v4 = sub_180009F20(0x48uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *(_QWORD *)(a1 + 648) = v4;
  *(_BYTE *)(a1 + 664) = 0;
  return a1;
}
