/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C000EB20
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002F90 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000D800 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C00102CC (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002C210 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0038754 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0002EAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C0003E70 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0004180 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0005310 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C000FE68 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0010130 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00151C8 (VidSchiPropagatePresentHistoryToken.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C002A5E8 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C002AC6C (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     McTemplateK0pqqpxqqqq_EtwWriteTransfer @ 0x1C002DE94 (McTemplateK0pqqpxqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x1C002E1D4 (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C0032140 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 */

__int64 __fastcall VidSchiExecuteMmIoFlip(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 v6; // r12
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // r14d
  __int64 *v12; // rax
  __int64 v13; // rdx
  int *v14; // r13
  bool v15; // zf
  char v16; // al
  int v17; // ebx
  unsigned int v18; // edx
  int v19; // r8d
  int v20; // r8d
  int v21; // edx
  _WORD *v22; // r9
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // rbx
  char v28; // cl
  unsigned int v29; // edx
  unsigned int v30; // r13d
  int v31; // eax
  unsigned int v32; // r9d
  unsigned int v33; // r15d
  unsigned int v34; // ecx
  int v35; // eax
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rbx
  int v39; // r9d
  unsigned __int64 v40; // rdx
  _DWORD *v41; // rdx
  int v42; // ecx
  char v43; // cl
  int v44; // eax
  int v45; // eax
  unsigned int v46; // eax
  int v47; // ecx
  _QWORD *v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // ecx
  __int64 v61; // rbx
  int v62; // r9d
  __int64 v63; // rdx
  __int64 v64; // r8
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned __int8 (__fastcall *v68)(void *); // rdx
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // r14d
  char v74; // r15
  _DWORD *v75; // rbx
  int v76; // r8d
  int v77; // r9d
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned int v80; // eax
  _QWORD *v81; // rax
  __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rcx
  _QWORD *v85; // rax
  unsigned __int64 v86; // rdx
  unsigned int v87; // eax
  int v88; // ecx
  int v89; // r8d
  unsigned int v90; // r8d
  __int64 v91; // rbx
  __int64 v92; // r14
  struct _SLIST_ENTRY *v93; // rcx
  __int64 v94; // rcx
  unsigned int v95; // r14d
  __int64 v96; // r9
  int v97; // edx
  __int64 v98; // rax
  _QWORD *v99; // rbx
  int v100; // r8d
  __int64 v101; // r9
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v105; // rcx
  int v106; // eax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v107; // r8
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rdx
  int v111; // eax
  struct HwQueueStagingList *v112; // r13
  struct HwQueueStagingList *v113; // rcx
  _WORD *v114; // r8
  __int64 v115; // rbx
  int v116; // eax
  int v117; // r9d
  __int64 v118; // r8
  _DWORD *v119; // rax
  int v120; // eax
  __int64 v121; // rcx
  int v122; // eax
  _DWORD *v123; // r14
  __int64 v124; // rdi
  int v125; // edx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rbx
  char v129; // [rsp+F0h] [rbp-80h] BYREF
  char v130; // [rsp+F1h] [rbp-7Fh]
  unsigned int v131; // [rsp+F4h] [rbp-7Ch]
  char v132; // [rsp+F8h] [rbp-78h] BYREF
  char v133[3]; // [rsp+F9h] [rbp-77h] BYREF
  unsigned int v134; // [rsp+FCh] [rbp-74h] BYREF
  unsigned int v135; // [rsp+100h] [rbp-70h]
  int v136; // [rsp+104h] [rbp-6Ch] BYREF
  _BYTE *v137; // [rsp+108h] [rbp-68h]
  int *v138; // [rsp+110h] [rbp-60h]
  _WORD *v139; // [rsp+118h] [rbp-58h]
  int v140; // [rsp+120h] [rbp-50h]
  int v141; // [rsp+124h] [rbp-4Ch]
  int v142; // [rsp+128h] [rbp-48h]
  int v143; // [rsp+12Ch] [rbp-44h]
  unsigned int v144; // [rsp+130h] [rbp-40h]
  unsigned int v145; // [rsp+134h] [rbp-3Ch]
  int v146; // [rsp+138h] [rbp-38h] BYREF
  __int64 v147; // [rsp+140h] [rbp-30h]
  struct HwQueueStagingList *v148; // [rsp+148h] [rbp-28h]
  __int64 *v149; // [rsp+150h] [rbp-20h]
  __int64 v150; // [rsp+158h] [rbp-18h]
  __int64 v151[2]; // [rsp+160h] [rbp-10h] BYREF
  unsigned int v152; // [rsp+170h] [rbp+0h]
  int v153; // [rsp+174h] [rbp+4h]
  __int64 v154; // [rsp+178h] [rbp+8h]
  int v155; // [rsp+180h] [rbp+10h]
  int v156; // [rsp+184h] [rbp+14h]
  __int64 v157; // [rsp+188h] [rbp+18h]
  __int64 v158; // [rsp+190h] [rbp+20h]
  __int64 v159; // [rsp+198h] [rbp+28h]
  char v160[8]; // [rsp+1A0h] [rbp+30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1A8h] [rbp+38h] BYREF
  _QWORD v162[268]; // [rsp+1C0h] [rbp+50h] BYREF

  LODWORD(v6) = a5;
  v137 = a6;
  v148 = a1;
  v8 = a4;
  v9 = 1344LL * a5;
  v10 = v9 + a4 + 88;
  v11 = a3;
  v147 = a4;
  v131 = a3;
  v12 = (__int64 *)(a2 + 3104 + 8LL * a3);
  v145 = a5;
  v13 = *v12;
  v14 = (int *)(v10 + 1136);
  v149 = v12;
  v138 = (int *)(v10 + 1136);
  v139 = (_WORD *)v13;
  v15 = *(_DWORD *)(v13 + 4) == 3;
  v150 = v9 + a4;
  if ( v15 || (*v14 & 0x100) != 0 )
  {
    v16 = 1;
    v138 = (int *)(v10 + 1136);
  }
  else
  {
    v16 = 0;
  }
  v130 = v16;
  v17 = 11;
  if ( !v16 )
    v17 = 5;
  v136 = v17;
  memset(v162, 0, 0x858uLL);
  if ( !*(_BYTE *)(a2 + 148) )
  {
    v22 = v139;
LABEL_21:
    if ( (*v14 & 0x10) != 0 )
      v23 = ((unsigned __int16)**(_DWORD **)(v10 + 1176) | (unsigned __int16)(**(_DWORD **)(v10 + 1176) >> 10)) & 0x3FF;
    else
      v23 = (1 << *(_DWORD *)(a2 + 144)) - 1;
    if ( (v23 & *((_DWORD *)v22 + 588)) != 0 )
      goto LABEL_150;
    goto LABEL_25;
  }
  v18 = *(_DWORD *)(v8 + 48);
  v19 = ((unsigned __int8)*(_DWORD *)(v8 + 44) - 1) & 0x3F;
  if ( v18 != v19 )
  {
    while ( *(_DWORD *)(1344LL * v18 + v8 + 1140) != 14 )
    {
      v18 = ((_BYTE)v18 - 1) & 0x3F;
      if ( v18 == v19 )
        goto LABEL_11;
    }
    goto LABEL_150;
  }
LABEL_11:
  v20 = *(_DWORD *)(v10 + 1136);
  if ( (v20 & 0x10) != 0 )
    v21 = ((unsigned __int16)**(_DWORD **)(v10 + 1176) | (unsigned __int16)(**(_DWORD **)(v10 + 1176) >> 10)) & 0x3FF;
  else
    v21 = (1 << *(_DWORD *)(a2 + 144)) - 1;
  v22 = v139;
  if ( (v21 & *((_DWORD *)v139 + 589)) != 0 )
    goto LABEL_150;
  if ( *(_DWORD *)(a2 + 152) <= 1u || *((_DWORD *)v139 + 1) == 3 || (v20 & 0x100) != 0 || (v20 & 0x80u) == 0 )
    goto LABEL_21;
LABEL_25:
  if ( !*(_DWORD *)(a2 + 2916) )
  {
    v24 = *(_QWORD *)(v10 + 1040);
    if ( !*(_BYTE *)(v24 + 204) )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v24 + 200), 0, 0) )
      {
        if ( *(_BYTE *)(a2 + 148) )
        {
          VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
            (struct _VIDSCH_GLOBAL *)a2,
            v11,
            (struct VIDSCH_FLIP_QUEUE *)v8,
            (struct _VIDSCH_CALL_EXECUTE_FLIP *)v162,
            (enum _VIDSCH_FLIP_STATUS *)&v136,
            a5);
          goto LABEL_115;
        }
        v27 = *(_DWORD **)(v10 + 1176);
        if ( (*v14 & 0x10) == 0 )
        {
LABEL_92:
          memset((char *)&v162[4] + 4, 0, 0x210uLL);
          memset(&v162[71], 0, 0x610uLL);
          v162[0] = a2;
          *(_QWORD *)((char *)&v162[265] + 4) = 0LL;
          HIDWORD(v162[266]) = 0;
          LODWORD(v162[1]) = v11;
          v82 = *(_QWORD *)((char *)v27 + v27[1] * ((8 * v27[2] + 199) & 0xFFFFFFF8) + 48);
          *(_QWORD *)((char *)v27 + v27[1] * ((8 * v27[2] + 199) & 0xFFFFFFF8) + 40) = *(_QWORD *)(*(_QWORD *)(v82 + 96)
                                                                                                 + 32LL);
          v83 = *(_QWORD *)(v82 + 96);
          *(_WORD *)((char *)v27 + v27[1] * ((8 * v27[2] + 199) & 0xFFFFFFF8) + 32) = *(_WORD *)(v83 + 6);
          v84 = *(unsigned int *)(*(_QWORD *)(v82 + 96) + 12LL);
          if ( !(_DWORD)v84 )
          {
            v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v84, v83);
            v85[5] = 0LL;
            v85[6] = 0LL;
            v85[7] = 0LL;
            v85[3] = 281LL;
            v85[4] = 0x4000LL;
            WdLogEvent5_WdCriticalError(v85);
            __debugbreak();
          }
          v86 = *(_QWORD *)(v10 + 1176);
          HIDWORD(v162[1]) = *(unsigned __int16 *)(*(_DWORD *)(v86 + 4)
                                                 * ((8 * *(_DWORD *)(v86 + 8) + 199) & 0xFFFFFFF8)
                                                 + v86
                                                 + 32);
          v162[2] = *(_QWORD *)(*(_DWORD *)(v86 + 4) * ((8 * *(_DWORD *)(v86 + 8) + 199) & 0xFFFFFFF8) + v86 + 40);
          v87 = *(_DWORD *)(v10 + 1140);
          v162[3] = *(_QWORD *)(*(_DWORD *)(v86 + 4) * ((8 * *(_DWORD *)(v86 + 8) + 199) & 0xFFFFFFF8) + v86 + 24);
          v88 = *v14;
          v89 = *v14 & 0xF;
          LODWORD(v162[265]) = -1073741823;
          v90 = v162[70] & 0xFFFFFF07 | (4 * (v88 & 0x20 | (2 * v89)));
          v162[70] = __PAIR64__(v87, v90);
          v91 = *(_QWORD *)(v86 + 200);
          if ( v91 )
          {
            LODWORD(v162[263]) = *(_DWORD *)(v91 + 8);
            v162[264] = v91 + 16;
          }
          v92 = *(_QWORD *)(v10 + 1160);
          if ( v92 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v92 + 16), &LockHandle);
            if ( v91 )
              _InterlockedIncrement((volatile signed __int32 *)(v91 + 12));
            v93 = *(struct _SLIST_ENTRY **)(v92 + 8);
            if ( v93 )
              CRefCountedBuffer::RefCountedBufferRelease(v93);
            *(_QWORD *)(v92 + 8) = v91;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v90 = v162[70];
          }
          LODWORD(v94) = 0;
          LODWORD(v162[4]) = *(_DWORD *)(v10 + 1088);
          v95 = 0;
          if ( LODWORD(v162[4]) )
          {
            v96 = *(_QWORD *)(v10 + 1176);
            do
            {
              v97 = *(_DWORD *)(v96 + 4);
              LODWORD(v94) = v95;
              v98 = v97 * ((8 * *(_DWORD *)(v96 + 8) + 199) & 0xFFFFFFF8);
              v86 = (unsigned __int64)(v95 * v97) << 6;
              v162[v95 + 5] = *(_QWORD *)(v86 + v96 + v98 + 16);
              if ( v95 )
              {
                v99 = &v162[3 * v95 + 68];
                *v99 = *(_QWORD *)(((unsigned __int64)(v95 * *(_DWORD *)(v96 + 4)) << 6)
                                 + v96
                                 + *(_DWORD *)(v96 + 4) * ((8 * *(_DWORD *)(v96 + 8) + 199) & 0xFFFFFFF8)
                                 + 24);
                VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v96, 0, v95);
                v96 = *(_QWORD *)(v10 + 1176);
                *((_WORD *)v99 + 4) = *(_WORD *)(((unsigned __int64)(v95 * *(_DWORD *)(v96 + 4)) << 6)
                                               + v96
                                               + *(_DWORD *)(v96 + 4) * ((8 * *(_DWORD *)(v96 + 8) + 199) & 0xFFFFFFF8)
                                               + 32);
                v94 = *(_QWORD *)(((unsigned __int64)(v95 * *(_DWORD *)(v96 + 4)) << 6)
                                + v96
                                + *(_DWORD *)(v96 + 4) * ((8 * *(_DWORD *)(v96 + 8) + 199) & 0xFFFFFFF8)
                                + 40);
                v99[2] = v94;
              }
              ++v95;
            }
            while ( v95 < *(_DWORD *)(v10 + 1088) );
            v90 = v162[70];
          }
          if ( v130 )
            v100 = v90 | 2;
          else
            v100 = v90 | 4;
          v11 = v131;
          LODWORD(v162[70]) = v100;
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0pqqpxqqqq_EtwWriteTransfer(
              v94,
              v86,
              v100,
              *(_QWORD *)(a2 + 16),
              v131,
              *(_DWORD *)(v10 + 1048),
              v162[3],
              v162[2],
              SBYTE4(v162[1]),
              *(_DWORD *)(v10 + 1056),
              *(_DWORD *)(v10 + 1080),
              v100);
          v101 = *(unsigned int *)(a2 + 32);
          v102 = *(_QWORD *)(a2 + 24);
          v132 = 0;
          DpSynchronizeExecution(v102, VidSchiExecuteMmIoFlipAtISR, v162, v101, &v132);
LABEL_115:
          if ( SLODWORD(v162[265]) < 0 )
          {
            if ( LODWORD(v162[265]) == -1073741811 )
            {
              if ( (*v14 & 0x10) != 0 || (v162[70] & 0x40) == 0 )
              {
                v103 = WdLogNewEntry5_WdAssertion(LODWORD(v162[265]), v25, v26);
              }
              else
              {
                v103 = WdLogNewEntry5_WdAssertion(LODWORD(v162[265]), v25, v26);
                *(_QWORD *)(v103 + 24) = *(_QWORD *)(*(_DWORD *)(*(_QWORD *)(v10 + 1176) + 4LL)
                                                   * ((8 * *(_DWORD *)(*(_QWORD *)(v10 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                                                   + *(_QWORD *)(v10 + 1176)
                                                   + 24LL);
                *(_QWORD *)(v103 + 32) = v11;
              }
              WdLogEvent5_WdAssertion(v103);
              VidSchiUpdateFlipQueueHistory(2LL, a2, v11, v8, v6);
              return 3221225485LL;
            }
            if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 2642LL) && LODWORD(v162[265]) == -1073741267 )
            {
              *(_DWORD *)(v10 + 1052) = 13;
              v105 = 1LL;
LABEL_151:
              VidSchiUpdateFlipQueueHistory(v105, a2, v11, v8, v6);
              return 259LL;
            }
LABEL_150:
            v105 = 2LL;
            goto LABEL_151;
          }
          goto LABEL_126;
        }
        v28 = -1;
        v6 = 0LL;
        v29 = *v27 & 0x3FF;
        v30 = (*v27 >> 10) & 0x3FF;
        v135 = v29;
        v15 = !_BitScanForward((unsigned int *)&v31, v29);
        v32 = 0;
        LODWORD(v137) = 0;
        v140 = v31;
        if ( !v15 )
          v28 = v31;
        v33 = v28;
        LOBYTE(v34) = -1;
        v15 = !_BitScanForward((unsigned int *)&v35, v30);
        v141 = v35;
        if ( !v15 )
          LOBYTE(v34) = v35;
        v34 = (char)v34;
        v134 = (char)v34;
        while ( v29 || v30 )
        {
          v36 = 120LL * (unsigned int)v6 + a2;
          *(_OWORD *)(v36 + 3456) = 0LL;
          *(_OWORD *)(v36 + 3472) = 0LL;
          *(_OWORD *)(v36 + 3488) = 0LL;
          *(_OWORD *)(v36 + 3504) = 0LL;
          *(_OWORD *)(v36 + 3520) = 0LL;
          *(_OWORD *)(v36 + 3536) = 0LL;
          *(_OWORD *)(v36 + 3552) = 0LL;
          if ( v33 >= v34 )
          {
            *(_DWORD *)(v36 + 3448) = v34;
            v45 = 1 << v34;
            LOBYTE(v34) = -1;
            *(_DWORD *)(v36 + 3452) = 0;
            v29 = v135;
            v30 &= ~v45;
            v15 = !_BitScanForward((unsigned int *)&v45, v30);
            v143 = v45;
            if ( !v15 )
              LOBYTE(v34) = v45;
            v6 = (unsigned int)(v6 + 1);
            v34 = (char)v34;
            v134 = (char)v34;
          }
          else
          {
            *(_DWORD *)(v36 + 3448) = v33;
            *(_DWORD *)(v36 + 3452) = 1;
            v37 = *(_QWORD *)(v10 + 1176);
            v38 = v32 * ((8 * *(_DWORD *)(v37 + 8) + 199) & 0xFFFFFFF8) + v37 + 160;
            VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v37, v32, 0);
            v39 = (int)v137;
            v40 = (unsigned __int64)(unsigned int)v137 << 6;
            *(_DWORD *)(v36 + 3456) = *(unsigned __int16 *)(*(_QWORD *)(v10 + 1176)
                                                          + *(_DWORD *)(*(_QWORD *)(v10 + 1176) + 4LL)
                                                          * ((8 * *(_DWORD *)(*(_QWORD *)(v10 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                                                          + v40
                                                          + 32);
            *(_QWORD *)(v36 + 3464) = *(_QWORD *)(*(_QWORD *)(v10 + 1176)
                                                + *(_DWORD *)(*(_QWORD *)(v10 + 1176) + 4LL)
                                                * ((8 * *(_DWORD *)(*(_QWORD *)(v10 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                                                + v40
                                                + 40);
            *(_QWORD *)(v36 + 3472) = *(_QWORD *)(*(_QWORD *)(v10 + 1176)
                                                + *(_DWORD *)(*(_QWORD *)(v10 + 1176) + 4LL)
                                                * ((8 * *(_DWORD *)(*(_QWORD *)(v10 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                                                + v40
                                                + 24);
            v41 = (_DWORD *)(a2 + 120 * ((unsigned int)v6 + 29LL));
            *v41 ^= (*(_DWORD *)(v38 + 28) ^ *v41) & 1;
            *v41 ^= (*(_DWORD *)(v38 + 28) ^ *v41) & 2;
            *(_DWORD *)(v36 + 3484) = (unsigned __int16)*(_DWORD *)v38;
            *(_DWORD *)(v36 + 3488) = (unsigned __int16)*(_DWORD *)(v38 + 4);
            *(_DWORD *)(v36 + 3492) = *(unsigned __int16 *)(v38 + 2);
            *(_DWORD *)(v36 + 3496) = *(unsigned __int16 *)(v38 + 6);
            *(_DWORD *)(v36 + 3500) = *(__int16 *)(v38 + 8);
            *(_DWORD *)(v36 + 3504) = *(__int16 *)(v38 + 12);
            *(_DWORD *)(v36 + 3508) = *(unsigned __int16 *)(v38 + 10);
            *(_DWORD *)(v36 + 3512) = *(unsigned __int16 *)(v38 + 14);
            *(_DWORD *)(v36 + 3516) = (unsigned __int16)*(_DWORD *)(v38 + 16);
            *(_DWORD *)(v36 + 3520) = (unsigned __int16)*(_DWORD *)(v38 + 20);
            *(_DWORD *)(v36 + 3524) = *(unsigned __int16 *)(v38 + 18);
            *(_DWORD *)(v36 + 3528) = *(unsigned __int16 *)(v38 + 22);
            v32 = v39 + 1;
            LODWORD(v41) = v135;
            v44 = ((*(_DWORD *)(v38 + 28) >> 3) & 3) + 1;
            LODWORD(v137) = v32;
            *(_DWORD *)(v36 + 3532) = v44;
            *(_DWORD *)(v36 + 3536) ^= (*(_DWORD *)(v36 + 3536) ^ (*(_DWORD *)(v38 + 28) >> 2)) & 1;
            *(_DWORD *)(v36 + 3540) = (*(_DWORD *)(v38 + 28) >> 5) & 3;
            *(_DWORD *)(v36 + 3544) ^= (*(_DWORD *)(v36 + 3544) ^ (*(_DWORD *)(v38 + 28) >> 7)) & 1;
            v42 = *(_DWORD *)(v36 + 3544) ^ ((unsigned __int8)*(_DWORD *)(v36 + 3544) ^ (unsigned __int8)(*(_DWORD *)(v38 + 28) >> 7)) & 2;
            *(_DWORD *)(v36 + 3544) = v42;
            *(_DWORD *)(v36 + 3544) = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)(*(_DWORD *)(v38 + 28) >> 7)) & 4;
            *(_DWORD *)(v36 + 3548) = (*(_DWORD *)(v38 + 28) >> 10) & 7;
            *(_DWORD *)(v36 + 3552) = (*(_DWORD *)(v38 + 28) >> 13) & 1;
            *(_DWORD *)(v36 + 3556) = (*(_DWORD *)(v38 + 28) >> 14) & 1;
            *(_DWORD *)(v36 + 3560) = (*(_DWORD *)(v38 + 28) >> 15) & 3;
            v43 = -1;
            v29 = ~(1 << v33) & (unsigned int)v41;
            v15 = !_BitScanForward((unsigned int *)&v44, v29);
            v135 = v29;
            v142 = v44;
            if ( !v15 )
              v43 = v44;
            v6 = (unsigned int)(v6 + 1);
            v33 = v43;
            v34 = v134;
          }
        }
        v14 = v138;
        v11 = v131;
        v8 = v147;
        LODWORD(v162[70]) = *(_DWORD *)(v10 + 1140);
        v46 = *(_DWORD *)(v10 + 1088);
        v47 = (LOBYTE(v162[67]) ^ (unsigned __int8)(8 * *v138)) & 0x38;
        v162[0] = a2;
        HIDWORD(v162[67]) = v131;
        LODWORD(v162[67]) = LODWORD(v162[67]) ^ v47 | 4;
        LODWORD(v162[265]) = -1073741823;
        LODWORD(v162[1]) = v46;
        if ( v46 )
        {
          v48 = &v162[2];
          v49 = v46;
          do
          {
            v50 = *(_QWORD *)((char *)v48++ + v10 - (_QWORD)&v162[2]);
            *(v48 - 1) = *(_QWORD *)(v50 + 64);
            --v49;
          }
          while ( v49 );
        }
        v51 = *(_QWORD *)(a2 + 16);
        v129 = 0;
        if ( *(_BYTE *)(v51 + 2610) )
        {
          v52 = (unsigned int)v6;
          memset((void *)(a2 + 4648), 0, 112LL * (unsigned int)v6);
          if ( (_DWORD)v6 )
          {
            v53 = a2 + 4652;
            v54 = a2 + 3452;
            do
            {
              *(_DWORD *)(v53 - 4) = *(_DWORD *)(v54 - 4);
              v55 = *(_DWORD *)v54;
              *(_DWORD *)v53 = *(_DWORD *)v54;
              if ( v55 )
              {
                *(_DWORD *)(v53 + 4) = *(_DWORD *)(v54 + 4);
                *(_QWORD *)(v53 + 12) = *(_QWORD *)(v54 + 12);
                *(_QWORD *)(v53 + 20) = *(_QWORD *)(v54 + 20);
                *(_DWORD *)(v53 + 28) = *(_DWORD *)(v54 + 28);
                *(_OWORD *)(v53 + 32) = *(_OWORD *)(v54 + 32);
                *(_OWORD *)(v53 + 48) = *(_OWORD *)(v54 + 48);
                *(_DWORD *)(v53 + 64) = *(_DWORD *)(v54 + 80);
                *(_DWORD *)(v53 + 68) = *(_DWORD *)(v54 + 84);
                *(_DWORD *)(v53 + 72) = 0;
                *(_QWORD *)(v53 + 76) = 0LL;
                *(_DWORD *)(v53 + 84) = *(_DWORD *)(v54 + 88);
                *(_DWORD *)(v53 + 88) = *(_DWORD *)(v54 + 92);
                *(_DWORD *)(v53 + 92) = *(_DWORD *)(v54 + 96);
                *(_DWORD *)(v53 + 96) = *(_DWORD *)(v54 + 100);
                *(_DWORD *)(v53 + 100) = *(_DWORD *)(v54 + 104);
                *(_DWORD *)(v53 + 104) = *(_DWORD *)(v54 + 108);
              }
              v54 += 120LL;
              v53 += 112LL;
              --v52;
            }
            while ( v52 );
            v11 = v131;
          }
          v56 = a2 + 4648;
        }
        else if ( *(_BYTE *)(v51 + 2611) )
        {
          v57 = (unsigned int)v6;
          memset((void *)(a2 + 4648), 0, (unsigned __int64)(unsigned int)v6 << 7);
          if ( (_DWORD)v6 )
          {
            v58 = a2 + 4652;
            v59 = a2 + 3452;
            do
            {
              *(_DWORD *)(v58 - 4) = *(_DWORD *)(v59 - 4);
              v60 = *(_DWORD *)v59;
              *(_DWORD *)v58 = *(_DWORD *)v59;
              if ( v60 )
              {
                *(_DWORD *)(v58 + 4) = *(_DWORD *)(v59 + 4);
                *(_QWORD *)(v58 + 12) = *(_QWORD *)(v59 + 12);
                *(_QWORD *)(v58 + 20) = *(_QWORD *)(v59 + 20);
                *(_DWORD *)(v58 + 28) = *(_DWORD *)(v59 + 28);
                *(_OWORD *)(v58 + 32) = *(_OWORD *)(v59 + 32);
                *(_OWORD *)(v58 + 48) = *(_OWORD *)(v59 + 48);
                *(_OWORD *)(v58 + 64) = *(_OWORD *)(v59 + 64);
                *(_DWORD *)(v58 + 80) = *(_DWORD *)(v59 + 80);
                *(_DWORD *)(v58 + 84) = *(_DWORD *)(v59 + 84);
                *(_DWORD *)(v58 + 88) = 0;
                *(_QWORD *)(v58 + 92) = 0LL;
                *(_DWORD *)(v58 + 100) = *(_DWORD *)(v59 + 88);
                *(_DWORD *)(v58 + 104) = *(_DWORD *)(v59 + 92);
                *(_DWORD *)(v58 + 108) = *(_DWORD *)(v59 + 96);
                *(_DWORD *)(v58 + 112) = *(_DWORD *)(v59 + 100);
                *(_DWORD *)(v58 + 116) = *(_DWORD *)(v59 + 104);
                *(_DWORD *)(v58 + 120) = *(_DWORD *)(v59 + 108);
              }
              v59 += 120LL;
              v58 += 128LL;
              --v57;
            }
            while ( v57 );
            v8 = v147;
          }
          v56 = a2 + 4648;
        }
        else
        {
          if ( *(_BYTE *)(v51 + 2612) && *(_QWORD *)(v51 + 904) )
          {
            v61 = (unsigned int)v6;
            memset((void *)(a2 + 4648), 0, (unsigned __int64)(unsigned int)v6 << 7);
            v62 = 0;
            if ( (_DWORD)v6 )
            {
              v63 = a2 + 4652;
              v64 = a2 + 3452;
              do
              {
                *(_DWORD *)(v63 - 4) = *(_DWORD *)(v64 - 4);
                v65 = *(_DWORD *)v64;
                *(_DWORD *)v63 = *(_DWORD *)v64;
                if ( v65 )
                {
                  *(_DWORD *)(v63 + 4) = *(_DWORD *)(v64 + 4);
                  *(_QWORD *)(v63 + 12) = *(_QWORD *)(v64 + 12);
                  *(_QWORD *)(v63 + 20) = *(_QWORD *)(v64 + 20);
                  *(_DWORD *)(v63 + 28) = *(_DWORD *)(v64 + 28);
                  *(_OWORD *)(v63 + 32) = *(_OWORD *)(v64 + 32);
                  *(_OWORD *)(v63 + 48) = *(_OWORD *)(v64 + 48);
                  *(_OWORD *)(v63 + 64) = *(_OWORD *)(v64 + 64);
                  *(_DWORD *)(v63 + 80) = *(_DWORD *)(v64 + 80);
                  *(_DWORD *)(v63 + 84) = *(_DWORD *)(v64 + 84);
                  *(_DWORD *)(v63 + 88) = *(_DWORD *)(v64 + 88);
                  *(_DWORD *)(v63 + 96) = *(_DWORD *)(v64 + 96);
                  *(_DWORD *)(v63 + 100) = *(_DWORD *)(v64 + 100);
                  *(_DWORD *)(v63 + 104) = *(_DWORD *)(v64 + 104);
                  *(_DWORD *)(v63 + 108) = *(_DWORD *)(v64 + 108);
                  *(_DWORD *)(v63 + 112) = *(_DWORD *)(v64 + 112);
                  *(_DWORD *)(v63 + 116) = 0;
                  v66 = *(_QWORD *)(v10 + 1176);
                  v67 = v62 * ((8 * *(_DWORD *)(v66 + 8) + 199) & 0xFFFFFFF8);
                  ++v62;
                  *(_DWORD *)(v63 + 92) = *(_DWORD *)(v67 + v66 + 184);
                }
                v64 += 120LL;
                v63 += 128LL;
                --v61;
              }
              while ( v61 );
              v14 = v138;
            }
            v56 = a2 + 4648;
            v68 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
            goto LABEL_75;
          }
          v56 = a2 + 3448;
        }
        v68 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_75:
        v69 = *(unsigned int *)(a2 + 32);
        v70 = *(_QWORD *)(a2 + 24);
        v162[69] = v56;
        LODWORD(v162[68]) = v6;
        DpSynchronizeExecution(v70, v68, v162, v69, &v129);
        if ( bTracingEnabled )
        {
          v73 = 0;
          if ( (_DWORD)v6 )
          {
            v74 = v131;
            v75 = (_DWORD *)(a2 + 3520);
            do
            {
              v71 = (unsigned int)*(v75 - 17);
              v76 = 0;
              LOBYTE(v77) = 0;
              if ( (_DWORD)v71 )
              {
                v78 = *(_QWORD *)(v10 + 1176);
                v79 = v73 * ((8 * *(_DWORD *)(v78 + 8) + 199) & 0xFFFFFFF8);
                ++v73;
                v76 = *(_DWORD *)(v79 + v78 + 184);
                v77 = *(_DWORD *)(v79 + v78 + 192);
              }
              if ( (*v14 & 0x10) != 0 )
                v80 = ((unsigned __int16)**(_DWORD **)(v10 + 1176) | (unsigned __int16)(**(_DWORD **)(v10 + 1176) >> 10)) & 0x3FF;
              else
                v80 = (1 << *(_DWORD *)(a2 + 144)) - 1;
              v15 = !_BitScanForward(&v80, v80);
              v72 = 0xFFFFFFFFLL;
              v144 = v80;
              if ( !v15 )
                v72 = v80;
              HIDWORD(v138) = *(_DWORD *)(v10 + 1048);
              LODWORD(v138) = (char)v72;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
                  v72,
                  v71,
                  v76,
                  *(_QWORD *)(a2 + 16),
                  v74,
                  *(v75 - 18),
                  (char)v138,
                  *((_QWORD *)v75 - 6),
                  *((_QWORD *)v75 - 7),
                  *(v75 - 16),
                  *(_DWORD *)(v10 + 1056),
                  *(_DWORD *)(v10 + 1080),
                  *(v75 - 9),
                  *(v75 - 7),
                  *(v75 - 8),
                  *(v75 - 6),
                  *(v75 - 5),
                  *(v75 - 3),
                  *(v75 - 4),
                  *(v75 - 2),
                  *(v75 - 1),
                  v75[1],
                  *v75,
                  v75[2],
                  v76,
                  5,
                  v71,
                  v77,
                  0);
              v75 += 30;
              --v6;
            }
            while ( v6 );
            v8 = v147;
          }
          v11 = v131;
        }
        v27 = (_DWORD *)SLODWORD(v162[265]);
        if ( !LODWORD(v162[265]) )
        {
          LODWORD(v6) = v145;
LABEL_126:
          v17 = v136;
          goto LABEL_129;
        }
        v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v72, v71);
        v81[6] = v162;
        v81[3] = 281LL;
        v81[4] = 11LL;
        v81[5] = v27;
        v81[7] = *(_QWORD *)(a2 + 16);
        WdLogEvent5_WdCriticalError(v81);
        __debugbreak();
        goto LABEL_92;
      }
      v17 = v136;
    }
  }
  *v137 = 1;
LABEL_129:
  LOBYTE(v106) = *v14;
  if ( (v106 & 0x20) != 0 )
  {
    v107 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v10 + 1152);
    if ( v107 )
    {
      v108 = v10 + 1304;
      if ( !*(_QWORD *)(v10 + 1304) )
        v108 = 0LL;
      VidSchiPropagatePresentHistoryToken(
        (struct _VIDSCH_GLOBAL *)a2,
        *(PKSPIN_LOCK *)(v10 + 1144),
        v107,
        1,
        (*v14 & 0x40) != 0,
        0,
        0,
        *(_QWORD *)(v10 + 1160),
        *(_QWORD *)(v10 + 1176),
        0LL,
        v108,
        1);
      v106 = *(_DWORD *)(v10 + 1136);
    }
  }
  *(_DWORD *)(v10 + 1052) = v17;
  if ( v17 == 11 )
  {
    v109 = 1344LL * *(unsigned int *)(v8 + 44);
    v110 = 0LL;
    LODWORD(v137) = 0;
    v134 = 0;
    v111 = *(_DWORD *)(v109 + v8 + 1140);
    if ( v111 == 5 || v111 == 15 )
    {
      v146 = 0;
      v155 = ((_BYTE)v6 - 1) & 0x3F;
      v157 = HIDWORD(v162[265]);
      v158 = v162[266];
      v133[0] = 0;
      v151[1] = 0LL;
      v153 = 0;
      v156 = 0;
      v159 = 0LL;
      v151[0] = a2;
      v152 = v11;
      v154 = v8;
      VidSchiProcessVsyncCompletedFlipEntry(v148, v151, (__int64)v160, &v146, &v134, v133);
      LODWORD(v137) = v134;
    }
    v112 = v148;
    v113 = v148;
    v114 = v139;
    *(_QWORD *)(v10 + 1112) = v162[266];
    *(_QWORD *)(v10 + 1128) = HIDWORD(v162[265]);
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v113, v110, v114, v10);
    VidSchiReferenceDisplayingAllocationsForThisEntry(v112, a2, v139, v10);
    v115 = *(_QWORD *)(v10 + 1040);
    v116 = VidSchiCompleteFlipEntry((__int64)v112, a2, v11, v8, v6, v6, 0, 0LL);
    v117 = v116 + (_DWORD)v137;
    v118 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v115 + 40) + 24LL)
                                 + 8LL * *(unsigned int *)(*(_QWORD *)(v115 + 32) + 4LL))
                     + 8LL * v11
                     + 88);
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(a2 + 8LL * v11 + 6352) + 8LL),
      -(v116 + (_DWORD)v137));
    v119 = *(_DWORD **)(a2 + 8LL * v11 + 6352);
    *v119 += v117;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v118 + 8), -v117);
    *(_DWORD *)v118 += v117;
  }
  else
  {
    if ( (v106 & 0x10) != 0 )
      v120 = ((unsigned __int16)**(_DWORD **)(v10 + 1176) | (unsigned __int16)(**(_DWORD **)(v10 + 1176) >> 10)) & 0x3FF;
    else
      v120 = (1 << *(_DWORD *)(a2 + 144)) - 1;
    *((_DWORD *)v139 + 588) |= v120;
  }
  *(_QWORD *)(v10 + 1104) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(v8 + 80) = *(_DWORD *)(v10 + 1072);
  v121 = 1344LL * *(unsigned int *)(v8 + 44);
  *(_DWORD *)(v8 + 48) = v6;
  v122 = *(_DWORD *)(v121 + v8 + 1140);
  if ( v122 != 5 && v122 != 15 )
    *(_DWORD *)(v8 + 44) = v6;
  *(_DWORD *)(v8 + 40) = ((_BYTE)v6 + 1) & 0x3F;
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(a2 + 8) + 648LL));
  v123 = (_DWORD *)v150;
  v124 = *v149;
  if ( (*(_DWORD *)(v150 + 1224) & 0x10) != 0 )
    v125 = ((unsigned __int16)**(_DWORD **)(v150 + 1264) | (unsigned __int16)(**(_DWORD **)(v150 + 1264) >> 10)) & 0x3FF;
  else
    v125 = (1 << *(_DWORD *)(a2 + 144)) - 1;
  v126 = 9LL * *(unsigned int *)(v124 + 128);
  v127 = *(_QWORD *)(v124 + 120);
  *(_OWORD *)(v127 + 8 * v126) = 0LL;
  *(_OWORD *)(v127 + 8 * v126 + 16) = 0LL;
  v128 = v127 + 8 * v126;
  *(_OWORD *)(v128 + 32) = 0LL;
  *(_OWORD *)(v128 + 48) = 0LL;
  *(_QWORD *)(v128 + 64) = 0LL;
  *(_DWORD *)(v124 + 128) = (*(_DWORD *)(v124 + 128) + 1) & (*(_DWORD *)(v124 + 112) - 1);
  *(_DWORD *)v128 = 1;
  *(_DWORD *)(v128 + 16) = v125;
  *(_BYTE *)(v128 + 20) = *(_BYTE *)(v8 + 56);
  *(_DWORD *)(v128 + 24) = v6;
  *(LARGE_INTEGER *)(v128 + 8) = KeQueryPerformanceCounter(0LL);
  *(_BYTE *)(v128 + 32) = (v123[306] & 0x20) != 0;
  *(_DWORD *)(v128 + 36) = v123[285];
  *(_DWORD *)(v128 + 28) = v123[286];
  *(_DWORD *)(v128 + 44) = *(_DWORD *)(v124 + 2356);
  *(_DWORD *)(v128 + 40) = *(_DWORD *)(v124 + 2352);
  *(_DWORD *)(v128 + 48) = *(_DWORD *)(v8 + 32);
  *(_DWORD *)(v128 + 52) = *(_DWORD *)(v8 + 36);
  *(_DWORD *)(v128 + 56) = *(_DWORD *)(v8 + 40);
  *(_DWORD *)(v128 + 60) = *(_DWORD *)(v8 + 44);
  *(_DWORD *)(v128 + 64) = *(_DWORD *)(v8 + 48);
  *(_DWORD *)(v128 + 68) = *(_DWORD *)(v8 + 52);
  return 0LL;
}
