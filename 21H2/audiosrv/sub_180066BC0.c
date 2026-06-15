/*
 * XREFs of sub_180066BC0 @ 0x180066BC0
 * Callers:
 *     sub_180055514 @ 0x180055514 (sub_180055514.c)
 * Callees:
 *     sub_180055E9C @ 0x180055E9C (sub_180055E9C.c)
 *     sub_180056C2C @ 0x180056C2C (sub_180056C2C.c)
 *     sub_180066D38 @ 0x180066D38 (sub_180066D38.c)
 *     sub_180066ED8 @ 0x180066ED8 (sub_180066ED8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180066BC0(__int64 a1)
{
  __int64 v2; // rdx

  *(_DWORD *)(a1 + 20) = 1;
  *(_QWORD *)a1 = off_1801496A8;
  *(_QWORD *)(a1 + 8) = off_180149688;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = off_180149648;
  *(_QWORD *)(a1 + 8) = off_180149628;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 24), 0, 0);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 64), 0, 0);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 104), 0, 0);
  *(_WORD *)(a1 + 144) = 256;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 17;
  *(_QWORD *)(a1 + 184) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 10;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 172) = 1061158912;
  *(_DWORD *)(a1 + 176) = 1048576000;
  *(_DWORD *)(a1 + 180) = 1074790400;
  sub_180056C2C(a1 + 152);
  sub_180055E9C(a1 + 232, v2, 0.75, 0.25, 1074790400);
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  sub_180066ED8(a1 + 344);
  *(_QWORD *)(a1 + 576) = 0LL;
  sub_180066D38(a1 + 584);
  return a1;
}
