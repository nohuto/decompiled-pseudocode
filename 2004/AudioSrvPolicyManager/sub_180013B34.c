/*
 * XREFs of sub_180013B34 @ 0x180013B34
 * Callers:
 *     sub_18001391C @ 0x18001391C (sub_18001391C.c)
 * Callees:
 *     sub_18000A19C @ 0x18000A19C (sub_18000A19C.c)
 *     sub_180018FD4 @ 0x180018FD4 (sub_180018FD4.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall sub_180013B34(__int64 a1)
{
  unsigned int v2; // eax
  _DWORD *v3; // rcx
  unsigned int v4; // eax
  _DWORD *v5; // rcx

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &off_18003F208;
  *(_QWORD *)(a1 + 16) = off_18003EFD0;
  *(_QWORD *)(a1 + 24) = off_18003EFB0;
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
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 144));
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_DWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_DWORD *)(a1 + 344) = 4;
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 352));
  *(_QWORD *)(a1 + 392) = 0LL;
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 400));
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_DWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 516) = 4LL;
  *(_DWORD *)(a1 + 524) = 1;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_OWORD *)(a1 + 552) = xmmword_180043368;
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 568));
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 616) = 0LL;
  sub_18000A19C((struct _RTL_CRITICAL_SECTION *)(a1 + 624));
  *(_QWORD *)(a1 + 664) = 0LL;
  *(_QWORD *)(a1 + 672) = 0LL;
  *(_DWORD *)(a1 + 680) = 17;
  *(_QWORD *)(a1 + 696) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_DWORD *)(a1 + 712) = 0;
  *(_DWORD *)(a1 + 716) = 10;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_DWORD *)(a1 + 684) = 1061158912;
  *(_DWORD *)(a1 + 688) = 1048576000;
  *(_DWORD *)(a1 + 692) = 1074790400;
  sub_180018FD4();
  *(_QWORD *)(a1 + 736) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 744), 0, 0);
  *(_DWORD *)(a1 + 784) = 0;
  *(_QWORD *)(a1 + 792) = 0LL;
  *(_QWORD *)(a1 + 800) = 0LL;
  *(_QWORD *)(a1 + 808) = 0LL;
  *(_WORD *)(a1 + 816) = 0;
  *(_BYTE *)(a1 + 818) = 0;
  v2 = 0;
  v3 = (_DWORD *)(a1 + 248);
  do
  {
    *v3 = -2147023728;
    ++v2;
    ++v3;
  }
  while ( v2 < 2 );
  v4 = 0;
  v5 = (_DWORD *)(a1 + 528);
  do
  {
    *v5 = 0;
    ++v4;
    ++v5;
  }
  while ( v4 < 2 );
  return a1;
}
