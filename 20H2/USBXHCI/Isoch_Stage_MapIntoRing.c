/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x1C0001050
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x1C0001010 (Isoch_EvtDmaCallback.c)
 *     Isoch_MapStage @ 0x1C0003780 (Isoch_MapStage.c)
 * Callees:
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0005050 (TR_AddTRBRangeToSecureTransferRing.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C000583C (UsbDevice_DirectWriteDoorbell.c)
 *     StageQueue_Release @ 0x1C000C574 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000C5AC (TR_ReleaseSegments.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     Isoch_InsertLinkTrb @ 0x1C00424E4 (Isoch_InsertLinkTrb.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0043108 (Isoch_Stage_FreeScatterGatherList.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x1C0043EA8 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x1C0044790 (WPP_RECORDER_SF_DDqqDDD.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0046450 (XilUsbDevice_SendRequestToRingDoorbell.c)
 */

__int64 __fastcall Isoch_Stage_MapIntoRing(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  int v4; // ecx
  __int64 v5; // r12
  _DWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // r11d
  unsigned int v15; // r11d
  __int64 v16; // r10
  unsigned int v17; // eax
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rtt
  unsigned int v23; // ebx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r13
  int v28; // ebx
  __int64 v29; // rax
  char v30; // r10
  unsigned int v31; // r15d
  _OWORD *v32; // r14
  _OWORD *v33; // rax
  char v34; // si
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rdx
  _DWORD *v38; // r10
  unsigned int v39; // r9d
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int16 v42; // r8
  __int64 v43; // rax
  int v44; // r8d
  int v45; // ebx
  int v46; // r9d
  unsigned int v47; // ecx
  unsigned int v48; // r8d
  unsigned int v49; // r10d
  int v50; // eax
  unsigned int v51; // r11d
  unsigned int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // eax
  int v55; // edx
  unsigned int v56; // r8d
  unsigned int v57; // r9d
  unsigned int v58; // ecx
  unsigned int v59; // r10d
  int v60; // eax
  __int64 v61; // rax
  char v62; // cl
  int v63; // r14d
  int v64; // r14d
  int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // r11d
  __int64 v68; // rbx
  unsigned int v69; // r10d
  unsigned int v70; // eax
  __int64 v71; // r10
  int v72; // eax
  __int64 v73; // r9
  __int64 v74; // r9
  int v75; // r8d
  _DWORD *v76; // rdx
  int v77; // edx
  int v78; // eax
  int v79; // ecx
  int v80; // r9d
  int v81; // r8d
  __int64 result; // rax
  __int64 v83; // rsi
  int v84; // ecx
  int v85; // ebx
  __int64 *v86; // rsi
  __int64 v87; // r13
  _QWORD *v88; // rax
  __int64 v89; // rcx
  int v90; // r9d
  unsigned int v91; // r9d
  int v92; // r8d
  __int64 v93; // rcx
  int v94; // r8d
  __int64 v95; // rax
  __int64 **v96; // rdx
  __int64 *v97; // rax
  unsigned int v98; // ecx
  unsigned int v99; // edx
  unsigned int *v100; // r8
  unsigned int v101; // edx
  __int64 v102; // r9
  unsigned int v103; // r10d
  __int64 v104; // rcx
  unsigned int v105; // eax
  __int64 v106; // rax
  __int64 v107; // r8
  __int64 v108; // r8
  _DWORD *v109; // rdx
  int v110; // edx
  __int64 v111; // rax
  __int64 v112; // r8
  __int64 v113; // rcx
  unsigned int v114; // r9d
  unsigned int v115; // eax
  __int64 v116; // r8
  __int64 v117; // rsi
  KIRQL v118; // dl
  __int64 v119; // rax
  __int64 v120; // r8
  __int64 v121; // rcx
  __int64 v122; // rdx
  unsigned int v123; // eax
  int v124; // ecx
  __int64 v125; // rdx
  unsigned int v126; // ecx
  __int64 v127; // rax
  signed __int32 v128[10]; // [rsp+0h] [rbp-D9h] BYREF
  int v129; // [rsp+60h] [rbp-79h]
  unsigned int v130; // [rsp+64h] [rbp-75h]
  unsigned int v131; // [rsp+68h] [rbp-71h]
  __int64 v132; // [rsp+70h] [rbp-69h]
  unsigned int v133; // [rsp+78h] [rbp-61h]
  __int128 v134; // [rsp+80h] [rbp-59h]
  unsigned int v135; // [rsp+90h] [rbp-49h]
  int v136; // [rsp+94h] [rbp-45h]
  int v137; // [rsp+98h] [rbp-41h]
  unsigned int *v138; // [rsp+A0h] [rbp-39h]
  unsigned int v139; // [rsp+A8h] [rbp-31h]
  unsigned int v140; // [rsp+ACh] [rbp-2Dh]
  unsigned int v141; // [rsp+B0h] [rbp-29h]
  int v142; // [rsp+B4h] [rbp-25h]
  __int64 v143; // [rsp+B8h] [rbp-21h]
  int v144; // [rsp+C0h] [rbp-19h]
  __int64 v145; // [rsp+C8h] [rbp-11h]
  _DWORD *v146; // [rsp+D0h] [rbp-9h]
  __int128 v147; // [rsp+D8h] [rbp-1h]
  char v149; // [rsp+148h] [rbp+6Fh]
  char v150; // [rsp+150h] [rbp+77h]
  char i; // [rsp+158h] [rbp+7Fh]

  v1 = *a1;
  v139 = 0;
  v149 = 0;
  v137 = 0;
  v3 = *(_QWORD *)(v1 + 56);
  v4 = 512;
  v5 = *((unsigned int *)a1 + 10);
  v6 = (_DWORD *)(*(_QWORD *)(v1 + 48) + 128LL);
  v133 = 0;
  v7 = *(_QWORD *)(v3 + 40);
  v8 = *(unsigned int *)(v3 + 192);
  v130 = 0;
  v136 = 0;
  v9 = (*(_QWORD *)(v7 + 336) & 0x200000000LL) == 0;
  v140 = 0;
  v10 = a1[9];
  if ( !v9 )
    v4 = 0;
  v138 = (unsigned int *)a1[9];
  v144 = v4;
  v141 = 0;
  v11 = *(_QWORD *)(v10 + 16);
  v131 = *(_DWORD *)(v10 + 24);
  *((_DWORD *)a1 + 22) = v8;
  v12 = *(_QWORD *)(v3 + 56);
  v13 = *(_QWORD *)(v1 + 48) + 140LL;
  v142 = 0;
  v145 = v1;
  v135 = *(_DWORD *)(v12 + 152);
  LODWORD(v12) = *(_DWORD *)(v1 + 96) - 1;
  v146 = v6;
  v132 = v11;
  v143 = v8;
  if ( (_DWORD)v5 == (_DWORD)v12 )
    v14 = *(_DWORD *)(v1 + 80);
  else
    v14 = *(_DWORD *)(v13 + 12LL * (unsigned int)(v5 + 1));
  v15 = v14 - *(_DWORD *)(v13 + 12 * v5);
  v16 = *(_QWORD *)(v3 + 40);
  v129 = v15;
  if ( (*(_QWORD *)(v16 + 336) & 0x20000000000LL) == 0 )
    goto LABEL_17;
  v17 = (_DWORD)v5 ? v5 : 0;
  v18 = v17 / *(_DWORD *)(v3 + 356) + *v6;
  v136 = v18;
  v19 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v16 + 444) / 10000LL;
  v20 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v16 + 88) + 40LL) + 2) >> 3) & 0x7FF;
  _m_prefetchw((const void *)(v16 + 432));
  v21 = *(_QWORD *)(v16 + 432);
  do
  {
    v22 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 432), v21, v21);
  }
  while ( v22 != v21 );
  v23 = v20 | (v19 + ((_DWORD)v21 << 11) - (v21 >> 21)) & 0xFFFFF800;
  v24 = ((_WORD)v19 + ((_WORD)v21 << 11) - (unsigned __int16)(v21 >> 21)) & 0x7FF;
  if ( v24 < (unsigned int)v20 )
  {
    v20 = (unsigned int)v20 - v24;
    v115 = v23 - 2048;
    if ( (unsigned int)v20 <= 0x400 )
      v115 = v23;
    v23 = v115;
  }
  else if ( v24 - (unsigned int)v20 > 0x400 )
  {
    v23 += 2048;
  }
  v25 = _InterlockedExchange64(
          (volatile __int64 *)(v16 + 432),
          ((unsigned __int64)v23 >> 11) | ((v19 - (v23 & 0x7FF)) << 21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v25) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v16 + 72),
      v25,
      4,
      174,
      (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
      v23);
    v15 = v129;
    v11 = v132;
  }
  if ( (int)(v23 - v18) < 0 )
  {
LABEL_17:
    v26 = *(unsigned int *)(v3 + 192);
    v27 = 0LL;
    v28 = 4;
    if ( (unsigned int)v26 >= *(_DWORD *)(v3 + 196) )
    {
      LOBYTE(v11) = 1;
      v27 = *(_QWORD *)(v3 + 184) + 16 * v26;
      Isoch_InsertLinkTrb(v3, a1, 4LL, v11);
      v15 = v129;
      v11 = v132;
      LODWORD(v143) = 0;
    }
    v29 = *(_QWORD *)(v3 + 40);
    v30 = *(_BYTE *)(v29 + 554);
    v150 = *(_BYTE *)(v29 + 555);
    for ( i = v30; ; v30 = i )
    {
      v31 = *(_DWORD *)(v3 + 192);
      v32 = (_OWORD *)(*(_QWORD *)(v3 + 184) + 16LL * v31);
      v33 = v32;
      v134 = 0LL;
      if ( v27 )
        v33 = (_OWORD *)v27;
      v34 = 0;
      v27 = (__int64)v33;
      if ( v28 == 4 )
        break;
      switch ( v28 )
      {
        case 6:
          goto LABEL_24;
        case 5:
          v53 = DWORD2(v134);
          v56 = 1024;
          goto LABEL_49;
        case 7:
LABEL_24:
          *(_QWORD *)&v134 = 1LL;
          v35 = HIDWORD(v134) & 0xFFFF03DF | 0x1C20;
          WORD1(v134) = v5;
          v5 = (unsigned int)(v5 + 1);
          HIDWORD(v134) = v35;
          DWORD1(v134) = *v146;
          if ( v28 == 7 || (v36 = *(_DWORD *)(v145 + 96), (_DWORD)v5 == v36) )
          {
            v39 = DWORD2(v134);
            v28 = 9;
          }
          else
          {
            if ( (v5 & 0x7F) != 0 )
            {
              v35 = v144 | v35 & 0xFFFFFDFF;
              HIDWORD(v134) = v35;
            }
            v37 = *(_QWORD *)(v145 + 48) + 140LL;
            v130 = 0;
            v38 = (_DWORD *)(v37 + 12 * v5);
            if ( (_DWORD)v5 == v36 - 1 )
            {
              v28 = 4;
              v39 = DWORD2(v134);
              v129 = *(_DWORD *)(v145 + 80) - *v38;
            }
            else
            {
              v39 = DWORD2(v134);
              v28 = 4;
              v129 = *(_DWORD *)(v37 + 12LL * (unsigned int)(v5 + 1)) - *v38;
            }
          }
          goto LABEL_64;
      }
      v62 = v28 - 10;
      v35 = 1042;
      if ( v28 == 10 )
      {
        v62 = 1;
        HIDWORD(v134) = 1042;
        v39 = DWORD2(v134) & 0xFFC00000;
        v149 = 1;
        v28 = 6;
      }
      else
      {
        HIDWORD(v134) = 1042;
        v39 = DWORD2(v134) & 0xFFC00000;
        v149 = 1;
        v28 = 7;
      }
LABEL_65:
      if ( v32 != (_OWORD *)v27 )
        HIDWORD(v134) = ((unsigned __int8)v35 ^ (unsigned __int8)*(_DWORD *)(v3 + 200)) & 1 ^ v35;
      DWORD2(v134) = v39 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 112) << 22);
      *v32 = v134;
      v63 = v137;
      ++*(_DWORD *)(v3 + 192);
      v64 = v63 + 1;
      v65 = *(_DWORD *)(v3 + 192);
      v137 = v64;
      if ( v62 )
      {
        Isoch_InsertLinkTrb(v3, a1, 5LL, 0LL);
        v149 = 0;
        v65 = *(_DWORD *)(v3 + 192);
      }
      if ( v28 == 4 || v28 == 9 )
      {
        *((_DWORD *)a1 + 26) = v65;
        *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16LL * *(unsigned int *)(v3 + 192)) = 0LL;
        if ( v28 != 9 && !*(_BYTE *)(v3 + 333) )
          goto LABEL_76;
        *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
        if ( v28 == 9 )
        {
          v71 = v145;
          v72 = v5 - *(_DWORD *)(v145 + 108);
          ++*(_DWORD *)(v145 + 116);
          v73 = *(_QWORD *)(v71 + 48);
          *(_DWORD *)(v71 + 104) = v72;
          v74 = v73 + 140;
          v75 = *((_DWORD *)a1 + 11);
          v76 = (_DWORD *)(v74 + 12LL * *((unsigned int *)a1 + 10));
          if ( v75 == *(_DWORD *)(v71 + 96) - 1 )
            v77 = *(_DWORD *)(v71 + 80) - *v76;
          else
            v77 = *(_DWORD *)(v74 + 12LL * (unsigned int)(v75 + 1)) - *v76;
          *(_DWORD *)(v71 + 88) += v77;
          ++*(_DWORD *)(v3 + 376);
          v78 = v136;
          *(_DWORD *)(v3 + 328) |= 0x20u;
          *(_DWORD *)(v3 + 364) = v78;
LABEL_97:
          *(_DWORD *)(v3 + 328) |= 0x11u;
        }
        else if ( *(_BYTE *)(v3 + 333) )
        {
          goto LABEL_97;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
LABEL_76:
        *(_BYTE *)(v27 + 12) ^= 1u;
        _InterlockedOr(v128, 0);
        v27 = 0LL;
        if ( *(_BYTE *)(v3 + 333) )
        {
          *(_BYTE *)(v3 + 333) = 0;
          v111 = *(_QWORD *)(v3 + 56);
          v112 = *(unsigned int *)(v3 + 64);
          v113 = *(_QWORD *)(v111 + 16);
          v114 = *(_DWORD *)(v111 + 144);
          if ( *(_QWORD *)(v113 + 160) )
          {
            UsbDevice_DirectWriteDoorbell(v113, v114, v112);
          }
          else if ( !*(_BYTE *)(v3 + 280) )
          {
            XilUsbDevice_SendRequestToRingDoorbell(v113 + 608, v114, v112);
          }
        }
        if ( v28 != 9 )
        {
          v140 = v133;
          if ( v133 < *v138 )
            v141 = v132 - v138[6 * v133 + 4];
          v143 = *(unsigned int *)(v3 + 192);
          v142 = v64;
        }
      }
      v66 = *(_DWORD *)(v3 + 192);
      if ( v66 == *(_DWORD *)(v3 + 196) )
      {
        if ( v28 != 4 )
        {
          if ( v28 == 9 )
          {
LABEL_99:
            v79 = *(_DWORD *)(v3 + 192);
            v80 = *((_DWORD *)a1 + 22);
            *((_DWORD *)a1 + 26) = v79;
            TR_AddTRBRangeToSecureTransferRing(v3, (_DWORD)a1 + 24, a1[12], v80, v79, (__int64)(a1 + 16));
            result = *(_QWORD *)(v3 + 56);
            v83 = *(_QWORD *)(result + 16);
            if ( *(_QWORD *)(v83 + 160) )
            {
              v84 = *(_DWORD *)(result + 144);
              v85 = (*(_DWORD *)(v3 + 64) << 16) | (unsigned __int8)v84;
              if ( (WPP_MAIN_CB.AlignmentRequirement & 0x200) != 0 )
                McTemplateK0uqq_EtwWriteTransfer(
                  v84,
                  *(_DWORD *)(v3 + 64),
                  v81,
                  *(unsigned __int8 *)(v83 + 135),
                  v84,
                  *(_DWORD *)(v3 + 64));
              result = *(_QWORD *)(v83 + 160);
              *(_DWORD *)result = v85;
              _InterlockedOr(v128, 0);
            }
            return result;
          }
          v100 = v138;
          v101 = v141;
          v102 = v145;
          v103 = v143;
          v104 = 3LL * v140;
          v133 = v140;
          *(_DWORD *)(v3 + 192) = v143;
          v105 = v100[2 * v104 + 6] - v101;
          v130 = 0;
          v131 = v105;
          v106 = *(_QWORD *)&v100[2 * v104 + 4] + v101;
          v107 = *(_QWORD *)(v102 + 48);
          v132 = v106;
          v108 = v107 + 140;
          v137 = v142;
          v109 = (_DWORD *)(v108 + 12 * v5);
          if ( (_DWORD)v5 == *(_DWORD *)(v102 + 96) - 1 )
            v110 = *(_DWORD *)(v102 + 80) - *v109;
          else
            v110 = *(_DWORD *)(v108 + 12LL * (unsigned int)(v5 + 1)) - *v109;
          v129 = v110;
          v28 = 4;
          v66 = v103;
        }
        v86 = (__int64 *)a1[1];
        v87 = v66;
        v88 = a1 + 1;
        v27 = *(_QWORD *)(v3 + 184) + 16 * v87;
        v147 = 0LL;
        if ( v86 != a1 + 1 )
        {
          if ( (_QWORD *)v86[1] != v88 )
            goto LABEL_172;
          v89 = *v86;
          if ( *(__int64 **)(*v86 + 8) != v86 )
            goto LABEL_172;
          *v88 = v89;
          v90 = 6144;
          *(_QWORD *)(v89 + 8) = v88;
          v86[1] = (__int64)v86;
          *v86 = (__int64)v86;
          v9 = *(_DWORD *)(v3 + 200) == 0;
          *((_QWORD *)&v147 + 1) = 0LL;
          if ( v9 )
            v90 = 6145;
          if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 336LL) & 0x800LL) != 0 )
            v90 |= 0x10u;
          v91 = v90 & 0xFFFFFFFD;
          v92 = *(unsigned __int16 *)(v3 + 112);
          v93 = 2LL * *(unsigned int *)(v3 + 192);
          *(_QWORD *)&v147 = v86[3];
          v94 = DWORD2(v147) & 0x3FFFFF | (v92 << 22);
          v95 = *(_QWORD *)(v3 + 184);
          *((_QWORD *)&v147 + 1) = __PAIR64__(v91, v94);
          *(_QWORD *)(v95 + 8 * v93) = v147;
          *(_DWORD *)(v95 + 8 * v93 + 8) = v94;
          *(_DWORD *)(v95 + 8 * v93 + 12) = v91;
          *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
          v96 = (__int64 **)a1[4];
          v97 = *(__int64 **)(v3 + 176);
          if ( *v96 != a1 + 3 )
