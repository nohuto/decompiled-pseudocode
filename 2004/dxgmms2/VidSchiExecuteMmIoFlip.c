/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C000DF80
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002A30 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000CCC0 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000F8D4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002C1F0 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0038784 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00028DC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C0003910 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003C20 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0004880 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C000E4B8 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000FDB0 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0013730 (VidSchiPropagatePresentHistoryToken.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C002A5C8 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C002AC4C (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     McTemplateK0pqqpxqqqq_EtwWriteTransfer @ 0x1C002DEDC (McTemplateK0pqqpxqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x1C002E21C (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C003218C (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 */

__int64 __fastcall VidSchiExecuteMmIoFlip(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v8; // r13
  __int64 v9; // rsi
  int *v10; // r12
  __int64 v11; // r15
  int v12; // edi
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  char v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // r8d
  unsigned int v25; // r8d
  __int64 v26; // rcx
  unsigned int v27; // r15d
  __int64 v28; // r9
  int v29; // edx
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned int v36; // edi
  int v37; // eax
  int v38; // eax
  unsigned int v39; // r15d
  __int64 v40; // r12
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rsi
  int v44; // r14d
  LARGE_INTEGER *v45; // rdi
  unsigned int v47; // edx
  int v48; // r8d
  int v49; // edx
  unsigned int v50; // r8d
  char v51; // cl
  __int16 v52; // r9
  unsigned int v53; // r9d
  unsigned int v54; // r8d
  bool v55; // zf
  int v56; // eax
  unsigned int v57; // r15d
  int v58; // eax
  unsigned int v59; // ebx
  char v60; // cl
  unsigned int v61; // r13d
  int v62; // ecx
  unsigned int v63; // eax
  _QWORD *v64; // rdx
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // r8d
  __int64 v69; // rcx
  __int64 v70; // r9
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned int v76; // edx
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // r8
  unsigned int v80; // r10d
  unsigned __int64 v81; // rdx
  _DWORD *v82; // rdx
  unsigned int v83; // r9d
  int v84; // ecx
  char v85; // cl
  int v86; // eax
  int v87; // r8d
  char v88; // cl
  int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // r9
  __int64 v92; // rdx
  int v93; // eax
  unsigned int v94; // ecx
  int v95; // r10d
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // r8
  int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // rax
  unsigned __int8 (__fastcall *v102)(void *); // rdx
  __int64 v103; // r9
  __int64 v104; // rcx
  __int64 v105; // rcx
  unsigned int v106; // r8d
  char v107; // r15
  _DWORD *v108; // rdi
  int v109; // r9d
  int v110; // r10d
  int v111; // r11d
  __int64 v112; // rcx
  __int64 v113; // rax
  unsigned int v114; // eax
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  struct _SLIST_ENTRY *v117; // rcx
  _QWORD *v118; // rdi
  __int64 v119; // rax
  __int64 v120; // r12
  struct _D3DKMT_PRESENTHISTORYTOKEN *v121; // r8
  __int64 v122; // rax
  __int64 v123; // rcx
  int v124; // eax
  struct HwQueueStagingList *v125; // rdi
  __int64 v126; // rdi
  int v127; // eax
  int v128; // r9d
  __int64 v129; // r8
  char v130[4]; // [rsp+F0h] [rbp-80h] BYREF
  unsigned int v131; // [rsp+F4h] [rbp-7Ch]
  char v132; // [rsp+F8h] [rbp-78h]
  unsigned int v133; // [rsp+FCh] [rbp-74h]
  unsigned int v134; // [rsp+100h] [rbp-70h] BYREF
  char v135; // [rsp+104h] [rbp-6Ch] BYREF
  char v136[3]; // [rsp+105h] [rbp-6Bh] BYREF
  unsigned int v137; // [rsp+108h] [rbp-68h]
  __int64 v138; // [rsp+110h] [rbp-60h]
  __int64 v139; // [rsp+118h] [rbp-58h]
  _DWORD v140[6]; // [rsp+120h] [rbp-50h] BYREF
  int v141; // [rsp+138h] [rbp-38h] BYREF
  __int64 v142; // [rsp+140h] [rbp-30h]
  struct HwQueueStagingList *v143; // [rsp+148h] [rbp-28h]
  __int64 v144; // [rsp+150h] [rbp-20h]
  __int64 v145; // [rsp+158h] [rbp-18h]
  __int64 v146; // [rsp+160h] [rbp-10h]
  __int64 v147[2]; // [rsp+170h] [rbp+0h] BYREF
  unsigned int v148; // [rsp+180h] [rbp+10h]
  int v149; // [rsp+184h] [rbp+14h]
  __int64 v150; // [rsp+188h] [rbp+18h]
  int v151; // [rsp+190h] [rbp+20h]
  int v152; // [rsp+194h] [rbp+24h]
  __int64 v153; // [rsp+198h] [rbp+28h]
  __int64 v154; // [rsp+1A0h] [rbp+30h]
  __int64 v155; // [rsp+1A8h] [rbp+38h]
  char v156[8]; // [rsp+1B0h] [rbp+40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1B8h] [rbp+48h] BYREF
  _QWORD v158[268]; // [rsp+1D0h] [rbp+60h] BYREF

  v6 = a4;
  v143 = a1;
  v8 = a4 + 1344LL * a5;
  v139 = a6;
  v146 = a4;
  v9 = v8 + 88;
  v133 = a3;
  v10 = (int *)(v8 + 1224);
  v137 = a5;
  v11 = *(_QWORD *)(a2 + 8LL * a3 + 3104);
  v144 = a3;
  v142 = v11;
  v145 = v8;
  if ( *(_DWORD *)(v11 + 4) == 3 || (*v10 & 0x100) != 0 )
  {
    v132 = 1;
    v12 = 11;
  }
  else
  {
    v132 = 0;
    v12 = 5;
  }
  v140[0] = v12;
  memset(v158, 0, 0x858uLL);
  if ( !*(_BYTE *)(a2 + 148) )
    goto LABEL_5;
  v47 = *(_DWORD *)(v6 + 48);
  v48 = ((unsigned __int8)*(_DWORD *)(v6 + 44) - 1) & 0x3F;
  if ( v47 != v48 )
  {
    while ( *(_DWORD *)(1344LL * v47 + v6 + 1140) != 14 )
    {
      v47 = ((_BYTE)v47 - 1) & 0x3F;
      if ( v47 == v48 )
        goto LABEL_46;
    }
    goto LABEL_144;
  }
LABEL_46:
  if ( (*(_DWORD *)(v8 + 1224) & 0x10) != 0 )
    v49 = ((unsigned __int16)**(_DWORD **)(v8 + 1264) | (unsigned __int16)(**(_DWORD **)(v8 + 1264) >> 10)) & 0x3FF;
  else
    v49 = (1 << *(_DWORD *)(a2 + 144)) - 1;
  if ( (v49 & *(_DWORD *)(v11 + 2356)) != 0 )
  {
LABEL_144:
    VidSchiUpdateFlipQueueHistory(2LL, a2, v133, v6, v137);
    return 259LL;
  }
  if ( *(_DWORD *)(a2 + 152) <= 1u || *(_DWORD *)(v11 + 4) == 3 || (*(_DWORD *)(v8 + 1224) & 0x180) != 0x80 )
  {
LABEL_5:
    if ( (*v10 & 0x10) != 0 )
      v13 = ((unsigned __int16)**(_DWORD **)(v8 + 1264) | (unsigned __int16)(**(_DWORD **)(v8 + 1264) >> 10)) & 0x3FF;
    else
      v13 = (1 << *(_DWORD *)(a2 + 144)) - 1;
    if ( (v13 & *(_DWORD *)(v11 + 2352)) != 0 )
      goto LABEL_144;
  }
  if ( *(_DWORD *)(a2 + 2916) || (v14 = *(_QWORD *)(v8 + 1128), *(_BYTE *)(v14 + 204)) )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v14 + 200), 0, 0) )
    {
      if ( *(_BYTE *)(a2 + 148) )
      {
        v36 = v137;
        VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
          (struct _VIDSCH_GLOBAL *)a2,
          v133,
          (struct VIDSCH_FLIP_QUEUE *)v6,
          (struct _VIDSCH_CALL_EXECUTE_FLIP *)v158,
          (enum _VIDSCH_FLIP_STATUS *)v140,
          v137);
        goto LABEL_29;
      }
      v16 = *(_QWORD *)(v8 + 1264);
      if ( (*v10 & 0x10) == 0 )
      {
        memset((char *)&v158[4] + 4, 0, 0x210uLL);
        memset(&v158[71], 0, 0x610uLL);
        v17 = v133;
        *(_QWORD *)((char *)&v158[265] + 4) = 0LL;
        HIDWORD(v158[266]) = 0;
        v158[0] = a2;
        LODWORD(v158[1]) = v133;
        v18 = *(_QWORD *)(*(_DWORD *)(v16 + 4) * ((8 * *(_DWORD *)(v16 + 8) + 199) & 0xFFFFFFF8) + v16 + 48);
        *(_QWORD *)(*(_DWORD *)(v16 + 4) * ((8 * *(_DWORD *)(v16 + 8) + 199) & 0xFFFFFFF8) + v16 + 40) = *(_QWORD *)(*(_QWORD *)(v18 + 96) + 32LL);
        v19 = *(_QWORD *)(v18 + 96);
        *(_WORD *)(*(_DWORD *)(v16 + 4) * ((8 * *(_DWORD *)(v16 + 8) + 199) & 0xFFFFFFF8) + v16 + 32) = *(_WORD *)(v19 + 6);
        v20 = *(unsigned int *)(*(_QWORD *)(v18 + 96) + 12LL);
        if ( (_DWORD)v20 )
        {
          v21 = *(_QWORD *)(v8 + 1264);
          HIDWORD(v158[1]) = *(unsigned __int16 *)(*(_DWORD *)(v21 + 4)
                                                 * ((8 * *(_DWORD *)(v21 + 8) + 199) & 0xFFFFFFF8)
                                                 + v21
                                                 + 32);
          v158[2] = *(_QWORD *)(*(_DWORD *)(v21 + 4) * ((8 * *(_DWORD *)(v21 + 8) + 199) & 0xFFFFFFF8) + v21 + 40);
          v22 = *(_DWORD *)(v8 + 1228);
          v158[3] = *(_QWORD *)(*(_DWORD *)(v21 + 4) * ((8 * *(_DWORD *)(v21 + 8) + 199) & 0xFFFFFFF8) + v21 + 24);
          v23 = *v10;
          v24 = *v10 & 0xF;
          LODWORD(v158[265]) = -1073741823;
          v25 = v158[70] & 0xFFFFFF07 | (4 * (v23 & 0x20 | (2 * v24)));
          v158[70] = __PAIR64__(v22, v25);
          v11 = *(_QWORD *)(v21 + 200);
          if ( v11 )
          {
            LODWORD(v158[263]) = *(_DWORD *)(v11 + 8);
            v158[264] = v11 + 16;
          }
          v16 = *(_QWORD *)(v8 + 1248);
          if ( !v16 )
            goto LABEL_17;
          goto LABEL_115;
        }
LABEL_114:
        v116 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
        v116[5] = 0LL;
        v116[6] = 0LL;
        v116[7] = 0LL;
        v116[3] = 281LL;
        v116[4] = 0x4000LL;
        WdLogEvent5_WdCriticalError(v116);
        __debugbreak();
LABEL_115:
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 16), &LockHandle);
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
        v117 = *(struct _SLIST_ENTRY **)(v16 + 8);
        if ( v117 )
          CRefCountedBuffer::RefCountedBufferRelease(v117);
        *(_QWORD *)(v16 + 8) = v11;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v25 = v158[70];
        v17 = v133;
LABEL_17:
        LODWORD(v26) = 0;
        LODWORD(v158[4]) = *(_DWORD *)(v9 + 1088);
        v27 = 0;
        if ( LODWORD(v158[4]) )
        {
          v28 = *(_QWORD *)(v9 + 1176);
          do
          {
            v29 = *(_DWORD *)(v28 + 4);
            LODWORD(v26) = v27;
            v30 = v29 * ((8 * *(_DWORD *)(v28 + 8) + 199) & 0xFFFFFFF8);
            v21 = (unsigned __int64)(v27 * v29) << 6;
            v158[v27 + 5] = *(_QWORD *)(v21 + v28 + v30 + 16);
            if ( v27 )
            {
              v118 = &v158[3 * v27 + 68];
              *v118 = *(_QWORD *)(((unsigned __int64)(v27 * *(_DWORD *)(v28 + 4)) << 6)
                                + v28
                                + *(_DWORD *)(v28 + 4) * ((8 * *(_DWORD *)(v28 + 8) + 199) & 0xFFFFFFF8)
                                + 24);
              VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v28, 0, v27);
              v28 = *(_QWORD *)(v9 + 1176);
              *((_WORD *)v118 + 4) = *(_WORD *)(((unsigned __int64)(v27 * *(_DWORD *)(v28 + 4)) << 6)
                                              + v28
                                              + *(_DWORD *)(v28 + 4) * ((8 * *(_DWORD *)(v28 + 8) + 199) & 0xFFFFFFF8)
                                              + 32);
              v26 = *(_QWORD *)(((unsigned __int64)(v27 * *(_DWORD *)(v28 + 4)) << 6)
                              + v28
                              + *(_DWORD *)(v28 + 4) * ((8 * *(_DWORD *)(v28 + 8) + 199) & 0xFFFFFFF8)
                              + 40);
              v118[2] = v26;
            }
            ++v27;
          }
          while ( v27 < *(_DWORD *)(v9 + 1088) );
          v25 = v158[70];
          v17 = v133;
        }
        if ( v132 )
          v31 = v25 | 2;
        else
          v31 = v25 | 4;
        LODWORD(v158[70]) = v31;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqqpxqqqq_EtwWriteTransfer(
            v26,
            v21,
            v31,
            *(_QWORD *)(a2 + 16),
            v17,
            *(_DWORD *)(v9 + 1048),
            v158[3],
            v158[2],
            SBYTE4(v158[1]),
            *(_DWORD *)(v9 + 1056),
            *(_DWORD *)(v9 + 1080),
            v31);
        v32 = *(unsigned int *)(a2 + 32);
        v33 = *(_QWORD *)(a2 + 24);
        v135 = 0;
        DpSynchronizeExecution(v33, VidSchiExecuteMmIoFlipAtISR, v158, v32, &v135);
        v11 = v142;
        v36 = v137;
LABEL_29:
        if ( SLODWORD(v158[265]) >= 0 )
        {
          v15 = 0LL;
LABEL_31:
          v12 = v140[0];
          goto LABEL_32;
        }
        if ( LODWORD(v158[265]) == -1073741811 )
        {
          if ( (*v10 & 0x10) != 0 || (v158[70] & 0x40) == 0 )
          {
            v119 = WdLogNewEntry5_WdAssertion(LODWORD(v158[265]), v34, v35);
          }
          else
          {
            v119 = WdLogNewEntry5_WdAssertion(LODWORD(v158[265]), v34, v35);
            v120 = v144;
            *(_QWORD *)(v119 + 24) = *(_QWORD *)(*(_DWORD *)(*(_QWORD *)(v9 + 1176) + 4LL)
                                               * ((8 * *(_DWORD *)(*(_QWORD *)(v9 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                                               + *(_QWORD *)(v9 + 1176)
                                               + 24LL);
            *(_QWORD *)(v119 + 32) = v120;
          }
          WdLogEvent5_WdAssertion(v119);
          VidSchiUpdateFlipQueueHistory(2LL, a2, v133, v6, v36);
          return 3221225485LL;
        }
        if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 2618LL) && LODWORD(v158[265]) == -1073741267 )
        {
          *(_DWORD *)(v9 + 1052) = 13;
          VidSchiUpdateFlipQueueHistory(1LL, a2, v133, v6, v36);
          return 259LL;
        }
        goto LABEL_144;
      }
      v50 = *(_DWORD *)v16;
      v51 = -1;
      v52 = *(_DWORD *)v16;
      v131 = 0;
      v53 = v52 & 0x3FF;
      v54 = (v50 >> 10) & 0x3FF;
      v134 = v53;
      v55 = !_BitScanForward((unsigned int *)&v56, v53);
      LODWORD(v138) = v54;
      v57 = 0;
      v140[1] = v56;
      if ( !v55 )
        v51 = v56;
      v55 = !_BitScanForward((unsigned int *)&v58, v54);
      v59 = v51;
      v60 = -1;
      v140[2] = v58;
      if ( !v55 )
        v60 = v58;
      v61 = v60;
      while ( v53 || v54 )
      {
        v74 = 120LL * v57;
        v139 = v74 + a2;
        memset((void *)(v74 + a2 + 3456), 0, 0x70uLL);
        v75 = v74 + a2;
        if ( v59 >= v61 )
        {
          v87 = v138;
          v53 = v134;
          *(_DWORD *)(v75 + 3448) = v61;
          *(_DWORD *)(v75 + 3452) = 0;
          v88 = -1;
          v54 = ~(1 << v61) & v87;
          v55 = !_BitScanForward((unsigned int *)&v75, v54);
          LODWORD(v138) = v54;
          v140[4] = v89;
          if ( !v55 )
            v88 = v75;
          v61 = v88;
        }
        else
        {
          v76 = v131;
          *(_DWORD *)(v75 + 3448) = v59;
          *(_DWORD *)(v75 + 3452) = 1;
          v77 = *(_QWORD *)(v9 + 1176);
          v78 = v76 * ((8 * *(_DWORD *)(v77 + 8) + 199) & 0xFFFFFFF8) + v77 + 160;
          VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v77, v76, 0);
          v79 = v139;
          v80 = v131;
          v81 = (unsigned __int64)v131 << 6;
          *(_DWORD *)(v139 + 3456) = *(unsigned __int16 *)(*(_QWORD *)(v9 + 1176)
                                                         + *(_DWORD *)(*(_QWORD *)(v9 + 1176) + 4LL)
                                                         * ((8 * *(_DWORD *)(*(_QWORD *)(v9 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                                                         + v81
                                                         + 32);
          *(_QWORD *)(v79 + 3464) = *(_QWORD *)(*(_QWORD *)(v9 + 1176)
                                              + *(_DWORD *)(*(_QWORD *)(v9 + 1176) + 4LL)
                                              * ((8 * *(_DWORD *)(*(_QWORD *)(v9 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                                              + v81
                                              + 40);
          *(_QWORD *)(v79 + 3472) = *(_QWORD *)(*(_QWORD *)(v9 + 1176)
                                              + *(_DWORD *)(*(_QWORD *)(v9 + 1176) + 4LL)
                                              * ((8 * *(_DWORD *)(*(_QWORD *)(v9 + 1176) + 8LL) + 199) & 0xFFFFFFF8)
                                              + v81
                                              + 24);
          v82 = (_DWORD *)(a2 + 120 * (v57 + 29LL));
          *v82 ^= (*v82 ^ *(_DWORD *)(v78 + 28)) & 1;
          *v82 ^= (*(_DWORD *)(v78 + 28) ^ *v82) & 2;
          *(_DWORD *)(v79 + 3484) = (unsigned __int16)*(_DWORD *)v78;
          *(_DWORD *)(v79 + 3488) = (unsigned __int16)*(_DWORD *)(v78 + 4);
          *(_DWORD *)(v79 + 3492) = *(unsigned __int16 *)(v78 + 2);
          *(_DWORD *)(v79 + 3496) = *(unsigned __int16 *)(v78 + 6);
          *(_DWORD *)(v79 + 3500) = *(__int16 *)(v78 + 8);
          *(_DWORD *)(v79 + 3504) = *(__int16 *)(v78 + 12);
          *(_DWORD *)(v79 + 3508) = *(unsigned __int16 *)(v78 + 10);
          *(_DWORD *)(v79 + 3512) = *(unsigned __int16 *)(v78 + 14);
          *(_DWORD *)(v79 + 3516) = (unsigned __int16)*(_DWORD *)(v78 + 16);
          *(_DWORD *)(v79 + 3520) = (unsigned __int16)*(_DWORD *)(v78 + 20);
          *(_DWORD *)(v79 + 3524) = *(unsigned __int16 *)(v78 + 18);
          *(_DWORD *)(v79 + 3528) = *(unsigned __int16 *)(v78 + 22);
          v83 = v134;
          v86 = ((*(_DWORD *)(v78 + 28) >> 3) & 3) + 1;
          v131 = v80 + 1;
          *(_DWORD *)(v79 + 3532) = v86;
          *(_DWORD *)(v79 + 3536) ^= (*(_DWORD *)(v79 + 3536) ^ (*(_DWORD *)(v78 + 28) >> 2)) & 1;
          *(_DWORD *)(v79 + 3540) = (*(_DWORD *)(v78 + 28) >> 5) & 3;
          *(_DWORD *)(v79 + 3544) ^= (*(_DWORD *)(v79 + 3544) ^ (*(_DWORD *)(v78 + 28) >> 7)) & 1;
          v84 = *(_DWORD *)(v79 + 3544) ^ ((unsigned __int8)*(_DWORD *)(v79 + 3544) ^ (unsigned __int8)(*(_DWORD *)(v78 + 28) >> 7)) & 2;
          *(_DWORD *)(v79 + 3544) = v84;
          *(_DWORD *)(v79 + 3544) = v84 ^ ((unsigned __int8)v84 ^ (unsigned __int8)(*(_DWORD *)(v78 + 28) >> 7)) & 4;
          *(_DWORD *)(v79 + 3548) = (*(_DWORD *)(v78 + 28) >> 10) & 7;
          *(_DWORD *)(v79 + 3552) = (*(_DWORD *)(v78 + 28) >> 13) & 1;
          *(_DWORD *)(v79 + 3556) = (*(_DWORD *)(v78 + 28) >> 14) & 1;
          *(_DWORD *)(v79 + 3560) = (*(_DWORD *)(v78 + 28) >> 15) & 3;
          v54 = v138;
          v85 = -1;
          v53 = ~(1 << v59) & v83;
          v55 = !_BitScanForward((unsigned int *)&v86, v53);
          v134 = v53;
          v140[3] = v86;
          if ( !v55 )
            v85 = v86;
          v59 = v85;
        }
        ++v57;
      }
      v6 = v146;
      v8 = v145;
      v62 = (LOBYTE(v158[67]) ^ (unsigned __int8)(8 * *v10)) & 0x38;
      HIDWORD(v158[67]) = v133;
      LODWORD(v158[70]) = *(_DWORD *)(v9 + 1140);
      v63 = *(_DWORD *)(v9 + 1088);
      v131 = v57;
      v11 = v142;
      v158[0] = a2;
      LODWORD(v158[67]) = LODWORD(v158[67]) ^ v62 | 4;
      LODWORD(v158[265]) = -1073741823;
      LODWORD(v158[1]) = v63;
      if ( v63 )
      {
        v64 = &v158[2];
        v65 = v63;
        do
        {
          v66 = *(_QWORD *)((char *)v64++ + v9 - (_QWORD)&v158[2]);
          *(v64 - 1) = *(_QWORD *)(v66 + 64);
          --v65;
        }
        while ( v65 );
      }
      v67 = *(_QWORD *)(a2 + 16);
      v130[0] = 0;
      if ( *(_BYTE *)(v67 + 2586) )
      {
        memset((void *)(a2 + 4648), 0, 112LL * v131);
        v68 = v131;
        if ( v131 )
        {
          v69 = a2 + 4652;
          v70 = v131;
          v71 = a2 + 3452;
          do
          {
            *(_DWORD *)(v69 - 4) = *(_DWORD *)(v71 - 4);
            v72 = *(_DWORD *)v71;
            *(_DWORD *)v69 = *(_DWORD *)v71;
            if ( v72 )
            {
              *(_DWORD *)(v69 + 4) = *(_DWORD *)(v71 + 4);
              *(_QWORD *)(v69 + 12) = *(_QWORD *)(v71 + 12);
              *(_QWORD *)(v69 + 20) = *(_QWORD *)(v71 + 20);
              *(_DWORD *)(v69 + 28) = *(_DWORD *)(v71 + 28);
              *(_OWORD *)(v69 + 32) = *(_OWORD *)(v71 + 32);
              *(_OWORD *)(v69 + 48) = *(_OWORD *)(v71 + 48);
              *(_DWORD *)(v69 + 64) = *(_DWORD *)(v71 + 80);
              *(_DWORD *)(v69 + 68) = *(_DWORD *)(v71 + 84);
              *(_DWORD *)(v69 + 72) = 0;
              *(_QWORD *)(v69 + 76) = 0LL;
              *(_DWORD *)(v69 + 84) = *(_DWORD *)(v71 + 88);
              *(_DWORD *)(v69 + 88) = *(_DWORD *)(v71 + 92);
              *(_DWORD *)(v69 + 92) = *(_DWORD *)(v71 + 96);
              *(_DWORD *)(v69 + 96) = *(_DWORD *)(v71 + 100);
              *(_DWORD *)(v69 + 100) = *(_DWORD *)(v71 + 104);
              *(_DWORD *)(v69 + 104) = *(_DWORD *)(v71 + 108);
            }
            v71 += 120LL;
            v69 += 112LL;
            --v70;
          }
          while ( v70 );
        }
      }
      else
      {
        if ( !*(_BYTE *)(v67 + 2587) )
        {
          if ( *(_BYTE *)(v67 + 2588) && *(_QWORD *)(v67 + 904) )
          {
            v145 = v131;
            memset((void *)(a2 + 4648), 0, (unsigned __int64)v131 << 7);
            v94 = v131;
            v95 = 0;
            if ( v131 )
            {
              v96 = v145;
              v97 = a2 + 4652;
              v98 = a2 + 3452;
              do
              {
                *(_DWORD *)(v97 - 4) = *(_DWORD *)(v98 - 4);
                v99 = *(_DWORD *)v98;
                *(_DWORD *)v97 = *(_DWORD *)v98;
                if ( v99 )
                {
                  *(_DWORD *)(v97 + 4) = *(_DWORD *)(v98 + 4);
                  *(_QWORD *)(v97 + 12) = *(_QWORD *)(v98 + 12);
                  *(_QWORD *)(v97 + 20) = *(_QWORD *)(v98 + 20);
                  *(_DWORD *)(v97 + 28) = *(_DWORD *)(v98 + 28);
                  *(_OWORD *)(v97 + 32) = *(_OWORD *)(v98 + 32);
                  *(_OWORD *)(v97 + 48) = *(_OWORD *)(v98 + 48);
                  *(_OWORD *)(v97 + 64) = *(_OWORD *)(v98 + 64);
                  *(_DWORD *)(v97 + 80) = *(_DWORD *)(v98 + 80);
                  *(_DWORD *)(v97 + 84) = *(_DWORD *)(v98 + 84);
                  *(_DWORD *)(v97 + 88) = *(_DWORD *)(v98 + 88);
                  *(_DWORD *)(v97 + 96) = *(_DWORD *)(v98 + 96);
                  *(_DWORD *)(v97 + 100) = *(_DWORD *)(v98 + 100);
                  *(_DWORD *)(v97 + 104) = *(_DWORD *)(v98 + 104);
                  *(_DWORD *)(v97 + 108) = *(_DWORD *)(v98 + 108);
                  *(_DWORD *)(v97 + 112) = *(_DWORD *)(v98 + 112);
                  *(_DWORD *)(v97 + 116) = 0;
                  v100 = *(_QWORD *)(v9 + 1176);
                  v101 = v95 * ((8 * *(_DWORD *)(v100 + 8) + 199) & 0xFFFFFFF8);
                  ++v95;
                  *(_DWORD *)(v97 + 92) = *(_DWORD *)(v101 + v100 + 184);
                }
                v98 += 120LL;
                v97 += 128LL;
                --v96;
              }
              while ( v96 );
              v94 = v131;
            }
            LODWORD(v158[68]) = v94;
            v73 = a2 + 4648;
            v102 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
            goto LABEL_98;
          }
          LODWORD(v158[68]) = v131;
          v73 = a2 + 3448;
LABEL_97:
          v102 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_98:
          v103 = *(unsigned int *)(a2 + 32);
          v104 = *(_QWORD *)(a2 + 24);
          v158[69] = v73;
          DpSynchronizeExecution(v104, v102, v158, v103, v130);
          v15 = 0LL;
          if ( bTracingEnabled )
          {
            v106 = 0;
            v134 = 0;
            if ( v131 )
            {
              v107 = v133;
              v108 = (_DWORD *)(a2 + 3520);
              v138 = v131;
              do
              {
                v109 = *(v108 - 17);
                LOBYTE(v110) = 0;
                LOBYTE(v111) = 0;
                if ( v109 )
                {
                  v112 = *(_QWORD *)(v9 + 1176);
                  v113 = v106 * ((8 * *(_DWORD *)(v112 + 8) + 199) & 0xFFFFFFF8);
                  v134 = ++v106;
                  v110 = *(_DWORD *)(v113 + v112 + 184);
                  v111 = *(_DWORD *)(v113 + v112 + 192);
                }
                if ( (*v10 & 0x10) != 0 )
                  v114 = ((unsigned __int16)**(_DWORD **)(v9 + 1176) | (unsigned __int16)(**(_DWORD **)(v9 + 1176) >> 10)) & 0x3FF;
                else
                  v114 = (1 << *(_DWORD *)(a2 + 144)) - 1;
                v55 = !_BitScanForward(&v114, v114);
                v105 = 0xFFFFFFFFLL;
                v140[5] = v114;
                if ( !v55 )
                  v105 = v114;
                HIDWORD(v139) = *(_DWORD *)(v9 + 1048);
                LODWORD(v139) = (char)v105;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
                    v105,
                    0,
                    v106,
                    *(_QWORD *)(a2 + 16),
                    v107,
                    *(v108 - 18),
                    v139,
                    *((_QWORD *)v108 - 6),
                    *((_QWORD *)v108 - 7),
                    *(v108 - 16),
                    *(_DWORD *)(v9 + 1056),
                    *(_DWORD *)(v9 + 1080),
                    *(v108 - 9),
                    *(v108 - 7),
                    *(v108 - 8),
                    *(v108 - 6),
                    *(v108 - 5),
                    *(v108 - 3),
                    *(v108 - 4),
                    *(v108 - 2),
                    *(v108 - 1),
                    v108[1],
                    *v108,
                    v108[2],
                    v110,
                    5,
                    v109,
                    v111,
                    0);
                  v106 = v134;
                  v15 = 0LL;
                }
                v108 += 30;
                --v138;
              }
              while ( v138 );
              v11 = v142;
            }
          }
          v16 = SLODWORD(v158[265]);
          if ( !LODWORD(v158[265]) )
            goto LABEL_31;
          v115 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v105, 0LL);
          v115[6] = v158;
          v115[3] = 281LL;
          v115[4] = 11LL;
          v115[5] = v16;
          v115[7] = *(_QWORD *)(a2 + 16);
          WdLogEvent5_WdCriticalError(v115);
          __debugbreak();
          goto LABEL_114;
        }
        memset((void *)(a2 + 4648), 0, (unsigned __int64)v131 << 7);
        v68 = v131;
        if ( v131 )
        {
          v90 = a2 + 4652;
          v91 = v131;
          v92 = a2 + 3452;
          do
          {
            *(_DWORD *)(v90 - 4) = *(_DWORD *)(v92 - 4);
            v93 = *(_DWORD *)v92;
            *(_DWORD *)v90 = *(_DWORD *)v92;
            if ( v93 )
            {
              *(_DWORD *)(v90 + 4) = *(_DWORD *)(v92 + 4);
              *(_QWORD *)(v90 + 12) = *(_QWORD *)(v92 + 12);
              *(_QWORD *)(v90 + 20) = *(_QWORD *)(v92 + 20);
              *(_DWORD *)(v90 + 28) = *(_DWORD *)(v92 + 28);
              *(_OWORD *)(v90 + 32) = *(_OWORD *)(v92 + 32);
              *(_OWORD *)(v90 + 48) = *(_OWORD *)(v92 + 48);
              *(_OWORD *)(v90 + 64) = *(_OWORD *)(v92 + 64);
              *(_DWORD *)(v90 + 80) = *(_DWORD *)(v92 + 80);
              *(_DWORD *)(v90 + 84) = *(_DWORD *)(v92 + 84);
              *(_DWORD *)(v90 + 88) = 0;
              *(_QWORD *)(v90 + 92) = 0LL;
              *(_DWORD *)(v90 + 100) = *(_DWORD *)(v92 + 88);
              *(_DWORD *)(v90 + 104) = *(_DWORD *)(v92 + 92);
              *(_DWORD *)(v90 + 108) = *(_DWORD *)(v92 + 96);
              *(_DWORD *)(v90 + 112) = *(_DWORD *)(v92 + 100);
              *(_DWORD *)(v90 + 116) = *(_DWORD *)(v92 + 104);
              *(_DWORD *)(v90 + 120) = *(_DWORD *)(v92 + 108);
            }
            v92 += 120LL;
            v90 += 128LL;
            --v91;
          }
          while ( v91 );
          LODWORD(v158[68]) = v68;
          v73 = a2 + 4648;
          goto LABEL_97;
        }
      }
      LODWORD(v158[68]) = v68;
      v73 = a2 + 4648;
      goto LABEL_97;
    }
    v12 = v140[0];
  }
  *(_BYTE *)v139 = 1;
LABEL_32:
  LOBYTE(v37) = *v10;
  if ( (v37 & 0x20) != 0 )
  {
    v121 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v9 + 1152);
    if ( v121 )
    {
      v122 = v9 + 1304;
      if ( !*(_QWORD *)(v9 + 1304) )
        v122 = 0LL;
      VidSchiPropagatePresentHistoryToken(
        (struct _VIDSCH_GLOBAL *)a2,
        *(PKSPIN_LOCK *)(v9 + 1144),
        v121,
        1,
        (*v10 & 0x40) != 0,
        0,
        0,
        *(_QWORD *)(v9 + 1160),
        *(_QWORD *)(v9 + 1176),
        0LL,
        v122,
        1);
      v37 = *(_DWORD *)(v9 + 1136);
      v15 = 0LL;
    }
  }
  *(_DWORD *)(v9 + 1052) = v12;
  if ( v12 == 11 )
  {
    v123 = 1344LL * *(unsigned int *)(v6 + 44);
    LODWORD(v138) = 0;
    v134 = 0;
    v124 = *(_DWORD *)(v123 + v6 + 1140);
    if ( v124 == 5 || v124 == 15 )
    {
      v125 = v143;
      v148 = v133;
      v141 = 0;
      v147[1] = 0LL;
      v151 = ((_BYTE)v137 - 1) & 0x3F;
      v153 = HIDWORD(v158[265]);
      v154 = v158[266];
      v149 = 0;
      v152 = 0;
      v155 = 0LL;
      v136[0] = 0;
      v147[0] = a2;
      v150 = v6;
      VidSchiProcessVsyncCompletedFlipEntry(v143, v147, (__int64)v156, &v141, &v134, v136);
      LODWORD(v138) = v134;
    }
    else
    {
      v125 = v143;
    }
    *(_QWORD *)(v9 + 1112) = v158[266];
    *(_QWORD *)(v9 + 1128) = HIDWORD(v158[265]);
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v125, v15, v11, v9);
    VidSchiReferenceDisplayingAllocationsForThisEntry(v125, a2, (_WORD *)v11, v9);
    v39 = v137;
    v126 = *(_QWORD *)(v9 + 1040);
    v127 = VidSchiCompleteFlipEntry((__int64)v143, a2, v133, v6, v137, v137, 0, 0LL);
    v40 = v144;
    v128 = v127 + v138;
    v129 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v126 + 40) + 24LL)
                                 + 8LL * *(unsigned int *)(*(_QWORD *)(v126 + 32) + 4LL))
                     + 8 * v144
                     + 88);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v144 + 6352) + 8LL), -(v127 + v138));
    **(_DWORD **)(a2 + 8 * v40 + 6352) += v128;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v129 + 8), -v128);
    *(_DWORD *)v129 += v128;
  }
  else
  {
    if ( (v37 & 0x10) != 0 )
      v38 = ((unsigned __int16)**(_DWORD **)(v9 + 1176) | (unsigned __int16)(**(_DWORD **)(v9 + 1176) >> 10)) & 0x3FF;
    else
      v38 = (1 << *(_DWORD *)(a2 + 144)) - 1;
    *(_DWORD *)(v11 + 2352) |= v38;
    v39 = v137;
    v40 = v144;
  }
  *(_QWORD *)(v9 + 1104) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(v6 + 80) = *(_DWORD *)(v9 + 1072);
  v41 = 1344LL * *(unsigned int *)(v6 + 44);
  *(_DWORD *)(v6 + 48) = v39;
  v42 = *(_DWORD *)(v41 + v6 + 1140);
  if ( v42 != 5 && v42 != 15 )
    *(_DWORD *)(v6 + 44) = v39;
  *(_DWORD *)(v6 + 40) = ((_BYTE)v39 + 1) & 0x3F;
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(a2 + 8) + 648LL));
  v43 = *(_QWORD *)(a2 + 8 * v40 + 3104);
  if ( (*(_DWORD *)(v8 + 1224) & 0x10) != 0 )
    v44 = ((unsigned __int16)**(_DWORD **)(v8 + 1264) | (unsigned __int16)(**(_DWORD **)(v8 + 1264) >> 10)) & 0x3FF;
  else
    v44 = (1 << *(_DWORD *)(a2 + 144)) - 1;
  v45 = (LARGE_INTEGER *)(*(_QWORD *)(v43 + 120) + 72LL * *(unsigned int *)(v43 + 128));
  memset(v45, 0, 0x48uLL);
  *(_DWORD *)(v43 + 128) = (*(_DWORD *)(v43 + 128) + 1) & (*(_DWORD *)(v43 + 112) - 1);
  v45->LowPart = 1;
  v45[2].LowPart = v44;
  BYTE4(v45[2].QuadPart) = *(_BYTE *)(v6 + 56);
  v45[3].LowPart = v39;
  v45[1] = KeQueryPerformanceCounter(0LL);
  LOBYTE(v45[4].LowPart) = (*(_DWORD *)(v8 + 1224) & 0x20) != 0;
  v45[4].HighPart = *(_DWORD *)(v8 + 1140);
  v45[3].HighPart = *(_DWORD *)(v8 + 1144);
  v45[5].HighPart = *(_DWORD *)(v43 + 2356);
  v45[5].LowPart = *(_DWORD *)(v43 + 2352);
  v45[6].LowPart = *(_DWORD *)(v6 + 32);
  v45[6].HighPart = *(_DWORD *)(v6 + 36);
  v45[7].LowPart = *(_DWORD *)(v6 + 40);
  v45[7].HighPart = *(_DWORD *)(v6 + 44);
  v45[8].LowPart = *(_DWORD *)(v6 + 48);
  v45[8].HighPart = *(_DWORD *)(v6 + 52);
  return 0LL;
}
