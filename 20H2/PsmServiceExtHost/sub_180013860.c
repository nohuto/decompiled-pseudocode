/*
 * XREFs of sub_180013860 @ 0x180013860
 * Callers:
 *     sub_1800148D0 @ 0x1800148D0 (sub_1800148D0.c)
 * Callees:
 *     sub_180004C18 @ 0x180004C18 (sub_180004C18.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180037B20 @ 0x180037B20 (sub_180037B20.c)
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180063CBC @ 0x180063CBC (sub_180063CBC.c)
 */

__int64 __fastcall sub_180013860(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v12; // rbx
  __int64 v15; // rsi
  PVOID Heap; // rax
  __int64 v17; // r12
  volatile signed __int64 *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rbp
  unsigned int v23; // r8d
  unsigned __int64 v24; // rsi
  volatile signed __int64 **v25; // rdx
  NTSTATUS v26; // edi
  int v27; // edi
  __int64 v28; // rcx
  __int128 *v29; // rax
  __int128 v30; // xmm0
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdi
  void (__fastcall *v34)(__int64); // rax
  _DWORD *v35; // rdi
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // r9
  _QWORD *v39; // rdi
  _QWORD *v40; // rcx
  _QWORD *v41; // rax
  struct _PEB *v43; // rcx
  char *v44; // r10
  char v45; // cl
  unsigned __int64 v46; // rcx
  unsigned int v47; // r12d
  __int64 v48; // r11
  _QWORD **v49; // r9
  _QWORD *v50; // r8
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  _QWORD *v54; // r8

  v12 = a3;
  v15 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v17 = 2LL;
  v18 = (volatile signed __int64 *)Heap;
  if ( !Heap )
  {
    v26 = -1073741801;
    goto LABEL_9;
  }
  *((_QWORD *)Heap + 6) = 0LL;
  *((_OWORD *)Heap + 4) = 0LL;
  *((_OWORD *)Heap + 5) = 0LL;
  *(_QWORD *)Heap = 0LL;
  *((_QWORD *)Heap + 3) = 0LL;
  *((_QWORD *)Heap + 4) = a10;
  *((_QWORD *)Heap + 5) = 1LL;
  *((_QWORD *)Heap + 2) = 1LL;
  *((_QWORD *)Heap + 1) = HIBYTE(a10)
                        + 37
                        * (BYTE6(a10)
                         + 37
                         * (BYTE5(a10)
                          + 37
                          * (BYTE4(a10)
                           + 37
                           * (BYTE3(a10)
                            + 37 * (BYTE2(a10) + 37 * (BYTE1(a10) + 37 * ((unsigned __int8)a10 + 11623883LL)))))));
  *((_QWORD *)Heap + 7) = a9;
  if ( _InterlockedIncrement64((volatile signed __int64 *)v12) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)Heap + 8) = v12;
  if ( a4 )
  {
    v26 = sub_180004C18(a4, 1u, (PHANDLE)Heap + 9);
    if ( v26 >= 0 )
      v26 = 0;
    if ( v26 < 0 )
      goto LABEL_56;
  }
  v19 = sub_180046098(0x6F0uLL);
  v20 = v19;
  if ( !v19 )
  {
    v12 = a3;
    v26 = -1073741801;
LABEL_56:
    sub_1800265B0((PVOID)v18);
    goto LABEL_9;
  }
  *(_DWORD *)(v19 + 8) = 0;
  *(_QWORD *)v19 = off_1800880A8;
  *(_WORD *)(v19 + 12) = 0;
  *(_QWORD *)(v19 + 24) = 0LL;
  *(_DWORD *)(v19 + 32) = -1;
  *(_DWORD *)(v19 + 36) = 1;
  *(_QWORD *)(v19 + 40) = v19 + 40;
  *(_QWORD *)(v19 + 48) = v19 + 40;
  *(_QWORD *)(v19 + 56) = 0LL;
  *(_DWORD *)(v19 + 72) = -1;
  *(_QWORD *)(v19 + 80) = 0LL;
  *(_DWORD *)(v19 + 88) = 101;
  *(_WORD *)(v19 + 92) = 0;
  *(_DWORD *)(v19 + 96) = -1;
  *(_QWORD *)(v19 + 104) = 0LL;
  *(_DWORD *)(v19 + 112) = 101;
  *(_WORD *)(v19 + 116) = 0;
  *(_DWORD *)(v19 + 120) = -1;
  *(_QWORD *)(v19 + 128) = 0LL;
  *(_DWORD *)(v19 + 136) = 101;
  *(_WORD *)(v19 + 140) = 0;
  *(_DWORD *)(v19 + 144) = -1;
  *(_QWORD *)(v19 + 152) = 0LL;
  *(_DWORD *)(v19 + 160) = 101;
  *(_WORD *)(v19 + 164) = 0;
  *(_DWORD *)(v19 + 168) = -1;
  *(_QWORD *)(v19 + 176) = 0LL;
  *(_DWORD *)(v19 + 184) = 101;
  *(_WORD *)(v19 + 188) = 0;
  *(_DWORD *)(v19 + 192) = -1;
  *(_QWORD *)(v19 + 200) = 0LL;
  *(_DWORD *)(v19 + 208) = 101;
  *(_WORD *)(v19 + 212) = 0;
  *(_DWORD *)(v19 + 216) = -1;
  *(_QWORD *)(v19 + 224) = 0LL;
  *(_DWORD *)(v19 + 232) = 101;
  *(_WORD *)(v19 + 236) = 0;
  *(_DWORD *)(v19 + 240) = -1;
  *(_QWORD *)(v19 + 248) = 0LL;
  *(_DWORD *)(v19 + 256) = 101;
  *(_WORD *)(v19 + 260) = 0;
  *(_DWORD *)(v19 + 264) = -1;
  *(_QWORD *)(v19 + 272) = 0LL;
  *(_DWORD *)(v19 + 280) = 101;
  *(_WORD *)(v19 + 284) = 0;
  *(_DWORD *)(v19 + 288) = -1;
  *(_QWORD *)(v19 + 296) = 0LL;
  *(_DWORD *)(v19 + 304) = 101;
  *(_WORD *)(v19 + 308) = 0;
  *(_DWORD *)(v19 + 312) = -1;
  *(_QWORD *)(v19 + 320) = 0LL;
  *(_DWORD *)(v19 + 328) = 101;
  *(_WORD *)(v19 + 332) = 0;
  *(_DWORD *)(v19 + 336) = -1;
  *(_QWORD *)(v19 + 344) = 0LL;
  *(_DWORD *)(v19 + 352) = 101;
  *(_WORD *)(v19 + 356) = 0;
  *(_DWORD *)(v19 + 360) = -1;
  *(_QWORD *)(v19 + 368) = 0LL;
  *(_DWORD *)(v19 + 376) = 101;
  *(_WORD *)(v19 + 380) = 0;
  *(_DWORD *)(v19 + 384) = -1;
  *(_QWORD *)(v19 + 392) = 0LL;
  *(_DWORD *)(v19 + 400) = 101;
  *(_WORD *)(v19 + 404) = 0;
  *(_DWORD *)(v19 + 408) = -1;
  *(_QWORD *)(v19 + 416) = 0LL;
  *(_DWORD *)(v19 + 424) = 101;
  *(_WORD *)(v19 + 428) = 0;
  *(_DWORD *)(v19 + 432) = -1;
  *(_QWORD *)(v19 + 440) = 0LL;
  *(_DWORD *)(v19 + 448) = 101;
  *(_WORD *)(v19 + 452) = 0;
  *(_DWORD *)(v19 + 456) = -1;
  *(_QWORD *)(v19 + 464) = 0LL;
  *(_DWORD *)(v19 + 472) = 101;
  *(_WORD *)(v19 + 476) = 0;
  *(_DWORD *)(v19 + 480) = -1;
  *(_QWORD *)(v19 + 488) = 0LL;
  *(_DWORD *)(v19 + 496) = 101;
  *(_WORD *)(v19 + 500) = 0;
  *(_DWORD *)(v19 + 504) = -1;
  *(_QWORD *)(v19 + 512) = 0LL;
  *(_DWORD *)(v19 + 520) = 101;
  *(_WORD *)(v19 + 524) = 0;
  *(_DWORD *)(v19 + 528) = -1;
  *(_QWORD *)(v19 + 536) = 0LL;
  *(_DWORD *)(v19 + 544) = 101;
  *(_WORD *)(v19 + 548) = 0;
  *(_DWORD *)(v19 + 552) = -1;
  *(_QWORD *)(v19 + 560) = 0LL;
  *(_DWORD *)(v19 + 568) = 101;
  *(_WORD *)(v19 + 572) = 0;
  *(_DWORD *)(v19 + 576) = -1;
  *(_QWORD *)(v19 + 584) = 0LL;
  *(_DWORD *)(v19 + 592) = 101;
  *(_WORD *)(v19 + 596) = 0;
  *(_DWORD *)(v19 + 600) = -1;
  *(_QWORD *)(v19 + 608) = 0LL;
  *(_DWORD *)(v19 + 616) = 101;
  *(_WORD *)(v19 + 620) = 0;
  *(_DWORD *)(v19 + 624) = -1;
  *(_QWORD *)(v19 + 632) = 0LL;
  *(_DWORD *)(v19 + 640) = 101;
  *(_WORD *)(v19 + 644) = 0;
  *(_DWORD *)(v19 + 648) = -1;
  *(_QWORD *)(v19 + 656) = 0LL;
  *(_DWORD *)(v19 + 664) = 101;
  *(_WORD *)(v19 + 668) = 0;
  *(_DWORD *)(v19 + 672) = -1;
  *(_QWORD *)(v19 + 680) = 0LL;
  *(_DWORD *)(v19 + 688) = 101;
  *(_WORD *)(v19 + 692) = 0;
  *(_DWORD *)(v19 + 696) = -1;
  *(_QWORD *)(v19 + 704) = 0LL;
  *(_DWORD *)(v19 + 712) = 101;
  *(_WORD *)(v19 + 716) = 0;
  *(_DWORD *)(v19 + 720) = -1;
  *(_QWORD *)(v19 + 728) = 0LL;
  *(_DWORD *)(v19 + 736) = 101;
  *(_WORD *)(v19 + 740) = 0;
  *(_DWORD *)(v19 + 744) = -1;
  *(_QWORD *)(v19 + 752) = 0LL;
  *(_DWORD *)(v19 + 760) = 101;
  *(_WORD *)(v19 + 764) = 0;
  *(_DWORD *)(v19 + 768) = -1;
  *(_QWORD *)(v19 + 776) = 0LL;
  *(_DWORD *)(v19 + 784) = 101;
  *(_WORD *)(v19 + 788) = 0;
  *(_DWORD *)(v19 + 792) = -1;
  *(_QWORD *)(v19 + 800) = 0LL;
  *(_DWORD *)(v19 + 808) = 101;
  *(_WORD *)(v19 + 812) = 0;
  *(_DWORD *)(v19 + 816) = -1;
  *(_QWORD *)(v19 + 824) = 0LL;
  *(_DWORD *)(v19 + 832) = 101;
  *(_WORD *)(v19 + 836) = 0;
  *(_DWORD *)(v19 + 840) = -1;
  *(_QWORD *)(v19 + 848) = 0LL;
  *(_DWORD *)(v19 + 856) = 101;
  *(_WORD *)(v19 + 860) = 0;
  *(_DWORD *)(v19 + 864) = -1;
  *(_QWORD *)(v19 + 872) = 0LL;
  *(_DWORD *)(v19 + 880) = 101;
  *(_WORD *)(v19 + 884) = 0;
  *(_DWORD *)(v19 + 888) = -1;
  *(_QWORD *)(v19 + 896) = 0LL;
  *(_DWORD *)(v19 + 904) = 101;
  *(_WORD *)(v19 + 908) = 0;
  *(_DWORD *)(v19 + 912) = -1;
  *(_QWORD *)(v19 + 920) = 0LL;
  *(_DWORD *)(v19 + 928) = 101;
  *(_WORD *)(v19 + 932) = 0;
  *(_DWORD *)(v19 + 936) = -1;
  *(_QWORD *)(v19 + 944) = 0LL;
  *(_DWORD *)(v19 + 952) = 101;
  *(_WORD *)(v19 + 956) = 0;
  *(_DWORD *)(v19 + 960) = -1;
  *(_QWORD *)(v19 + 968) = 0LL;
  *(_DWORD *)(v19 + 976) = 101;
  *(_WORD *)(v19 + 980) = 0;
  *(_DWORD *)(v19 + 984) = -1;
  *(_QWORD *)(v19 + 992) = 0LL;
  *(_DWORD *)(v19 + 1000) = 101;
  *(_WORD *)(v19 + 1004) = 0;
  *(_DWORD *)(v19 + 1008) = -1;
  *(_QWORD *)(v19 + 1016) = 0LL;
  *(_DWORD *)(v19 + 1024) = 101;
  *(_WORD *)(v19 + 1028) = 0;
  *(_DWORD *)(v19 + 1032) = -1;
  *(_QWORD *)(v19 + 1040) = 0LL;
  *(_DWORD *)(v19 + 1048) = 101;
  *(_WORD *)(v19 + 1052) = 0;
  *(_DWORD *)(v19 + 1056) = -1;
  *(_QWORD *)(v19 + 1064) = 0LL;
  *(_DWORD *)(v19 + 1072) = 101;
  *(_WORD *)(v19 + 1076) = 0;
  *(_DWORD *)(v19 + 1080) = -1;
  *(_QWORD *)(v19 + 1088) = 0LL;
  *(_DWORD *)(v19 + 1096) = 101;
  *(_WORD *)(v19 + 1100) = 0;
  *(_DWORD *)(v19 + 1104) = -1;
  *(_QWORD *)(v19 + 1112) = 0LL;
  *(_DWORD *)(v19 + 1120) = 101;
  *(_WORD *)(v19 + 1124) = 0;
  *(_DWORD *)(v19 + 1128) = -1;
  *(_QWORD *)(v19 + 1136) = 0LL;
  *(_DWORD *)(v19 + 1144) = 101;
  *(_WORD *)(v19 + 1148) = 0;
  *(_DWORD *)(v19 + 1152) = -1;
  *(_QWORD *)(v19 + 1160) = 0LL;
  *(_DWORD *)(v19 + 1168) = 101;
  *(_WORD *)(v19 + 1172) = 0;
  *(_DWORD *)(v19 + 1176) = -1;
  *(_QWORD *)(v19 + 1184) = 0LL;
  *(_DWORD *)(v19 + 1192) = 101;
  *(_WORD *)(v19 + 1196) = 0;
  *(_DWORD *)(v19 + 1200) = -1;
  *(_QWORD *)(v19 + 1208) = 0LL;
  *(_DWORD *)(v19 + 1216) = 101;
  *(_WORD *)(v19 + 1220) = 0;
  *(_DWORD *)(v19 + 1224) = -1;
  *(_QWORD *)(v19 + 1232) = 0LL;
  *(_DWORD *)(v19 + 1240) = 101;
  *(_WORD *)(v19 + 1244) = 0;
  *(_DWORD *)(v19 + 1248) = -1;
  *(_QWORD *)(v19 + 1256) = 0LL;
  *(_DWORD *)(v19 + 1264) = 101;
  *(_WORD *)(v19 + 1268) = 0;
  *(_QWORD *)(v19 + 1272) = 0LL;
  *(_QWORD *)(v19 + 1280) = 0LL;
  *(_DWORD *)(v19 + 1288) = -1;
  *(_QWORD *)v19 = off_180088050;
  *(_QWORD *)(v19 + 1312) = 0LL;
  *(_QWORD *)(v19 + 1320) = 0LL;
  *(_DWORD *)(v19 + 1328) = 2;
  *(_DWORD *)(v19 + 1336) = -1;
  *(_DWORD *)(v19 + 1340) = 0;
  *(_DWORD *)(v19 + 1344) = 101;
  *(_DWORD *)(v19 + 1348) = 32;
  *(_DWORD *)(v19 + 1384) = 0;
  *(_QWORD *)(v19 + 1392) = 0LL;
  *(_QWORD *)(v19 + 1400) = 0LL;
  *(_DWORD *)(v19 + 1408) = 0;
  *(_QWORD *)(v19 + 1424) = 0LL;
  *(_DWORD *)(v19 + 1432) = 101;
  *(_WORD *)(v19 + 1436) = 0;
  *(_QWORD *)(v19 + 1448) = 0LL;
  *(_DWORD *)(v19 + 1456) = 101;
  *(_WORD *)(v19 + 1460) = 0;
  *(_QWORD *)(v19 + 1472) = 0LL;
  *(_DWORD *)(v19 + 1480) = 101;
  *(_WORD *)(v19 + 1484) = 0;
  *(_DWORD *)(v19 + 1688) = 0;
  *(_QWORD *)(v19 + 1696) = 0LL;
  *(_DWORD *)(v19 + 1440) = 1;
  *(_DWORD *)(v19 + 1416) = 0;
  *(_DWORD *)(v19 + 1464) = 2;
  *(_DWORD *)(v19 + 1488) = 101;
  *(_DWORD *)(v19 + 1492) = 101;
  *(_DWORD *)(v19 + 1496) = 101;
  *(_DWORD *)(v19 + 1500) = 101;
  *(_DWORD *)(v19 + 1504) = 101;
  *(_DWORD *)(v19 + 1508) = 101;
  *(_DWORD *)(v19 + 1512) = 101;
  *(_DWORD *)(v19 + 1516) = 101;
  *(_DWORD *)(v19 + 1520) = 101;
  *(_DWORD *)(v19 + 1524) = 101;
  *(_DWORD *)(v19 + 1528) = 101;
  *(_DWORD *)(v19 + 1532) = 101;
  *(_DWORD *)(v19 + 1536) = 101;
  *(_DWORD *)(v19 + 1540) = 101;
  *(_DWORD *)(v19 + 1544) = 101;
  *(_DWORD *)(v19 + 1548) = 101;
  *(_DWORD *)(v19 + 1552) = 101;
  *(_DWORD *)(v19 + 1556) = 101;
  *(_DWORD *)(v19 + 1560) = 101;
  *(_DWORD *)(v19 + 1564) = 101;
  *(_DWORD *)(v19 + 1568) = 101;
  *(_DWORD *)(v19 + 1572) = 101;
  *(_DWORD *)(v19 + 1576) = 101;
  *(_DWORD *)(v19 + 1580) = 101;
  *(_DWORD *)(v19 + 1584) = 101;
  *(_DWORD *)(v19 + 1588) = 101;
  *(_DWORD *)(v19 + 1592) = 101;
  *(_DWORD *)(v19 + 1596) = 101;
  *(_DWORD *)(v19 + 1600) = 101;
  *(_DWORD *)(v19 + 1604) = 101;
  *(_DWORD *)(v19 + 1608) = 101;
  *(_DWORD *)(v19 + 1612) = 101;
  *(_DWORD *)(v19 + 1616) = 101;
  *(_DWORD *)(v19 + 1620) = 101;
  *(_DWORD *)(v19 + 1624) = 101;
  *(_DWORD *)(v19 + 1628) = 101;
  *(_DWORD *)(v19 + 1632) = 101;
  *(_DWORD *)(v19 + 1636) = 101;
  *(_DWORD *)(v19 + 1640) = 101;
  *(_DWORD *)(v19 + 1644) = 101;
  *(_DWORD *)(v19 + 1648) = 101;
  *(_DWORD *)(v19 + 1652) = 101;
  *(_DWORD *)(v19 + 1656) = 101;
  *(_DWORD *)(v19 + 1660) = 101;
  *(_DWORD *)(v19 + 1664) = 101;
  *(_DWORD *)(v19 + 1668) = 101;
  *(_DWORD *)(v19 + 1672) = 101;
  *(_DWORD *)(v19 + 1676) = 101;
  *(_DWORD *)(v19 + 1680) = 101;
  *(_DWORD *)(v19 + 1684) = 101;
  *(_DWORD *)(v19 + 1708) = 0;
  *(_WORD *)(v19 + 1376) = 0;
  *(_BYTE *)(v19 + 1378) = 0;
  *(_DWORD *)(v19 + 1380) = 1;
  *(_DWORD *)(v19 + 1352) = 0;
  *(_OWORD *)(v19 + 1360) = 0LL;
  *(_DWORD *)(v19 + 1368) = 101;
  *(_QWORD *)(v19 + 1712) = 0LL;
  *(_QWORD *)(v19 + 1720) = 0LL;
  *(_QWORD *)(v19 + 1752) = -1LL;
  *(_QWORD *)(v19 + 1760) = 0LL;
  *(_QWORD *)(v19 + 1768) = 0LL;
  *(_OWORD *)(v19 + 1728) = 0LL;
  *(_QWORD *)(v19 + 1744) = 0LL;
  *(_DWORD *)(v19 + 1332) = 0;
  *(_OWORD *)(v19 + 1296) = 0LL;
  *(_QWORD *)(v19 + 64) = a1;
  *(_DWORD *)(v19 + 16) = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(v19 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v19 + 1272) = *(_QWORD *)(a1 + 1272);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a7 + 16)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(v19 + 1320) = a7;
  if ( _InterlockedIncrement64(v18 + 2) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(v19 + 1312) = v18;
  *(_QWORD *)(v19 + 1752) = *((_QWORD *)v18 + 4);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  *((_QWORD *)v18 + 6) = v20;
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 24) + 128LL) + 536LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(*(_QWORD *)(v20 + 24) + 128LL) + 552LL);
  v22 = (unsigned int)(2 * (*(_DWORD *)(v21 + 4) >> 5));
  if ( *(_DWORD *)v21 >= (unsigned int)v22 )
  {
    v43 = NtCurrentPeb();
    if ( (unsigned int)v22 < 4 )
      v22 = 4LL;
    v44 = (char *)RtlAllocateHeap(v43->ProcessHeap, 0, 8LL * (unsigned int)v22);
    if ( v44 )
    {
      if ( (((_DWORD)v22 - 1) & (unsigned int)v22) != 0 )
      {
        v45 = -1;
        do
        {
          ++v45;
          LODWORD(v22) = (unsigned int)v22 >> 1;
        }
        while ( (_DWORD)v22 );
        v22 = (unsigned int)(1 << v45);
      }
      if ( (unsigned int)v22 > 0x4000000 )
        v22 = 0x4000000LL;
      v46 = (unsigned int)v22;
      if ( v44 > &v44[8 * v22] )
        v46 = 0LL;
      if ( v46 )
        memset64(v44, v21 | 1, v46);
      v47 = 0;
      v48 = -1LL << (*(_BYTE *)(v21 + 4) & 0x1F);
      if ( (*(_DWORD *)(v21 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v49 = (_QWORD **)(*(_QWORD *)(v21 + 8) + 8LL * v47);
          while ( 1 )
          {
            v50 = *v49;
            if ( ((unsigned __int8)*v49 & 1) != 0 )
              break;
            *v49 = (_QWORD *)*v50;
            v51 = ((((unsigned __int64)v48 & v50[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v48 & v50[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v48 & v50[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v48 & v50[1]) >> 32)
                    + 37
                    * ((((unsigned int)v48 & (_DWORD)v50[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v48 & (_DWORD)v50[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v48 & v50[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v48 & v50[1]) >> 8)))))))) & (unsigned int)(v22 - 1);
            *v50 = *(_QWORD *)&v44[8 * v51];
            *(_QWORD *)&v44[8 * v51] = v50;
          }
          ++v47;
        }
        while ( v47 < *(_DWORD *)(v21 + 4) >> 5 );
      }
      *(_DWORD *)(v21 + 4) &= 0x1Fu;
      v52 = *(_QWORD *)(v21 + 8);
      *(_DWORD *)(v21 + 4) |= 32 * v22;
      *(_QWORD *)(v21 + 8) = v44;
      if ( v52 )
        sub_180037B20(v52, 0LL);
      v17 = 2LL;
    }
  }
  v23 = *(_DWORD *)(v21 + 4);
  v24 = v18[1] & (-1LL << (v23 & 0x1F));
  v25 = (volatile signed __int64 **)(*(_QWORD *)(v21 + 8)
                                   + 8
                                   * ((HIBYTE(v24)
                                     + 37
                                     * (BYTE6(v24)
                                      + 37
                                      * (BYTE5(v24)
                                       + 37
                                       * (BYTE4(v24)
                                        + 37
                                        * (BYTE3(v24)
                                         + 37
                                         * (BYTE2(v24) + 37 * (37 * ((unsigned __int8)v24 + 11623883) + BYTE1(v24)))))))) & ((v23 >> 5) - 1)));
  *v18 = (volatile signed __int64)*v25;
  *v25 = v18;
  ++*(_DWORD *)v21;
  RtlReleaseSRWLockExclusive(v21 + 16);
  v15 = v20;
  v12 = a3;
  v26 = 0;
LABEL_9:
  v27 = v26 | 0x10000000;
  if ( v27 < 0 )
  {
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 32LL))(v15, 0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  else
  {
    v28 = v15 + 1336;
    v29 = a2;
    do
    {
      v28 += 128LL;
      v30 = *v29;
      v29 += 8;
      *(_OWORD *)(v28 - 128) = v30;
      *(_OWORD *)(v28 - 112) = *(v29 - 7);
      *(_OWORD *)(v28 - 96) = *(v29 - 6);
      *(_OWORD *)(v28 - 80) = *(v29 - 5);
      *(_OWORD *)(v28 - 64) = *(v29 - 4);
      *(_OWORD *)(v28 - 48) = *(v29 - 3);
      *(_OWORD *)(v28 - 32) = *(v29 - 2);
      *(_OWORD *)(v28 - 16) = *(v29 - 1);
      --v17;
    }
    while ( v17 );
    *(_OWORD *)v28 = *v29;
    *(_OWORD *)(v28 + 16) = v29[1];
    *(_OWORD *)(v28 + 32) = v29[2];
    *(_OWORD *)(v28 + 48) = v29[3];
    *(_OWORD *)(v28 + 64) = v29[4];
    *(_OWORD *)(v28 + 80) = v29[5];
    *(_OWORD *)(v28 + 96) = v29[6];
    *(_QWORD *)(v28 + 112) = *((_QWORD *)v29 + 14);
    *(_DWORD *)(v15 + 1288) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(v15 + 1292) = *((_DWORD *)a2 + 8);
    *(_DWORD *)(v15 + 32) = a8;
    *(_DWORD *)(v15 + 8) = 0;
    *(_DWORD *)(v15 + 1280) = 1;
    v31 = *(_QWORD *)(v15 + 1712);
    if ( v31 != a5 )
    {
      if ( a5 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
        v31 = *(_QWORD *)(v15 + 1712);
      }
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      *(_QWORD *)(v15 + 1712) = a5;
    }
    *(_QWORD *)(v15 + 1720) = a6;
    *(_QWORD *)(v15 + 1728) = *((_QWORD *)a2 + 11);
    *(_QWORD *)(v15 + 1736) = *((_QWORD *)a2 + 14);
    *(_QWORD *)(v15 + 1744) = *((_QWORD *)a2 + 17);
    v32 = *(_QWORD *)v15;
    v33 = *(_QWORD *)(v15 + 1320);
    *(_OWORD *)(v15 + 72) = a2[5];
    v34 = *(void (__fastcall **)(__int64))(v32 + 8);
    *(_OWORD *)(v15 + 88) = a2[6];
    *(_OWORD *)(v15 + 104) = a2[7];
    *(_OWORD *)(v15 + 120) = a2[8];
    *(_QWORD *)(v15 + 136) = *((_QWORD *)a2 + 18);
    v34(v15);
    v35 = (_DWORD *)(v33 + 1112);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v36 = *(_QWORD *)v35;
    v37 = (_QWORD *)(v15 + 1296);
    if ( *(_DWORD **)(*(_QWORD *)v35 + 8LL) != v35 )
      goto LABEL_61;
    *v37 = v36;
    *(_QWORD *)(v15 + 1304) = v35;
    *(_QWORD *)(v36 + 8) = v37;
    *(_QWORD *)v35 = v37;
    ++v35[4];
    v38 = *(_QWORD **)(v15 + 1312);
    *(_DWORD *)(v15 + 1328) = 0;
    v39 = *(_QWORD **)(v12 + 200);
    if ( v39 != (_QWORD *)(v12 + 200) )
    {
      v53 = *(unsigned int *)(v38[6] + 1288LL);
      do
      {
        if ( (int)sub_180063CBC(v53, *(unsigned int *)(*(v39 - 4) + 1288LL)) > 0 )
          break;
        v39 = (_QWORD *)*v39;
      }
      while ( v39 != v54 );
    }
    v40 = (_QWORD *)v39[1];
    v41 = v38 + 10;
    if ( (_QWORD *)*v40 != v39 )
LABEL_61:
      __fastfail(3u);
    *v41 = v39;
    v38[11] = v40;
    *v40 = v41;
    v39[1] = v41;
    if ( (*((_BYTE *)a2 + 42) & 0x20) != 0 && (a2[1] & 0x100) == 0 )
      *(_DWORD *)(v15 + 1332) |= 8u;
    v27 = 0;
    *a11 = v15;
  }
  return (unsigned int)v27;
}