LABEL_172:
            __fastfail(3u);
          *v97 = (__int64)(a1 + 3);
          v97[1] = (__int64)v96;
          *v96 = v97;
          a1[4] = (__int64)v97;
          *(_QWORD *)(v3 + 176) = v86;
          *(_QWORD *)(v3 + 184) = v86[2];
          *(_DWORD *)(v3 + 192) = 0;
          a1[12] = (__int64)v86;
          KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
          LODWORD(v143) = 0;
        }
      }
      if ( v28 == 9 )
        goto LABEL_99;
      v15 = v129;
      v11 = v132;
    }
    v40 = v5;
    if ( *(_DWORD *)(v3 + 356) != 1 )
      v40 = (unsigned int)v5 / *(_DWORD *)(v3 + 356);
    v41 = *v146 + v40;
    v42 = v41;
    v136 = v41;
    v43 = *(_QWORD *)(v3 + 56);
    v44 = ((v42 & 0x7FF) << 20) | 0x1400;
    v45 = v44;
    v46 = *(_DWORD *)(v43 + 148);
    v47 = *(_WORD *)(v43 + 100) & 0x7FF;
    if ( v30 )
    {
      v123 = v15 + v47 - 1;
      v51 = v46 + 1;
      v124 = v123 / v47;
      v49 = v124;
      if ( !v124 )
        v124 = 1;
      v53 = (DWORD2(v134) ^ (((v124 + v46) / v51 - 1) << 17)) & 0x3E0000 ^ DWORD2(v134);
    }
    else
    {
      v48 = v15 + v47 - 1;
      if ( v47 == 200 )
        v49 = v48 / 0xC8;
      else
        v49 = v48 / v47;
      v50 = v49;
      if ( !v49 )
        v50 = 1;
      v51 = v46 + 1;
      v52 = v46 + v50;
      if ( v46 )
        v52 /= v51;
      v53 = DWORD2(v134);
      v44 = v45 | ((((_BYTE)v52 - 1) & 3) << 7);
    }
    v34 = i;
    v54 = v49;
    if ( !v49 )
      v54 = 1;
    if ( v51 == 1 )
      v55 = 0;
    else
      v55 = v54 % v51;
    if ( v55 )
      v46 = v55 - 1;
    v56 = (v44 ^ (v46 << 16)) & 0xF0000 ^ v44;
    v57 = 0;
    v15 = v129;
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 320LL) )
      v57 = v49;
    v139 = v57;
    v11 = v132;
