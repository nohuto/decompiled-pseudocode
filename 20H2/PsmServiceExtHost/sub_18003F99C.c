/*
 * XREFs of sub_18003F99C @ 0x18003F99C
 * Callers:
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 * Callees:
 *     sub_18003FC90 @ 0x18003FC90 (sub_18003FC90.c)
 *     sub_180040144 @ 0x180040144 (sub_180040144.c)
 *     sub_1800402B4 @ 0x1800402B4 (sub_1800402B4.c)
 *     sub_1800403DC @ 0x1800403DC (sub_1800403DC.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180077B30 @ 0x180077B30 (sub_180077B30.c)
 */

__int64 __fastcall sub_18003F99C(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  bool v11; // zf
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 result; // rax
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-50h]

  memset((void *)a2, 0, 0xB60uLL);
  v4 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 2728) = *(_OWORD *)a1;
  v5 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 2744) = v4;
  v6 = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(a2 + 2760) = v5;
  v7 = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a2 + 2776) = v6;
  v8 = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(a2 + 2792) = v7;
  v9 = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(a2 + 2808) = v8;
  v10 = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a2 + 2824) = v9;
  v11 = (*(_BYTE *)a1 & 8) == 0;
  *(_OWORD *)(a2 + 2840) = *(_OWORD *)(a1 + 112);
  v12 = *(_OWORD *)(a1 + 144);
  *(_OWORD *)(a2 + 2856) = v10;
  v13 = *(_OWORD *)(a1 + 160);
  *(_OWORD *)(a2 + 2872) = v12;
  *(_OWORD *)(a2 + 2888) = v13;
  if ( !v11 )
    sub_180077B30();
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  qword_1800B41B0 = v23;
  *(_QWORD *)(a2 + 8) = a2;
  *(_QWORD *)a2 = a2;
  sub_1800403DC(a2 + 16);
  *(_DWORD *)(a2 + 2528) = 0;
  *(_QWORD *)(a2 + 2536) = 0LL;
  *(_DWORD *)(a2 + 2532) = 0;
  *(_DWORD *)(a2 + 2544) = 0;
  *(_QWORD *)(a2 + 2552) = 0LL;
  *(_DWORD *)(a2 + 2548) = 0;
  memset((void *)(a2 + 688), 0, 0x3A0uLL);
  *(_QWORD *)(a2 + 680) = a2;
  sub_1800403DC(a2 + 704);
  sub_1800403DC(a2 + 728);
  *(_DWORD *)(a2 + 752) = 0;
  *(_QWORD *)(a2 + 760) = 0LL;
  *(_DWORD *)(a2 + 756) = 0;
  *(_DWORD *)(a2 + 1592) = -1;
  *(_QWORD *)(a2 + 696) = a2 + 688;
  *(_QWORD *)(a2 + 688) = a2 + 688;
  *(_QWORD *)(a2 + 1576) = a2 + 1568;
  *(_QWORD *)(a2 + 1568) = a2 + 1568;
  sub_1800402B4(a1, a2);
  sub_180040144(a2, a2 + 1616);
  memset((void *)(a2 + 312), 0, 0x58uLL);
  *(_QWORD *)(a2 + 336) = a2 + 328;
  *(_QWORD *)(a2 + 328) = a2 + 328;
  RtlInitializeConditionVariable(a2 + 344);
  *(_OWORD *)(a2 + 312) = 0LL;
  RtlInitializeSRWLock(a2 + 312);
  *(_DWORD *)(a2 + 320) = 0;
  *(_QWORD *)(a2 + 368) = 1LL;
  sub_18003FC90(a2 + 1768);
  memset((void *)(a2 + 456), 0, 0x50uLL);
  v14 = *(_OWORD *)(a1 + 16);
  v15 = *(_OWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 504) = *(_DWORD *)a1;
  v16 = *(_DWORD *)(a1 + 4);
  *(_OWORD *)(a2 + 400) = v14;
  v17 = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(a2 + 416) = v15;
  *(_QWORD *)&v15 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)(a2 + 432) = v17;
  v18 = *(_OWORD *)(a1 + 72);
  *(_QWORD *)(a2 + 448) = v15;
  v19 = *(_OWORD *)(a1 + 88);
  *(_OWORD *)(a2 + 456) = v18;
  v20 = *(_OWORD *)(a1 + 104);
  *(_OWORD *)(a2 + 472) = v19;
  *(_OWORD *)(a2 + 488) = v20;
  *(_DWORD *)(a2 + 508) = v16;
  *(_BYTE *)(a2 + 512) = *(_BYTE *)(a1 + 8);
  *(_DWORD *)(a2 + 528) = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a2 + 524) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a2 + 516) = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(a2 + 520) = 60;
  memset((void *)(a2 + 576), 0, 0x58uLL);
  result = RtlInitializeSRWLock(a2 + 592);
  *(_OWORD *)(a2 + 560) = 0LL;
  *(_OWORD *)(a2 + 664) = 0LL;
  return result;
}
