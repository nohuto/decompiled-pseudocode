/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x1C00090A0
 * Callers:
 *     Isoch_MapStage @ 0x1C0008740 (Isoch_MapStage.c)
 *     Isoch_EvtDmaCallback @ 0x1C0009060 (Isoch_EvtDmaCallback.c)
 * Callees:
 *     UsbDevice_DirectWriteDoorbell @ 0x1C000900C (UsbDevice_DirectWriteDoorbell.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0009BB0 (TR_AddTRBRangeToSecureTransferRing.c)
 *     StageQueue_Release @ 0x1C000E344 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000E380 (TR_ReleaseSegments.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     Isoch_InsertLinkTrb @ 0x1C0042784 (Isoch_InsertLinkTrb.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0042EC8 (Isoch_Stage_FreeScatterGatherList.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x1C0043C54 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x1C00442CC (WPP_RECORDER_SF_DDqqDDD.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0045CAC (XilUsbDevice_SendRequestToRingDoorbell.c)
 */

int *__fastcall Isoch_Stage_MapIntoRing(__int64 *a1)
{
  __int64 v1; // rsi
  int v3; // ecx
  __int64 v4; // rdi
  __int64 v5; // r12
  _DWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  bool v9; // cf
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
  unsigned int v20; // r8d
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
  __int64 v32; // rdx
  _OWORD *v33; // r14
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
  unsigned int v68; // edx
  __int64 v69; // rbx
  unsigned int v70; // eax
  KSPIN_LOCK *v71; // rsi
  __int64 v72; // r10
  int v73; // eax
  __int64 v74; // r9
  __int64 v75; // r9
  int v76; // r8d
  _DWORD *v77; // rdx
  int v78; // edx
  int v79; // eax
  int v80; // ecx
  int v81; // r9d
  int v82; // r8d
  int *result; // rax
  __int64 v84; // rsi
  int v85; // ecx
  int v86; // ebx
  __int64 *v87; // rsi
  __int64 v88; // r13
  _QWORD *v89; // rax
  __int64 v90; // rcx
  int v91; // r9d
  bool v92; // zf
  unsigned int v93; // r9d
  int v94; // r8d
  __int64 v95; // rcx
  int v96; // r8d
  __int64 v97; // rax
  __int64 **v98; // rdx
  __int64 *v99; // rax
  unsigned int v100; // ecx
  unsigned int v101; // edx
  unsigned int *v102; // r8
  unsigned int v103; // edx
  __int64 v104; // r9
  unsigned int v105; // r10d
  __int64 v106; // rcx
  unsigned int v107; // eax
  __int64 v108; // rax
  __int64 v109; // r8
  __int64 v110; // r8
  _DWORD *v111; // rdx
  int v112; // edx
  __int64 v113; // rax
  __int64 v114; // r8
  __int64 v115; // rcx
  unsigned int v116; // r9d
  __int64 v117; // r8
  __int64 v118; // rsi
  KIRQL v119; // dl
  __int64 v120; // rax
  __int64 v121; // r8
  __int64 v122; // rcx
  __int64 v123; // rdx
  unsigned int v124; // eax
  int v125; // ecx
  __int64 v126; // r10
  unsigned int v127; // ecx
  __int64 v128; // rax
  signed __int32 v129[10]; // [rsp+0h] [rbp-D9h] BYREF
  int v130; // [rsp+60h] [rbp-79h]
  unsigned int v131; // [rsp+64h] [rbp-75h]
  unsigned int v132; // [rsp+68h] [rbp-71h]
  __int64 v133; // [rsp+70h] [rbp-69h]
  unsigned int v134; // [rsp+78h] [rbp-61h]
  __int128 v135; // [rsp+80h] [rbp-59h]
  unsigned int v136; // [rsp+90h] [rbp-49h]
  int v137; // [rsp+94h] [rbp-45h]
  int v138; // [rsp+98h] [rbp-41h]
  unsigned int *v139; // [rsp+A0h] [rbp-39h]
  unsigned int v140; // [rsp+A8h] [rbp-31h]
  unsigned int v141; // [rsp+ACh] [rbp-2Dh]
  unsigned int v142; // [rsp+B0h] [rbp-29h]
  int v143; // [rsp+B4h] [rbp-25h]
  __int64 v144; // [rsp+B8h] [rbp-21h]
  int v145; // [rsp+C0h] [rbp-19h]
  __int64 v146; // [rsp+C8h] [rbp-11h]
  _DWORD *v147; // [rsp+D0h] [rbp-9h]
  __int128 v148; // [rsp+D8h] [rbp-1h]
  char v150; // [rsp+148h] [rbp+6Fh]
  char v151; // [rsp+150h] [rbp+77h]
  char i; // [rsp+158h] [rbp+7Fh]

  v1 = *a1;
  v140 = 0;
  v150 = 0;
  v3 = 512;
  v138 = 0;
  v4 = *(_QWORD *)(v1 + 56);
  v5 = *((unsigned int *)a1 + 10);
  v6 = (_DWORD *)(*(_QWORD *)(v1 + 48) + 128LL);
  v134 = 0;
  v7 = *(_QWORD *)(v4 + 40);
  v8 = *(unsigned int *)(v4 + 192);
  v131 = 0;
  v137 = 0;
  v9 = (*(_QWORD *)(v7 + 336) & 0x200000000LL) != 0;
  v141 = 0;
  v10 = a1[9];
  if ( v9 )
    v3 = 0;
  v139 = (unsigned int *)a1[9];
  v145 = v3;
  v142 = 0;
  v11 = *(_QWORD *)(v10 + 16);
  v132 = *(_DWORD *)(v10 + 24);
  *((_DWORD *)a1 + 22) = v8;
  v12 = *(_QWORD *)(v4 + 56);
  v13 = *(_QWORD *)(v1 + 48) + 140LL;
  v143 = 0;
  v146 = v1;
  v136 = *(_DWORD *)(v12 + 152);
  LODWORD(v12) = *(_DWORD *)(v1 + 96) - 1;
  v147 = v6;
  v133 = v11;
  v144 = v8;
  if ( (_DWORD)v5 == (_DWORD)v12 )
    v14 = *(_DWORD *)(v1 + 80);
  else
    v14 = *(_DWORD *)(v13 + 12LL * (unsigned int)(v5 + 1));
  v15 = v14 - *(_DWORD *)(v13 + 12 * v5);
  v16 = *(_QWORD *)(v4 + 40);
  v130 = v15;
  if ( !_bittest64((const signed __int64 *)(v16 + 336), 0x29u) )
    goto LABEL_17;
  v17 = (_DWORD)v5 ? v5 : 0;
  v18 = v17 / *(_DWORD *)(v4 + 356) + *v6;
  v137 = v18;
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
  if ( v24 < v20 )
  {
    v20 -= v24;
    if ( v20 > 0x400 )
      v23 -= 2048;
  }
  else if ( v24 - v20 > 0x400 )
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
      175,
      (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
      v23);
    v15 = v130;
    v11 = v133;
  }
  if ( (int)(v23 - v18) < 0 )
  {
LABEL_17:
    v26 = *(unsigned int *)(v4 + 192);
    v27 = 0LL;
    v28 = 4;
    if ( (unsigned int)v26 >= *(_DWORD *)(v4 + 196) )
    {
      LOBYTE(v11) = 1;
      v27 = *(_QWORD *)(v4 + 184) + 16 * v26;
      Isoch_InsertLinkTrb(v4, a1, 4LL, v11);
      v15 = v130;
      v11 = v133;
      LODWORD(v144) = 0;
    }
    v29 = *(_QWORD *)(v4 + 40);
    v30 = *(_BYTE *)(v29 + 554);
    v151 = *(_BYTE *)(v29 + 555);
    for ( i = v30; ; v30 = i )
    {
      v31 = *(_DWORD *)(v4 + 192);
      v32 = v27;
      v27 = *(_QWORD *)(v4 + 184) + 16LL * v31;
      v33 = (_OWORD *)v27;
      v135 = 0LL;
      if ( v32 )
        v27 = v32;
      v34 = 0;
      if ( v28 == 4 )
        break;
      switch ( v28 )
      {
        case 6:
          goto LABEL_24;
        case 5:
          v53 = DWORD2(v135);
          v56 = HIDWORD(v135) & 0xFFFF03FF | 0x400;
          goto LABEL_49;
        case 7:
LABEL_24:
          *(_QWORD *)&v135 = 1LL;
          WORD1(v135) = v5;
          v35 = HIDWORD(v135) & 0xFFFF03DF | 0x1C20;
          v5 = (unsigned int)(v5 + 1);
          DWORD1(v135) = *v147;
          HIDWORD(v135) = v35;
          if ( v28 == 7 || (v36 = *(_DWORD *)(v146 + 96), (_DWORD)v5 == v36) )
          {
            v39 = DWORD2(v135);
            v28 = 9;
          }
          else
          {
            if ( (v5 & 0x7F) != 0 )
            {
              v35 = v145 | v35 & 0xFFFFFDFF;
              HIDWORD(v135) = v35;
            }
            v37 = *(_QWORD *)(v146 + 48) + 140LL;
            v131 = 0;
            v38 = (_DWORD *)(v37 + 12 * v5);
            if ( (_DWORD)v5 == v36 - 1 )
            {
              v28 = 4;
              v39 = DWORD2(v135);
              v130 = *(_DWORD *)(v146 + 80) - *v38;
            }
            else
            {
              v39 = DWORD2(v135);
              v28 = 4;
              v130 = *(_DWORD *)(v37 + 12LL * (unsigned int)(v5 + 1)) - *v38;
            }
          }
          goto LABEL_64;
      }
      v62 = v28 - 10;
      v35 = 1042;
      if ( v28 == 10 )
      {
        v62 = 1;
        HIDWORD(v135) = 1042;
        v39 = DWORD2(v135) & 0xFFC00000;
        v150 = 1;
        v28 = 6;
      }
      else
      {
        HIDWORD(v135) = 1042;
        v39 = DWORD2(v135) & 0xFFC00000;
        v150 = 1;
        v28 = 7;
      }
LABEL_65:
      if ( v33 != (_OWORD *)v27 )
        HIDWORD(v135) = ((unsigned __int8)v35 ^ (unsigned __int8)*(_DWORD *)(v4 + 200)) & 1 ^ v35;
      DWORD2(v135) = v39 & 0x3FFFFF | (*(unsigned __int16 *)(v4 + 112) << 22);
      *v33 = v135;
      v63 = v138;
      ++*(_DWORD *)(v4 + 192);
      v64 = v63 + 1;
      v65 = *(_DWORD *)(v4 + 192);
      v138 = v64;
      if ( v62 )
      {
        Isoch_InsertLinkTrb(v4, a1, 5LL, 0LL);
        v150 = 0;
        v65 = *(_DWORD *)(v4 + 192);
      }
      if ( v28 == 4 || v28 == 9 )
      {
        *((_DWORD *)a1 + 26) = v65;
        *(_OWORD *)(*(_QWORD *)(v4 + 184) + 16LL * *(unsigned int *)(v4 + 192)) = 0LL;
        if ( v28 != 9 )
        {
          if ( !*(_BYTE *)(v4 + 333) )
          {
LABEL_76:
            *(_BYTE *)(v27 + 12) ^= 1u;
            _InterlockedOr(v129, 0);
            v27 = 0LL;
            if ( *(_BYTE *)(v4 + 333) )
            {
              *(_BYTE *)(v4 + 333) = 0;
              v113 = *(_QWORD *)(v4 + 56);
              v114 = *(unsigned int *)(v4 + 64);
              v115 = *(_QWORD *)(v113 + 16);
              v116 = *(_DWORD *)(v113 + 144);
              if ( *(_QWORD *)(v115 + 160) )
              {
                UsbDevice_DirectWriteDoorbell(v115, v116, v114);
              }
              else if ( !*(_BYTE *)(v4 + 280) )
              {
                XilUsbDevice_SendRequestToRingDoorbell(v115 + 608, v116, v114);
              }
            }
            if ( v28 != 9 )
            {
              v141 = v134;
              if ( v134 < *v139 )
                v142 = v133 - v139[6 * v134 + 4];
              v144 = *(unsigned int *)(v4 + 192);
              v143 = v64;
            }
            goto LABEL_71;
          }
          v71 = (KSPIN_LOCK *)(v4 + 96);
          *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
          if ( *(_BYTE *)(v4 + 333) )
LABEL_98:
            *(_DWORD *)(v4 + 328) |= 0x11u;
          KeReleaseSpinLock(v71, *(_BYTE *)(v4 + 104));
          goto LABEL_76;
        }
        v71 = (KSPIN_LOCK *)(v4 + 96);
        *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
        v72 = v146;
        v73 = v5 - *(_DWORD *)(v146 + 108);
        ++*(_DWORD *)(v146 + 116);
        v74 = *(_QWORD *)(v72 + 48);
        *(_DWORD *)(v72 + 104) = v73;
        v75 = v74 + 140;
        v76 = *((_DWORD *)a1 + 11);
        v77 = (_DWORD *)(v75 + 12LL * *((unsigned int *)a1 + 10));
        if ( v76 == *(_DWORD *)(v72 + 96) - 1 )
          v78 = *(_DWORD *)(v72 + 80) - *v77;
        else
          v78 = *(_DWORD *)(v75 + 12LL * (unsigned int)(v76 + 1)) - *v77;
        *(_DWORD *)(v72 + 88) += v78;
        ++*(_DWORD *)(v4 + 376);
        v79 = v137;
        *(_DWORD *)(v4 + 328) |= 0x20u;
        *(_DWORD *)(v4 + 364) = v79;
        goto LABEL_98;
      }
LABEL_71:
      v66 = *(_DWORD *)(v4 + 192);
      if ( v66 == *(_DWORD *)(v4 + 196) )
      {
        if ( v28 != 4 )
        {
          if ( v28 == 9 )
          {
LABEL_100:
            v80 = *(_DWORD *)(v4 + 192);
            v81 = *((_DWORD *)a1 + 22);
            *((_DWORD *)a1 + 26) = v80;
            TR_AddTRBRangeToSecureTransferRing(v4, (_DWORD)a1 + 24, a1[12], v81, v80, (__int64)(a1 + 16));
            result = *(int **)(v4 + 56);
            v84 = *((_QWORD *)result + 2);
            if ( *(_QWORD *)(v84 + 160) )
            {
              v85 = result[36];
              v86 = (*(_DWORD *)(v4 + 64) << 16) | (unsigned __int8)v85;
              if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
                McTemplateK0uqq_EtwWriteTransfer(
                  v85,
                  *(_DWORD *)(v4 + 64),
                  v82,
                  *(unsigned __int8 *)(v84 + 135),
                  v85,
                  *(_DWORD *)(v4 + 64));
              result = *(int **)(v84 + 160);
              *result = v86;
              _InterlockedOr(v129, 0);
            }
            return result;
          }
          v102 = v139;
          v103 = v142;
          v104 = v146;
          v105 = v144;
          v106 = 3LL * v141;
          v134 = v141;
          *(_DWORD *)(v4 + 192) = v144;
          v107 = v102[2 * v106 + 6] - v103;
          v131 = 0;
          v132 = v107;
          v108 = *(_QWORD *)&v102[2 * v106 + 4] + v103;
          v109 = *(_QWORD *)(v104 + 48);
          v133 = v108;
          v110 = v109 + 140;
          v138 = v143;
          v111 = (_DWORD *)(v110 + 12 * v5);
          if ( (_DWORD)v5 == *(_DWORD *)(v104 + 96) - 1 )
            v112 = *(_DWORD *)(v104 + 80) - *v111;
          else
            v112 = *(_DWORD *)(v110 + 12LL * (unsigned int)(v5 + 1)) - *v111;
          v130 = v112;
          v28 = 4;
          v66 = v105;
        }
        v87 = (__int64 *)a1[1];
        v88 = v66;
        v89 = a1 + 1;
        v27 = *(_QWORD *)(v4 + 184) + 16 * v88;
        v148 = 0LL;
        if ( v87 != a1 + 1 )
        {
          if ( (_QWORD *)v87[1] != v89 )
            goto LABEL_172;
          v90 = *v87;
          if ( *(__int64 **)(*v87 + 8) != v87 )
            goto LABEL_172;
          *v89 = v90;
          v91 = 6144;
          *(_QWORD *)(v90 + 8) = v89;
          v87[1] = (__int64)v87;
          *v87 = (__int64)v87;
          v92 = *(_DWORD *)(v4 + 200) == 0;
          *((_QWORD *)&v148 + 1) = 0LL;
          if ( v92 )
            v91 = 6145;
          if ( (*(_QWORD *)(*(_QWORD *)(v4 + 40) + 336LL) & 0x800LL) != 0 )
            v91 |= 0x10u;
          v93 = v91 & 0xFFFFFFFD;
          v94 = *(unsigned __int16 *)(v4 + 112);
          v95 = 2LL * *(unsigned int *)(v4 + 192);
          *(_QWORD *)&v148 = v87[3];
          v96 = DWORD2(v148) & 0x3FFFFF | (v94 << 22);
          v97 = *(_QWORD *)(v4 + 184);
          *((_QWORD *)&v148 + 1) = __PAIR64__(v93, v96);
          *(_QWORD *)(v97 + 8 * v95) = v148;
          *(_DWORD *)(v97 + 8 * v95 + 8) = v96;
          *(_DWORD *)(v97 + 8 * v95 + 12) = v93;
          *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
          v98 = (__int64 **)a1[4];
          v99 = *(__int64 **)(v4 + 176);
          if ( *v98 != a1 + 3 )
LABEL_172:
            __fastfail(3u);
          *v99 = (__int64)(a1 + 3);
          v99[1] = (__int64)v98;
          *v98 = v99;
          a1[4] = (__int64)v99;
          *(_QWORD *)(v4 + 176) = v87;
          *(_QWORD *)(v4 + 184) = v87[2];
          *(_DWORD *)(v4 + 192) = 0;
          a1[12] = (__int64)v87;
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
          LODWORD(v144) = 0;
        }
      }
      if ( v28 == 9 )
        goto LABEL_100;
      v15 = v130;
      v11 = v133;
    }
    v40 = v5;
    if ( *(_DWORD *)(v4 + 356) != 1 )
      v40 = (unsigned int)v5 / *(_DWORD *)(v4 + 356);
    v41 = *v147 + v40;
    v42 = v41;
    v137 = v41;
    v43 = *(_QWORD *)(v4 + 56);
    v44 = ((v42 & 0x7FF) << 20) | 0x1400;
    v45 = v44;
    v46 = *(_DWORD *)(v43 + 148);
    v47 = *(_WORD *)(v43 + 100) & 0x7FF;
    if ( v30 )
    {
      v124 = v15 + v47 - 1;
      v51 = v46 + 1;
      v125 = v124 / v47;
      v49 = v125;
      if ( !v125 )
        v125 = 1;
      v53 = (DWORD2(v135) ^ (((v125 + v46) / v51 - 1) << 17)) & 0x3E0000 ^ DWORD2(v135);
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
      v53 = DWORD2(v135);
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
    v15 = v130;
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 40) + 320LL) )
      v57 = v49;
    v140 = v57;
    v11 = v133;
LABEL_49:
    if ( v132 > v15 )
    {
      v39 = v53 ^ (v15 ^ v53) & 0x1FFFF;
      *(_QWORD *)&v135 = v133;
      v133 += v15;
      v132 -= v15;
      if ( v131 + (v39 & 0x1FFFF) > v136 )
        v39 ^= (v39 ^ (v136 - v131)) & 0x1FFFF;
      if ( v151 )
        v56 = v56 & 0xFFFFFE7F | 0x80;
      v58 = v131;
LABEL_55:
      v28 = 6;
      goto LABEL_56;
    }
    v67 = v15 - v132;
    *(_QWORD *)&v135 = v11;
    v130 = v67;
    v68 = *v139;
    v39 = v53 ^ (v132 ^ v53) & 0x1FFFF;
    v69 = v134 + 1;
    v134 = v69;
    if ( (unsigned int)v69 < v68 )
    {
      v133 = *(_QWORD *)&v139[6 * v69 + 4];
      v70 = v139[6 * v69 + 6];
      LODWORD(v69) = v134;
    }
    else
    {
      v70 = 0;
      v133 = 0LL;
    }
    v58 = v131;
    v132 = v70;
    if ( v131 + (v39 & 0x1FFFF) > v136 )
    {
      v39 ^= (v39 ^ (v136 - v131)) & 0x1FFFF;
      if ( v67 )
      {
        v126 = v133;
        v127 = v132;
        while ( v127 <= v67 )
        {
          v67 -= v127;
          v69 = (unsigned int)(v69 + 1);
          v130 = v67;
          v134 = v69;
          if ( (unsigned int)v69 >= v68 )
          {
            v133 = 0LL;
            v132 = 0;
            v58 = v131;
            goto LABEL_84;
          }
          v126 = *(_QWORD *)&v139[6 * v69 + 4];
          v127 = v139[6 * v69 + 6];
          v133 = v126;
          v132 = v127;
          if ( !v67 )
            goto LABEL_159;
        }
        v132 = v127 - v67;
        v133 = v67 + v126;
        v130 = 0;
LABEL_159:
        v58 = v131;
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
    if ( v151 )
      v56 = v56 & 0xFFFFFE7F | 0x80;
    if ( (_DWORD)v5 != *((_DWORD *)a1 + 11) )
      goto LABEL_55;
    v28 = 7;
LABEL_56:
    v59 = v56;
    v131 = (v39 & 0x1FFFF) + v58;
    if ( !v34 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 40) + 320LL) && (unsigned int)(v28 - 6) > 1 )
      {
        v100 = *(_WORD *)(*(_QWORD *)(v4 + 56) + 100LL) & 0x7FF;
        if ( v100 == 200 )
          v101 = v131 / 0xC8;
        else
          v101 = v131 / v100;
        v60 = v140 - v101;
        if ( v140 - v101 > 0x1F )
          v60 = 31;
      }
      else
      {
        v60 = 0;
      }
      v39 ^= (v39 ^ (v60 << 17)) & 0x3E0000;
    }
    v61 = *(_QWORD *)(v4 + 40);
    v35 = v56 | 0x10;
    HIDWORD(v135) = v35;
    if ( (*(_QWORD *)(v61 + 336) & 0x800000000000LL) != 0
      && (v128 = *(_QWORD *)(v4 + 48), *(_DWORD *)(v128 + 20) == 1)
      && *(_DWORD *)(v128 + 40) )
    {
      if ( v28 != 6 )
      {
        if ( v28 == 7 )
          v28 = 11;
        goto LABEL_64;
      }
      if ( *(_DWORD *)(v4 + 196) - v31 - 1 < *(_DWORD *)(v4 + 432) )
      {
        v28 = 10;
        goto LABEL_64;
      }
    }
    else if ( v28 != 6 && v28 != 7 )
    {
      goto LABEL_64;
    }
    v35 = v59 | 0x12;
    HIDWORD(v135) = v59 | 0x12;
LABEL_64:
    v62 = v150;
    goto LABEL_65;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqqDDD(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
      v20,
      v11,
      v129[8],
      *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
      *(_QWORD *)(v1 + 24),
      (char)a1,
      v23,
      v5,
      v18);
  Isoch_Stage_FreeScatterGatherList(v4, a1);
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v118 = *a1;
  if ( *((_BYTE *)a1 + 56) )
  {
    IoFreeMdl((PMDL)a1[8]);
    a1[8] = 0LL;
    *((_BYTE *)a1 + 56) = 0;
  }
  LOBYTE(v117) = 1;
  TR_ReleaseSegments(v4, a1 + 1, v117);
  TR_ReleaseSegments(v4, a1 + 3, 0LL);
  StageQueue_Release(v118 + 128, a1);
  v119 = *(_BYTE *)(v4 + 104);
  *(_DWORD *)(v4 + 328) |= 0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v119);
  v120 = *(_QWORD *)(v4 + 56);
  v121 = *(unsigned int *)(v4 + 64);
  v122 = *(_QWORD *)(v120 + 16);
  v123 = *(unsigned int *)(v120 + 144);
  if ( *(_QWORD *)(v122 + 160) )
    result = UsbDevice_DirectWriteDoorbell(v122, v123, v121);
  else
    result = (int *)XilUsbDevice_SendRequestToRingDoorbell(v122 + 608, v123, v121);
  *(_DWORD *)(v4 + 352) = 1;
  return result;
}
