/*
 * XREFs of sub_18002BE50 @ 0x18002BE50
 * Callers:
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_1800CD924 @ 0x1800CD924 (sub_1800CD924.c)
 * Callees:
 *     sub_18002C238 @ 0x18002C238 (sub_18002C238.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002BE50(__int64 a1)
{
  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = off_1801475A0;
  *(_QWORD *)(a1 + 8) = off_180146280;
  *(_QWORD *)(a1 + 16) = off_180147570;
  *(_QWORD *)(a1 + 24) = off_180146228;
  *(_QWORD *)(a1 + 32) = off_180147548;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 48), 0, 0);
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 120) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 128), 0, 0);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_DWORD *)(a1 + 192) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 200), 0, 0);
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 300) = 0LL;
  *(_DWORD *)(a1 + 312) = 180000;
  *(_QWORD *)(a1 + 320) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  *(_QWORD *)(a1 + 328) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 352), 0, 0);
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 432), 0, 0);
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_DWORD *)(a1 + 480) = 0;
  *(_BYTE *)(a1 + 484) = 0;
  *(_QWORD *)(a1 + 488) = 0LL;
  sub_18002C238(a1 + 496);
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_DWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_DWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 616), 0, 0);
  *(_QWORD *)(a1 + 656) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  *(_QWORD *)(a1 + 664) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  *(_QWORD *)(a1 + 672) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  *(_QWORD *)(a1 + 696) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  *(_DWORD *)(a1 + 704) = 0;
  *(_OWORD *)(a1 + 680) = xmmword_18015B730;
  *(_DWORD *)(a1 + 716) = -1;
  *(_DWORD *)(a1 + 712) = 0;
  *(_DWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 728) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 736), 0, 0);
  *(_QWORD *)(a1 + 776) = 0LL;
  *(_QWORD *)(a1 + 784) = 0LL;
  *(_QWORD *)(a1 + 792) = 0LL;
  *(_BYTE *)(a1 + 800) = 1;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 808), 0, 0);
  *(_QWORD *)(a1 + 848) = 1065353216LL;
  *(_QWORD *)(a1 + 864) = &off_180147540;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_DWORD *)(a1 + 888) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 896), 0, 0);
  *(_QWORD *)(a1 + 936) = 0LL;
  *(_QWORD *)(a1 + 864) = &off_180147538;
  *(_QWORD *)(a1 + 944) = 0LL;
  *(_DWORD *)(a1 + 952) = 0;
  *(_DWORD *)(a1 + 960) = 0;
  *(_QWORD *)(a1 + 968) = 0LL;
  *(_BYTE *)(a1 + 976) = 0;
  *(_DWORD *)(a1 + 412) = 0;
  *(_DWORD *)(a1 + 416) = 0;
  GetSystemTimeAsFileTime((LPFILETIME)(a1 + 412));
  GetSystemTimeAsFileTime((LPFILETIME)(a1 + 420));
  *(_QWORD *)(a1 + 392) = GetTickCount64();
  return a1;
}