LABEL_49:
    if ( v131 > v15 )
    {
      *(_QWORD *)&v134 = v132;
      v131 -= v15;
      v39 = v53 ^ (v15 ^ v53) & 0x1FFFF;
      v132 += v15;
      if ( v130 + (v39 & 0x1FFFF) > v135 )
        v39 ^= (v39 ^ (v135 - v130)) & 0x1FFFF;
      if ( v150 )
        v56 = v56 & 0xFFFFFE7F | 0x80;
      v58 = v130;
LABEL_55:
      v28 = 6;
      goto LABEL_56;
    }
    v67 = v15 - v131;
    v68 = v133 + 1;
    *(_QWORD *)&v134 = v11;
    v129 = v67;
    v133 = v68;
    v69 = *v138;
    v39 = v53 ^ (v131 ^ v53) & 0x1FFFF;
    if ( (unsigned int)v68 < *v138 )
    {
      v132 = *(_QWORD *)&v138[6 * v68 + 4];
      v70 = v138[6 * v68 + 6];
      LODWORD(v68) = v133;
    }
    else
    {
      v70 = 0;
      v132 = 0LL;
    }
    v58 = v130;
    v131 = v70;
    if ( v130 + (v39 & 0x1FFFF) > v135 )
    {
      v39 ^= (v39 ^ (v135 - v130)) & 0x1FFFF;
      if ( v67 )
      {
        v125 = v132;
        v126 = v131;
        while ( v126 <= v67 )
        {
          v67 -= v126;
          v68 = (unsigned int)(v68 + 1);
          v129 = v67;
          v133 = v68;
          if ( (unsigned int)v68 >= v69 )
          {
            v132 = 0LL;
            v131 = 0;
            v58 = v130;
            goto LABEL_84;
          }
          v125 = *(_QWORD *)&v138[6 * v68 + 4];
          v126 = v138[6 * v68 + 6];
          v132 = v125;
          v131 = v126;
          if ( !v67 )
            goto LABEL_158;
        }
        v131 = v126 - v67;
        v132 = v67 + v125;
        v129 = 0;
LABEL_158:
        v58 = v130;
      }
    }
    else
    {
LABEL_84:
      if ( v67 )
      {
        v28 = 5;
        goto LABEL_56;
      }
    }
    if ( v150 )
      v56 = v56 & 0xFFFFFE7F | 0x80;
    if ( (_DWORD)v5 != *((_DWORD *)a1 + 11) )
      goto LABEL_55;
    v28 = 7;
