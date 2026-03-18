/*
 * XREFs of bScalePlgDDALToPlgDDA @ 0x243641
 * Callers:
 *     ?bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z @ 0x2414A8 (-bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z.c)
 * Callees:
 *     __allshr @ 0xF91EB (__allshr.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall bScalePlgDDALToPlgDDA(int a1, _DWORD *a2)
{
  int v4; // ecx
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  CCHAR (__stdcall *v9)(ULONGLONG); // esi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // si
  __int64 v16; // rax
  char v17; // si
  __int64 v18; // rax
  char v19; // si
  __int64 v20; // rax
  char v21; // si
  __int64 v22; // rax
  char v23; // si
  __int64 v24; // rax
  char v25; // si
  __int64 v26; // rax
  char v27; // si
  __int64 v28; // rax
  char v29; // si
  __int64 v30; // rax
  char v31; // si
  __int64 v32; // rax
  char v33; // si
  __int64 v34; // rax
  char v35; // si
  __int64 v36; // rax
  char v37; // si
  __int64 v38; // rax
  char v39; // si
  __int64 v40; // rax
  char v41; // si
  __int64 v42; // rax
  char v43; // si
  __int64 v44; // rax
  char v45; // si
  __int64 v46; // rax
  char v47; // si
  __int64 v48; // rax
  char v49; // si
  __int64 v50; // rax
  char v51; // si
  __int64 v52; // rax
  char v53; // si
  __int64 v54; // rax
  char v55; // si
  __int64 v56; // rax
  char v57; // si
  __int64 v58; // rax
  unsigned int v60; // [esp-8h] [ebp-1Ch]
  int v61; // [esp+Ch] [ebp-8h]

  memset(a2, 0, 0x18Cu);
  v4 = *(_DWORD *)(a1 + 284);
  v5 = *(_DWORD *)(a1 + 280);
  v61 = v4;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 8) + 0x80000000LL) >> 32 )
    return 0;
  a2[1] = *(_DWORD *)(a1 + 8);
  if ( __SPAIR64__(v4, v5) <= 0x7FFFFFFF )
  {
    LODWORD(v6) = *(_DWORD *)(a1 + 16);
  }
  else
  {
    v6 = *(__int64 *)(a1 + 16) >> (RtlFindMostSignificantBit(__PAIR64__(v4, v5)) - 30);
    v4 = v61;
  }
  a2[2] = v6;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 0x80000000LL) >> 32 )
    return 0;
  a2[3] = *(_DWORD *)(a1 + 24);
  if ( v4 < 0 || v4 <= 0 && v5 <= 0x7FFFFFFF )
  {
    LODWORD(v7) = *(_DWORD *)(a1 + 32);
  }
  else
  {
    v7 = *(__int64 *)(a1 + 32) >> ((unsigned __int8)((int (__stdcall *)(unsigned int, int))RtlFindMostSignificantBit)(
                                                      v5,
                                                      v4)
                                 - 30);
    v4 = v61;
  }
  a2[4] = v7;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 40) + 0x80000000LL) >> 32 )
    return 0;
  a2[5] = *(_DWORD *)(a1 + 40);
  if ( v4 < 0 || v4 <= 0 && v5 <= 0x7FFFFFFF )
  {
    LODWORD(v8) = *(_DWORD *)(a1 + 48);
  }
  else
  {
    v8 = *(__int64 *)(a1 + 48) >> ((unsigned __int8)((int (__stdcall *)(unsigned int, int))RtlFindMostSignificantBit)(
                                                      v5,
                                                      v4)
                                 - 30);
    v4 = v61;
  }
  a2[6] = v8;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 56) + 0x80000000LL) >> 32 )
    return 0;
  a2[7] = *(_DWORD *)(a1 + 56);
  if ( v4 < 0 || v4 <= 0 && v5 <= 0x7FFFFFFF )
  {
    LODWORD(v10) = *(_DWORD *)(a1 + 64);
    v9 = RtlFindMostSignificantBit;
  }
  else
  {
    v60 = v5;
    v9 = RtlFindMostSignificantBit;
    v10 = *(__int64 *)(a1 + 64) >> ((unsigned __int8)((int (__stdcall *)(unsigned int, int))RtlFindMostSignificantBit)(
                                                       v60,
                                                       v4)
                                  - 30);
  }
  a2[8] = v10;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 72) + 0x80000000LL) >> 32 )
    return 0;
  a2[9] = *(_DWORD *)(a1 + 72);
  if ( *(__int64 *)(a1 + 664) <= 0x7FFFFFFF )
    LODWORD(v11) = *(_DWORD *)(a1 + 80);
  else
    v11 = *(__int64 *)(a1 + 80) >> (((unsigned __int8 (__stdcall *)(_DWORD, _DWORD))v9)(
                                      *(_DWORD *)(a1 + 664),
                                      *(_DWORD *)(a1 + 668))
                                  - 30);
  a2[10] = v11;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 88) + 0x80000000LL) >> 32 )
    return 0;
  a2[11] = *(_DWORD *)(a1 + 88);
  if ( *(__int64 *)(a1 + 688) <= 0x7FFFFFFF )
    LODWORD(v12) = *(_DWORD *)(a1 + 96);
  else
    v12 = *(__int64 *)(a1 + 96) >> (((unsigned __int8 (__stdcall *)(_DWORD, _DWORD))v9)(
                                      *(_DWORD *)(a1 + 688),
                                      *(_DWORD *)(a1 + 692))
                                  - 30);
  a2[12] = v12;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 104) + 0x80000000LL) >> 32 )
    return 0;
  a2[13] = *(_DWORD *)(a1 + 104);
  if ( *(__int64 *)(a1 + 688) <= 0x7FFFFFFF )
    LODWORD(v13) = *(_DWORD *)(a1 + 112);
  else
    v13 = *(__int64 *)(a1 + 112) >> (((unsigned __int8 (__stdcall *)(_DWORD, _DWORD))v9)(
                                       *(_DWORD *)(a1 + 688),
                                       *(_DWORD *)(a1 + 692))
                                   - 30);
  a2[14] = v13;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 120) + 0x80000000LL) >> 32 )
    return 0;
  a2[15] = *(_DWORD *)(a1 + 120);
  if ( *(__int64 *)(a1 + 664) <= 0x7FFFFFFF )
    LODWORD(v14) = *(_DWORD *)(a1 + 128);
  else
    v14 = *(__int64 *)(a1 + 128) >> (((unsigned __int8 (__stdcall *)(_DWORD, _DWORD))v9)(
                                       *(_DWORD *)(a1 + 664),
                                       *(_DWORD *)(a1 + 668))
                                   - 30);
  a2[16] = v14;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 264) + 0x80000000LL) >> 32 )
    return 0;
  a2[33] = *(_DWORD *)(a1 + 264);
  if ( *(__int64 *)(a1 + 280) <= 0x7FFFFFFF )
  {
    a2[34] = *(_DWORD *)(a1 + 272);
    LODWORD(v16) = *(_DWORD *)(a1 + 280);
  }
  else
  {
    v15 = ((int (__stdcall *)(_DWORD, _DWORD))v9)(*(_DWORD *)(a1 + 280), *(_DWORD *)(a1 + 284));
    a2[34] = *(__int64 *)(a1 + 272) >> (v15 - 30);
    v16 = *(__int64 *)(a1 + 280) >> (v15 - 30);
  }
  a2[35] = v16;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 288) + 0x80000000LL) >> 32 )
    return 0;
  a2[36] = *(_DWORD *)(a1 + 288);
  if ( *(__int64 *)(a1 + 304) <= 0x7FFFFFFF )
  {
    a2[37] = *(_DWORD *)(a1 + 296);
    LODWORD(v18) = *(_DWORD *)(a1 + 304);
  }
  else
  {
    v17 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 304), *(_DWORD *)(a1 + 308));
    a2[37] = *(__int64 *)(a1 + 296) >> (v17 - 30);
    v18 = *(__int64 *)(a1 + 304) >> (v17 - 30);
  }
  a2[38] = v18;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 312) + 0x80000000LL) >> 32 )
    return 0;
  a2[39] = *(_DWORD *)(a1 + 312);
  if ( *(__int64 *)(a1 + 328) <= 0x7FFFFFFF )
  {
    a2[40] = *(_DWORD *)(a1 + 320);
    LODWORD(v20) = *(_DWORD *)(a1 + 328);
  }
  else
  {
    v19 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 328), *(_DWORD *)(a1 + 332));
    a2[40] = *(__int64 *)(a1 + 320) >> (v19 - 30);
    v20 = *(__int64 *)(a1 + 328) >> (v19 - 30);
  }
  a2[41] = v20;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 336) + 0x80000000LL) >> 32 )
    return 0;
  a2[42] = *(_DWORD *)(a1 + 336);
  if ( *(__int64 *)(a1 + 352) <= 0x7FFFFFFF )
  {
    a2[43] = *(_DWORD *)(a1 + 344);
    LODWORD(v22) = *(_DWORD *)(a1 + 352);
  }
  else
  {
    v21 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 352), *(_DWORD *)(a1 + 356));
    a2[43] = *(__int64 *)(a1 + 344) >> (v21 - 30);
    v22 = *(__int64 *)(a1 + 352) >> (v21 - 30);
  }
  a2[44] = v22;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 360) + 0x80000000LL) >> 32 )
    return 0;
  a2[45] = *(_DWORD *)(a1 + 360);
  if ( *(__int64 *)(a1 + 376) <= 0x7FFFFFFF )
  {
    a2[46] = *(_DWORD *)(a1 + 368);
    LODWORD(v24) = *(_DWORD *)(a1 + 376);
  }
  else
  {
    v23 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 376), *(_DWORD *)(a1 + 380));
    a2[46] = *(__int64 *)(a1 + 368) >> (v23 - 30);
    v24 = *(__int64 *)(a1 + 376) >> (v23 - 30);
  }
  a2[47] = v24;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 384) + 0x80000000LL) >> 32 )
    return 0;
  a2[48] = *(_DWORD *)(a1 + 384);
  if ( *(__int64 *)(a1 + 400) <= 0x7FFFFFFF )
  {
    a2[49] = *(_DWORD *)(a1 + 392);
    LODWORD(v26) = *(_DWORD *)(a1 + 400);
  }
  else
  {
    v25 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 400), *(_DWORD *)(a1 + 404));
    a2[49] = *(__int64 *)(a1 + 392) >> (v25 - 30);
    v26 = *(__int64 *)(a1 + 400) >> (v25 - 30);
  }
  a2[50] = v26;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 408) + 0x80000000LL) >> 32 )
    return 0;
  a2[51] = *(_DWORD *)(a1 + 408);
  if ( *(__int64 *)(a1 + 424) <= 0x7FFFFFFF )
  {
    a2[52] = *(_DWORD *)(a1 + 416);
    LODWORD(v28) = *(_DWORD *)(a1 + 424);
  }
  else
  {
    v27 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 424), *(_DWORD *)(a1 + 428));
    a2[52] = *(__int64 *)(a1 + 416) >> (v27 - 30);
    v28 = *(__int64 *)(a1 + 424) >> (v27 - 30);
  }
  a2[53] = v28;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 432) + 0x80000000LL) >> 32 )
    return 0;
  a2[54] = *(_DWORD *)(a1 + 432);
  if ( *(__int64 *)(a1 + 448) <= 0x7FFFFFFF )
  {
    a2[55] = *(_DWORD *)(a1 + 440);
    LODWORD(v30) = *(_DWORD *)(a1 + 448);
  }
  else
  {
    v29 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 448), *(_DWORD *)(a1 + 452));
    a2[55] = *(__int64 *)(a1 + 440) >> (v29 - 30);
    v30 = *(__int64 *)(a1 + 448) >> (v29 - 30);
  }
  a2[56] = v30;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 456) + 0x80000000LL) >> 32 )
    return 0;
  a2[57] = *(_DWORD *)(a1 + 456);
  if ( *(__int64 *)(a1 + 472) <= 0x7FFFFFFF )
  {
    a2[58] = *(_DWORD *)(a1 + 464);
    LODWORD(v32) = *(_DWORD *)(a1 + 472);
  }
  else
  {
    v31 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 472), *(_DWORD *)(a1 + 476));
    a2[58] = *(__int64 *)(a1 + 464) >> (v31 - 30);
    v32 = *(__int64 *)(a1 + 472) >> (v31 - 30);
  }
  a2[59] = v32;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 480) + 0x80000000LL) >> 32 )
    return 0;
  a2[60] = *(_DWORD *)(a1 + 480);
  if ( *(__int64 *)(a1 + 496) <= 0x7FFFFFFF )
  {
    a2[61] = *(_DWORD *)(a1 + 488);
    LODWORD(v34) = *(_DWORD *)(a1 + 496);
  }
  else
  {
    v33 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 496), *(_DWORD *)(a1 + 500));
    a2[61] = *(__int64 *)(a1 + 488) >> (v33 - 30);
    v34 = *(__int64 *)(a1 + 496) >> (v33 - 30);
  }
  a2[62] = v34;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 504) + 0x80000000LL) >> 32 )
    return 0;
  a2[63] = *(_DWORD *)(a1 + 504);
  if ( *(__int64 *)(a1 + 520) <= 0x7FFFFFFF )
  {
    a2[64] = *(_DWORD *)(a1 + 512);
    LODWORD(v36) = *(_DWORD *)(a1 + 520);
  }
  else
  {
    v35 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 520), *(_DWORD *)(a1 + 524));
    a2[64] = *(__int64 *)(a1 + 512) >> (v35 - 30);
    v36 = *(__int64 *)(a1 + 520) >> (v35 - 30);
  }
  a2[65] = v36;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 528) + 0x80000000LL) >> 32 )
    return 0;
  a2[66] = *(_DWORD *)(a1 + 528);
  if ( *(__int64 *)(a1 + 544) <= 0x7FFFFFFF )
  {
    a2[67] = *(_DWORD *)(a1 + 536);
    LODWORD(v38) = *(_DWORD *)(a1 + 544);
  }
  else
  {
    v37 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 544), *(_DWORD *)(a1 + 548));
    a2[67] = *(__int64 *)(a1 + 536) >> (v37 - 30);
    v38 = *(__int64 *)(a1 + 544) >> (v37 - 30);
  }
  a2[68] = v38;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 552) + 0x80000000LL) >> 32 )
    return 0;
  a2[69] = *(_DWORD *)(a1 + 552);
  if ( *(__int64 *)(a1 + 568) <= 0x7FFFFFFF )
  {
    a2[70] = *(_DWORD *)(a1 + 560);
    LODWORD(v40) = *(_DWORD *)(a1 + 568);
  }
  else
  {
    v39 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 568), *(_DWORD *)(a1 + 572));
    a2[70] = *(__int64 *)(a1 + 560) >> (v39 - 30);
    v40 = *(__int64 *)(a1 + 568) >> (v39 - 30);
  }
  a2[71] = v40;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 576) + 0x80000000LL) >> 32 )
    return 0;
  a2[72] = *(_DWORD *)(a1 + 576);
  if ( *(__int64 *)(a1 + 592) <= 0x7FFFFFFF )
  {
    a2[73] = *(_DWORD *)(a1 + 584);
    LODWORD(v42) = *(_DWORD *)(a1 + 592);
  }
  else
  {
    v41 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 592), *(_DWORD *)(a1 + 596));
    a2[73] = *(__int64 *)(a1 + 584) >> (v41 - 30);
    v42 = *(__int64 *)(a1 + 592) >> (v41 - 30);
  }
  a2[74] = v42;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 600) + 0x80000000LL) >> 32 )
    return 0;
  a2[75] = *(_DWORD *)(a1 + 600);
  if ( *(__int64 *)(a1 + 616) <= 0x7FFFFFFF )
  {
    a2[76] = *(_DWORD *)(a1 + 608);
    LODWORD(v44) = *(_DWORD *)(a1 + 616);
  }
  else
  {
    v43 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 616), *(_DWORD *)(a1 + 620));
    a2[76] = *(__int64 *)(a1 + 608) >> (v43 - 30);
    v44 = *(__int64 *)(a1 + 616) >> (v43 - 30);
  }
  a2[77] = v44;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 624) + 0x80000000LL) >> 32 )
    return 0;
  a2[78] = *(_DWORD *)(a1 + 624);
  if ( *(__int64 *)(a1 + 640) <= 0x7FFFFFFF )
  {
    a2[79] = *(_DWORD *)(a1 + 632);
    LODWORD(v46) = *(_DWORD *)(a1 + 640);
  }
  else
  {
    v45 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 640), *(_DWORD *)(a1 + 644));
    a2[79] = *(__int64 *)(a1 + 632) >> (v45 - 30);
    v46 = *(__int64 *)(a1 + 640) >> (v45 - 30);
  }
  a2[80] = v46;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 648) + 0x80000000LL) >> 32 )
    return 0;
  a2[81] = *(_DWORD *)(a1 + 648);
  if ( *(__int64 *)(a1 + 664) <= 0x7FFFFFFF )
  {
    a2[82] = *(_DWORD *)(a1 + 656);
    LODWORD(v48) = *(_DWORD *)(a1 + 664);
  }
  else
  {
    v47 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 664), *(_DWORD *)(a1 + 668));
    a2[82] = *(__int64 *)(a1 + 656) >> (v47 - 30);
    v48 = *(__int64 *)(a1 + 664) >> (v47 - 30);
  }
  a2[83] = v48;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 672) + 0x80000000LL) >> 32 )
    return 0;
  a2[84] = *(_DWORD *)(a1 + 672);
  if ( *(__int64 *)(a1 + 688) <= 0x7FFFFFFF )
  {
    a2[85] = *(_DWORD *)(a1 + 680);
    LODWORD(v50) = *(_DWORD *)(a1 + 688);
  }
  else
  {
    v49 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 688), *(_DWORD *)(a1 + 692));
    a2[85] = *(__int64 *)(a1 + 680) >> (v49 - 30);
    v50 = *(__int64 *)(a1 + 688) >> (v49 - 30);
  }
  a2[86] = v50;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 696) + 0x80000000LL) >> 32 )
    return 0;
  a2[87] = *(_DWORD *)(a1 + 696);
  if ( *(__int64 *)(a1 + 712) <= 0x7FFFFFFF )
  {
    a2[88] = *(_DWORD *)(a1 + 704);
    LODWORD(v52) = *(_DWORD *)(a1 + 712);
  }
  else
  {
    v51 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 712), *(_DWORD *)(a1 + 716));
    a2[88] = *(__int64 *)(a1 + 704) >> (v51 - 30);
    v52 = *(__int64 *)(a1 + 712) >> (v51 - 30);
  }
  a2[89] = v52;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 720) + 0x80000000LL) >> 32 )
    return 0;
  a2[90] = *(_DWORD *)(a1 + 720);
  if ( *(__int64 *)(a1 + 736) <= 0x7FFFFFFF )
  {
    a2[91] = *(_DWORD *)(a1 + 728);
    LODWORD(v54) = *(_DWORD *)(a1 + 736);
  }
  else
  {
    v53 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 736), *(_DWORD *)(a1 + 740));
    a2[91] = *(__int64 *)(a1 + 728) >> (v53 - 30);
    v54 = *(__int64 *)(a1 + 736) >> (v53 - 30);
  }
  a2[92] = v54;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 744) + 0x80000000LL) >> 32 )
    return 0;
  a2[93] = *(_DWORD *)(a1 + 744);
  if ( *(__int64 *)(a1 + 760) <= 0x7FFFFFFF )
  {
    a2[94] = *(_DWORD *)(a1 + 752);
    LODWORD(v56) = *(_DWORD *)(a1 + 760);
  }
  else
  {
    v55 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 760), *(_DWORD *)(a1 + 764));
    a2[94] = *(__int64 *)(a1 + 752) >> (v55 - 30);
    v56 = *(__int64 *)(a1 + 760) >> (v55 - 30);
  }
  a2[95] = v56;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 768) + 0x80000000LL) >> 32 )
    return 0;
  a2[96] = *(_DWORD *)(a1 + 768);
  if ( *(__int64 *)(a1 + 784) <= 0x7FFFFFFF )
  {
    a2[97] = *(_DWORD *)(a1 + 776);
    LODWORD(v58) = *(_DWORD *)(a1 + 784);
  }
  else
  {
    v57 = ((int (__stdcall *)(_DWORD, _DWORD))RtlFindMostSignificantBit)(*(_DWORD *)(a1 + 784), *(_DWORD *)(a1 + 788));
    a2[97] = *(__int64 *)(a1 + 776) >> (v57 - 30);
    v58 = *(__int64 *)(a1 + 784) >> (v57 - 30);
  }
  a2[98] = v58;
  return 1;
}