LABEL_56:
    v59 = v56;
    v130 = (v39 & 0x1FFFF) + v58;
    if ( !v34 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 320LL) && (unsigned int)(v28 - 6) > 1 )
      {
        v98 = *(_WORD *)(*(_QWORD *)(v3 + 56) + 100LL) & 0x7FF;
        if ( v98 == 200 )
          v99 = v130 / 0xC8;
        else
          v99 = v130 / v98;
        v60 = v139 - v99;
        if ( v139 - v99 > 0x1F )
          v60 = 31;
      }
      else
      {
        v60 = 0;
      }
      v39 ^= (v39 ^ (v60 << 17)) & 0x3E0000;
    }
    v61 = *(_QWORD *)(v3 + 40);
    v35 = v56 | 0x10;
    HIDWORD(v134) = v35;
    if ( (*(_QWORD *)(v61 + 336) & 0x800000000000LL) != 0 )
    {
      v127 = *(_QWORD *)(v3 + 48);
      if ( *(_DWORD *)(v127 + 20) == 1 )
      {
        if ( *(_DWORD *)(v127 + 40) )
        {
          if ( v28 == 6 )
          {
            if ( *(_DWORD *)(v3 + 196) - v31 - 1 < *(_DWORD *)(v3 + 432) )
            {
              v28 = 10;
              goto LABEL_64;
            }
            goto LABEL_63;
          }
          if ( v28 == 7 )
          {
            v28 = 11;
            goto LABEL_64;
          }
        }
      }
    }
    if ( (unsigned int)(v28 - 6) > 1 )
    {
LABEL_64:
      v62 = v149;
      goto LABEL_65;
    }
LABEL_63:
    v35 = v59 | 0x12;
    HIDWORD(v134) = v59 | 0x12;
    goto LABEL_64;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqqDDD(
      *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
      v20,
      v11,
      v128[8],
      *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
      *(_QWORD *)(v1 + 24),
      (char)a1,
      v23,
      v5,
      v18);
  Isoch_Stage_FreeScatterGatherList(v3, a1, v20, v11);
  *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  v117 = *a1;
  if ( *((_BYTE *)a1 + 56) )
  {
    IoFreeMdl((PMDL)a1[8]);
    a1[8] = 0LL;
    *((_BYTE *)a1 + 56) = 0;
  }
  LOBYTE(v116) = 1;
  TR_ReleaseSegments(v3, a1 + 1, v116);
  TR_ReleaseSegments(v3, a1 + 3, 0LL);
  StageQueue_Release(v117 + 128, a1);
  v118 = *(_BYTE *)(v3 + 104);
  *(_DWORD *)(v3 + 328) |= 0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v118);
  v119 = *(_QWORD *)(v3 + 56);
  v120 = *(unsigned int *)(v3 + 64);
  v121 = *(_QWORD *)(v119 + 16);
  v122 = *(unsigned int *)(v119 + 144);
  if ( *(_QWORD *)(v121 + 160) )
    result = UsbDevice_DirectWriteDoorbell(v121, v122, v120);
  else
    result = XilUsbDevice_SendRequestToRingDoorbell(v121 + 608, v122, v120);
  *(_DWORD *)(v3 + 352) = 1;
  return result;
}
