/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C000DBA0
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C000BDB0 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0015200 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C0017910 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C001B5B8 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000E394 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000F520 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C000F9B4 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0010E20 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011BAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C0011BF4 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00125EC (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0015F38 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001863C (VidSchiPropagatePresentHistoryToken.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001B448 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x1C0034000 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     McTemplateK0pqqpxqqqq_EtwWriteTransfer @ 0x1C0037370 (McTemplateK0pqqpxqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x1C00376B4 (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0046144 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 */

__int64 __fastcall VidSchiExecuteMmIoFlip(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 v6; // r14
  LARGE_INTEGER *v8; // r15
  bool v9; // zf
  LARGE_INTEGER *v10; // rdi
  LARGE_INTEGER v11; // r13
  bool v12; // al
  int v13; // ebx
  struct VIDSCH_FLIP_QUEUE *v14; // r9
  LARGE_INTEGER v15; // rcx
  LARGE_INTEGER v16; // rbx
  char v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  LONG HighPart; // eax
  DWORD v21; // ecx
  int v22; // r8d
  __int64 v23; // rcx
  unsigned int v24; // r8d
  unsigned int v25; // r13d
  LARGE_INTEGER v26; // r9
  int v27; // edx
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // ebx
  DWORD v33; // eax
  unsigned int *v34; // rcx
  int v35; // edx
  unsigned int v36; // r13d
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rbx
  int v40; // ecx
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rbx
  void *v45; // rcx
  unsigned int v46; // r10d
  unsigned int v47; // r11d
  unsigned int v48; // eax
  int v49; // r13d
  __int64 v50; // rsi
  int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // rcx
  REGHANDLE EtwHandle; // rax
  char v56; // al
  __int64 v57; // rcx
  LARGE_INTEGER v58; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v60; // edx
  char v61; // cl
  __int16 v62; // r8
  unsigned int v63; // r8d
  unsigned int v64; // edx
  int v65; // eax
  unsigned int v66; // r13d
  int v67; // eax
  unsigned int v68; // r15d
  char v69; // cl
  unsigned int v70; // r14d
  int v71; // ecx
  DWORD LowPart; // eax
  _QWORD *v73; // rdx
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned int v77; // r8d
  __int64 v78; // rcx
  __int64 v79; // r9
  int *v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  unsigned int v85; // edx
  LARGE_INTEGER v86; // rcx
  __int64 v87; // rbx
  __int64 v88; // r8
  unsigned int v89; // r9d
  unsigned __int64 v90; // rdx
  int v91; // ecx
  int v92; // ecx
  char v93; // cl
  int v94; // eax
  unsigned int v95; // edx
  char v96; // cl
  int v97; // eax
  __int64 v98; // rcx
  __int64 v99; // r9
  int *v100; // rdx
  int v101; // eax
  unsigned int v102; // eax
  int v103; // r10d
  __int64 v104; // r9
  __int64 v105; // rdx
  int *v106; // r8
  int v107; // eax
  LARGE_INTEGER v108; // rcx
  __int64 v109; // rax
  unsigned int i; // edx
  unsigned __int8 (__fastcall *v111)(void *); // rdx
  __int64 v112; // r9
  __int64 v113; // rcx
  _DWORD *v114; // r13
  int v115; // r14d
  int v116; // r8d
  int v117; // r9d
  int v118; // r10d
  _DWORD *QuadPart; // rcx
  __int64 v120; // rax
  unsigned int v121; // edx
  int v122; // eax
  int v123; // ecx
  struct _SLIST_ENTRY *v124; // rcx
  _QWORD *v125; // rbx
  __int64 v126; // r15
  unsigned int v127; // ecx
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  int v132; // eax
  __int64 v133; // rbx
  LARGE_INTEGER v134; // rbx
  int v135; // eax
  int v136; // r9d
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rbx
  __int64 v140; // r8
  unsigned int v141; // edx
  unsigned int v142; // r8d
  unsigned int v143; // edx
  int v144; // eax
  char v145; // cl
  unsigned int v146; // r9d
  unsigned int v147; // ecx
  DWORD v148; // eax
  __int64 v149; // rdx
  char v150; // cl
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-150h]
  PEVENT_DATA_DESCRIPTOR UserDataa; // [rsp+20h] [rbp-150h]
  bool v153[4]; // [rsp+F0h] [rbp-80h] BYREF
  unsigned int v154; // [rsp+F4h] [rbp-7Ch]
  unsigned int v155; // [rsp+F8h] [rbp-78h]
  unsigned int v156; // [rsp+FCh] [rbp-74h]
  char v157; // [rsp+100h] [rbp-70h] BYREF
  char v158[7]; // [rsp+101h] [rbp-6Fh] BYREF
  __int64 v159; // [rsp+108h] [rbp-68h]
  unsigned int v160; // [rsp+110h] [rbp-60h] BYREF
  __int64 v161; // [rsp+118h] [rbp-58h]
  unsigned int v162; // [rsp+120h] [rbp-50h]
  int v163; // [rsp+124h] [rbp-4Ch] BYREF
  __int64 v164; // [rsp+128h] [rbp-48h]
  LARGE_INTEGER v165; // [rsp+130h] [rbp-40h]
  __int64 v166; // [rsp+138h] [rbp-38h] BYREF
  int v167; // [rsp+140h] [rbp-30h]
  int v168; // [rsp+144h] [rbp-2Ch]
  int v169; // [rsp+148h] [rbp-28h]
  _BYTE *v170; // [rsp+150h] [rbp-20h]
  LARGE_INTEGER *v171; // [rsp+158h] [rbp-18h]
  __int64 v172; // [rsp+160h] [rbp-10h]
  _QWORD v173[2]; // [rsp+168h] [rbp-8h] BYREF
  unsigned int v174; // [rsp+178h] [rbp+8h]
  unsigned int v175; // [rsp+17Ch] [rbp+Ch]
  int v176; // [rsp+180h] [rbp+10h]
  unsigned int v177; // [rsp+184h] [rbp+14h]
  unsigned int v178; // [rsp+188h] [rbp+18h]
  _QWORD v179[2]; // [rsp+190h] [rbp+20h] BYREF
  unsigned int v180; // [rsp+1A0h] [rbp+30h]
  int v181; // [rsp+1A4h] [rbp+34h]
  __int64 v182; // [rsp+1A8h] [rbp+38h]
  int v183; // [rsp+1B0h] [rbp+40h]
  int v184; // [rsp+1B4h] [rbp+44h]
  __int64 v185; // [rsp+1B8h] [rbp+48h]
  __int64 v186; // [rsp+1C0h] [rbp+50h]
  __int64 v187; // [rsp+1C8h] [rbp+58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1D0h] [rbp+60h] BYREF
  char v189; // [rsp+1E8h] [rbp+78h] BYREF
  _QWORD v190[268]; // [rsp+1F0h] [rbp+80h] BYREF

  v6 = a4;
  v164 = a1;
  v8 = (LARGE_INTEGER *)(a4 + 1376LL * a5);
  v9 = *(_BYTE *)(a2 + 59) == 0;
  v170 = a6;
  v10 = v8 + 15;
  v166 = a4;
  v155 = a3;
  v156 = a5;
  v11 = *(LARGE_INTEGER *)(a2 + 8LL * a3 + 3200);
  v172 = a3;
  v165 = v11;
  v171 = v8;
  if ( !v9 )
  {
    v58 = v8[177];
    if ( !v58.QuadPart )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v8[177] = PerformanceCounter;
      v58 = PerformanceCounter;
    }
    if ( v58.QuadPart <= *(_QWORD *)(v6 + 104) )
      v58 = *(LARGE_INTEGER *)(v6 + 104);
    v8[177] = v58;
  }
  v12 = *(_DWORD *)(v11.QuadPart + 4) == 3 || (v8[157].LowPart & 0x100) != 0;
  v153[0] = v12;
  v13 = 11;
  if ( !v12 )
    v13 = 5;
  v163 = v13;
  memset(v190, 0, 0x858uLL);
  if ( VidSchiCheckPendingFlipsForThisEntry(
         (struct _VIDSCH_GLOBAL *)a2,
         (struct _VIDSCH_PRESENT_INFO *)v11.QuadPart,
         (struct _VIDSCH_FLIP_QUEUE_ENTRY *)&v8[15],
         v14) )
  {
    goto LABEL_201;
  }
  if ( *(_DWORD *)(a2 + 3012) || (v15 = v8[145], *(_BYTE *)(v15.QuadPart + 204)) )
  {
LABEL_168:
    *v170 = 1;
    goto LABEL_31;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v15.QuadPart + 200), 0, 0) )
  {
    v13 = v163;
    goto LABEL_168;
  }
  if ( *(_BYTE *)(a2 + 156) )
  {
    v32 = v156;
    VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
      (struct _VIDSCH_GLOBAL *)a2,
      v155,
      (struct VIDSCH_FLIP_QUEUE *)v6,
      (struct _VIDSCH_CALL_EXECUTE_FLIP *)v190,
      (enum _VIDSCH_FLIP_STATUS *)&v163,
      v156);
    goto LABEL_29;
  }
  v16 = v8[162];
  if ( (v8[157].LowPart & 0x10) != 0 )
  {
    v60 = *(_DWORD *)v16.QuadPart;
    v61 = -1;
    v62 = *(_DWORD *)v16.QuadPart;
    v154 = 0;
    v63 = v62 & 0x3FF;
    v64 = (v60 >> 10) & 0x3FF;
    LODWORD(v159) = v63;
    v9 = !_BitScanForward((unsigned int *)&v65, v63);
    v162 = v64;
    v66 = 0;
    v167 = v65;
    if ( !v9 )
      v61 = v65;
    v9 = !_BitScanForward((unsigned int *)&v67, v64);
    v68 = v61;
    v69 = -1;
    v168 = v67;
    if ( !v9 )
      v69 = v67;
    v70 = v69;
    while ( v63 || v64 )
    {
      v83 = 120LL * v66;
      v161 = a2 + v83;
      memset((void *)(v83 + a2 + 3560), 0, 0x70uLL);
      v84 = a2 + v83;
      if ( v68 >= v70 )
      {
        v95 = v162;
        v63 = v159;
        *(_DWORD *)(v84 + 3552) = v70;
        *(_DWORD *)(v84 + 3556) = 0;
        v96 = -1;
        v64 = ~(1 << v70) & v95;
        v9 = !_BitScanForward((unsigned int *)&v84, v64);
        v162 = v64;
        LODWORD(v170) = v97;
        if ( !v9 )
          v96 = v84;
        v70 = v96;
      }
      else
      {
        v85 = v154;
        *(_DWORD *)(v84 + 3552) = v68;
        *(_DWORD *)(v84 + 3556) = 1;
        v86 = v10[147];
        v87 = v85 * ((8 * *(_DWORD *)(v86.QuadPart + 8) + 231) & 0xFFFFFFF8) + v86.QuadPart + 160;
        VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v86.QuadPart, v85, 0);
        v88 = v161;
        v89 = v154;
        v90 = (unsigned __int64)v154 << 6;
        *(_DWORD *)(v161 + 3560) = *(unsigned __int16 *)(v90
                                                       + *(_DWORD *)(v10[147].QuadPart + 4)
                                                       * ((8 * *(_DWORD *)(v10[147].QuadPart + 8) + 231) & 0xFFFFFFF8)
                                                       + v10[147].QuadPart
                                                       + 32);
        *(_QWORD *)(v88 + 3568) = *(_QWORD *)(v90
                                            + *(_DWORD *)(v10[147].QuadPart + 4)
                                            * ((8 * *(_DWORD *)(v10[147].QuadPart + 8) + 231) & 0xFFFFFFF8)
                                            + v10[147].QuadPart
                                            + 40);
        v91 = *(_DWORD *)(v88 + 3584);
        *(_QWORD *)(v88 + 3576) = *(_QWORD *)(v90
                                            + *(_DWORD *)(v10[147].QuadPart + 4)
                                            * ((8 * *(_DWORD *)(v10[147].QuadPart + 8) + 231) & 0xFFFFFFF8)
                                            + v10[147].QuadPart
                                            + 24);
        *(_DWORD *)(v88 + 3584) ^= (*(_DWORD *)(v87 + 28) ^ v91) & 1;
        *(_DWORD *)(v88 + 3584) ^= (*(_DWORD *)(v87 + 28) ^ *(_DWORD *)(v88 + 3584)) & 2;
        *(_DWORD *)(v88 + 3588) = (unsigned __int16)*(_DWORD *)v87;
        *(_DWORD *)(v88 + 3592) = (unsigned __int16)*(_DWORD *)(v87 + 4);
        *(_DWORD *)(v88 + 3596) = *(unsigned __int16 *)(v87 + 2);
        *(_DWORD *)(120 * (v66 + 30LL) + a2) = *(unsigned __int16 *)(v87 + 6);
        *(_DWORD *)(v88 + 3604) = *(__int16 *)(v87 + 8);
        *(_DWORD *)(v88 + 3608) = *(__int16 *)(v87 + 12);
        *(_DWORD *)(v88 + 3612) = *(unsigned __int16 *)(v87 + 10);
        *(_DWORD *)(v88 + 3616) = *(unsigned __int16 *)(v87 + 14);
        *(_DWORD *)(v88 + 3620) = (unsigned __int16)*(_DWORD *)(v87 + 16);
        *(_DWORD *)(v88 + 3624) = (unsigned __int16)*(_DWORD *)(v87 + 20);
        *(_DWORD *)(v88 + 3628) = *(unsigned __int16 *)(v87 + 18);
        *(_DWORD *)(v88 + 3632) = *(unsigned __int16 *)(v87 + 22);
        v64 = v162;
        v94 = ((*(_DWORD *)(v87 + 28) >> 3) & 3) + 1;
        v154 = v89 + 1;
        *(_DWORD *)(v88 + 3636) = v94;
        *(_DWORD *)(v88 + 3640) ^= (*(_DWORD *)(v88 + 3640) ^ (*(_DWORD *)(v87 + 28) >> 2)) & 1;
        *(_DWORD *)(v88 + 3644) = (*(_DWORD *)(v87 + 28) >> 5) & 3;
        *(_DWORD *)(v88 + 3648) ^= (*(_DWORD *)(v88 + 3648) ^ (*(_DWORD *)(v87 + 28) >> 7)) & 1;
        v92 = *(_DWORD *)(v88 + 3648) ^ ((unsigned __int8)*(_DWORD *)(v88 + 3648) ^ (unsigned __int8)(*(_DWORD *)(v87 + 28) >> 7)) & 2;
        *(_DWORD *)(v88 + 3648) = v92;
        *(_DWORD *)(v88 + 3648) = v92 ^ ((unsigned __int8)v92 ^ (unsigned __int8)(*(_DWORD *)(v87 + 28) >> 7)) & 4;
        *(_DWORD *)(v88 + 3652) = (*(_DWORD *)(v87 + 28) >> 10) & 7;
        *(_DWORD *)(v88 + 3656) = (*(_DWORD *)(v87 + 28) >> 13) & 1;
        *(_DWORD *)(v88 + 3660) = (*(_DWORD *)(v87 + 28) >> 14) & 1;
        *(_DWORD *)(v88 + 3664) = (*(_DWORD *)(v87 + 28) >> 15) & 3;
        v93 = -1;
        v63 = ~(1 << v68) & v159;
        v9 = !_BitScanForward((unsigned int *)&v94, v63);
        LODWORD(v159) = v63;
        v169 = v94;
        if ( !v9 )
          v93 = v94;
        v68 = v93;
      }
      ++v66;
    }
    v16.QuadPart = v155;
    v6 = v166;
    v8 = v171;
    v71 = (LOBYTE(v190[67]) ^ (unsigned __int8)(8 * v10[142].LowPart)) & 0x38;
    LODWORD(v190[70]) = v10[142].HighPart;
    LowPart = v10[136].LowPart;
    v154 = v66;
    v11 = v165;
    v190[0] = a2;
    HIDWORD(v190[67]) = v155;
    LODWORD(v190[67]) = LODWORD(v190[67]) ^ v71 | 4;
    LODWORD(v190[265]) = -1073741823;
    LODWORD(v159) = LowPart;
    LODWORD(v190[1]) = LowPart;
    if ( LowPart )
    {
      v73 = &v190[2];
      v74 = LowPart;
      do
      {
        v75 = *(_QWORD *)((char *)v73++ + (char *)v10 - (char *)&v190[2]);
        *(v73 - 1) = *(_QWORD *)(v75 + 64);
        --v74;
      }
      while ( v74 );
      LODWORD(v159) = v190[1];
    }
    v76 = *(_QWORD *)(a2 + 16);
    v153[0] = 0;
    if ( *(_BYTE *)(v76 + 2706) )
    {
      memset((void *)(a2 + 4752), 0, 112LL * v154);
      v77 = v154;
      if ( v154 )
      {
        v78 = a2 + 4756;
        v79 = v154;
        v80 = (int *)(a2 + 3556);
        do
        {
          *(_DWORD *)(v78 - 4) = *(v80 - 1);
          v81 = *v80;
          *(_DWORD *)v78 = *v80;
          if ( v81 )
          {
            *(_DWORD *)(v78 + 4) = v80[1];
            *(_QWORD *)(v78 + 12) = *(_QWORD *)(v80 + 3);
            *(_QWORD *)(v78 + 20) = *(_QWORD *)(v80 + 5);
            *(_DWORD *)(v78 + 28) = v80[7];
            *(_OWORD *)(v78 + 32) = *((_OWORD *)v80 + 2);
            *(_OWORD *)(v78 + 48) = *((_OWORD *)v80 + 3);
            *(_DWORD *)(v78 + 64) = v80[20];
            *(_DWORD *)(v78 + 68) = v80[21];
            *(_DWORD *)(v78 + 72) = 0;
            *(_QWORD *)(v78 + 76) = 0LL;
            *(_DWORD *)(v78 + 84) = v80[22];
            *(_DWORD *)(v78 + 88) = v80[23];
            *(_DWORD *)(v78 + 92) = v80[24];
            *(_DWORD *)(v78 + 96) = v80[25];
            *(_DWORD *)(v78 + 100) = v80[26];
            *(_DWORD *)(v78 + 104) = v80[27];
          }
          v80 += 30;
          v78 += 112LL;
          --v79;
        }
        while ( v79 );
      }
    }
    else
    {
      if ( !*(_BYTE *)(v76 + 2707) )
      {
        if ( *(_BYTE *)(v76 + 2708) && *(_QWORD *)(v76 + 992) )
        {
          v161 = v154;
          memset((void *)(a2 + 4752), 0, (unsigned __int64)v154 << 7);
          v102 = v154;
          v103 = 0;
          if ( v154 )
          {
            v104 = v161;
            v105 = a2 + 4756;
            v106 = (int *)(a2 + 3556);
            do
            {
              *(_DWORD *)(v105 - 4) = *(v106 - 1);
              v107 = *v106;
              *(_DWORD *)v105 = *v106;
              if ( v107 )
              {
                *(_DWORD *)(v105 + 4) = v106[1];
                *(_QWORD *)(v105 + 12) = *(_QWORD *)(v106 + 3);
                *(_QWORD *)(v105 + 20) = *(_QWORD *)(v106 + 5);
                *(_DWORD *)(v105 + 28) = v106[7];
                *(_OWORD *)(v105 + 32) = *((_OWORD *)v106 + 2);
                *(_OWORD *)(v105 + 48) = *((_OWORD *)v106 + 3);
                *(_OWORD *)(v105 + 64) = *((_OWORD *)v106 + 4);
                *(_DWORD *)(v105 + 80) = v106[20];
                *(_DWORD *)(v105 + 84) = v106[21];
                *(_DWORD *)(v105 + 88) = v106[22];
                *(_DWORD *)(v105 + 96) = v106[24];
                *(_DWORD *)(v105 + 100) = v106[25];
                *(_DWORD *)(v105 + 104) = v106[26];
                *(_DWORD *)(v105 + 108) = v106[27];
                *(_DWORD *)(v105 + 112) = v106[28];
                *(_DWORD *)(v105 + 116) = 0;
                v108 = v10[147];
                v109 = v103 * ((8 * *(_DWORD *)(v108.QuadPart + 8) + 231) & 0xFFFFFFF8);
                ++v103;
                *(_DWORD *)(v105 + 92) = *(_DWORD *)(v109 + v108.QuadPart + 184);
              }
              v106 += 30;
              v105 += 128LL;
              --v104;
            }
            while ( v104 );
            v102 = v154;
          }
          for ( i = 0; i < (unsigned int)v159; ++i )
            ;
          LODWORD(v190[68]) = v102;
          v111 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
          v82 = a2 + 4752;
          goto LABEL_135;
        }
        LODWORD(v190[68]) = v154;
        v82 = a2 + 3552;
LABEL_134:
        v111 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_135:
        v112 = *(unsigned int *)(a2 + 32);
        v113 = *(_QWORD *)(a2 + 24);
        v190[69] = v82;
        DpSynchronizeExecution(v113, v111, v190, v112, v153);
        if ( bTracingEnabled && v154 )
        {
          v114 = (_DWORD *)(a2 + 3624);
          v159 = v154;
          v115 = 0;
          do
          {
            v116 = *(v114 - 17);
            LOBYTE(v117) = 0;
            LOBYTE(v118) = 0;
            if ( v116 )
            {
              QuadPart = (_DWORD *)v10[147].QuadPart;
              v120 = v115 * ((8 * QuadPart[2] + 231) & 0xFFFFFFF8);
              ++v115;
              v117 = *(_DWORD *)((char *)QuadPart + v120 + 184);
              v118 = *(_DWORD *)((char *)QuadPart + v120 + 192);
            }
            else
            {
              QuadPart = (_DWORD *)v8[162].QuadPart;
            }
            if ( (v10[142].LowPart & 0x10) != 0 )
              v121 = ((unsigned __int16)*QuadPart | (unsigned __int16)(*QuadPart >> 10)) & 0x3FF;
            else
              v121 = (1 << *(_DWORD *)(a2 + 152)) - 1;
            v9 = !_BitScanForward((unsigned int *)&v122, v121);
            v123 = -1;
            LODWORD(v171) = v122;
            if ( !v9 )
              v123 = v122;
            HIDWORD(v161) = v10[131].LowPart;
            LODWORD(v161) = (char)v123;
            if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
              McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
                v123,
                v121,
                v116,
                *(_QWORD *)(a2 + 16),
                v16.QuadPart,
                *(v114 - 18),
                v161,
                *((_QWORD *)v114 - 6),
                *((_QWORD *)v114 - 7),
                *(v114 - 16),
                v10[132].LowPart,
                v10[135].LowPart,
                *(v114 - 9),
                *(v114 - 7),
                *(v114 - 8),
                *(v114 - 6),
                *(v114 - 5),
                *(v114 - 3),
                *(v114 - 4),
                *(v114 - 2),
                *(v114 - 1),
                v114[1],
                *v114,
                v114[2],
                v117,
                5,
                v116,
                v118,
                0);
            v114 += 30;
            --v159;
          }
          while ( v159 );
          v6 = v166;
          v11 = v165;
        }
        if ( !LODWORD(v190[265]) )
          goto LABEL_30;
        WdLogSingleEntry5(0LL, 281LL, 11LL, SLODWORD(v190[265]), v190, *(_QWORD *)(a2 + 16));
        __debugbreak();
        goto LABEL_152;
      }
      memset((void *)(a2 + 4752), 0, (unsigned __int64)v154 << 7);
      v77 = v154;
      if ( v154 )
      {
        v98 = a2 + 4756;
        v99 = v154;
        v100 = (int *)(a2 + 3556);
        do
        {
          *(_DWORD *)(v98 - 4) = *(v100 - 1);
          v101 = *v100;
          *(_DWORD *)v98 = *v100;
          if ( v101 )
          {
            *(_DWORD *)(v98 + 4) = v100[1];
            *(_QWORD *)(v98 + 12) = *(_QWORD *)(v100 + 3);
            *(_QWORD *)(v98 + 20) = *(_QWORD *)(v100 + 5);
            *(_DWORD *)(v98 + 28) = v100[7];
            *(_OWORD *)(v98 + 32) = *((_OWORD *)v100 + 2);
            *(_OWORD *)(v98 + 48) = *((_OWORD *)v100 + 3);
            *(_OWORD *)(v98 + 64) = *((_OWORD *)v100 + 4);
            *(_DWORD *)(v98 + 80) = v100[20];
            *(_DWORD *)(v98 + 84) = v100[21];
            *(_DWORD *)(v98 + 88) = 0;
            *(_QWORD *)(v98 + 92) = 0LL;
            *(_DWORD *)(v98 + 100) = v100[22];
            *(_DWORD *)(v98 + 104) = v100[23];
            *(_DWORD *)(v98 + 108) = v100[24];
            *(_DWORD *)(v98 + 112) = v100[25];
            *(_DWORD *)(v98 + 116) = v100[26];
            *(_DWORD *)(v98 + 120) = v100[27];
          }
          v100 += 30;
          v98 += 128LL;
          --v99;
        }
        while ( v99 );
        LODWORD(v190[68]) = v77;
        v82 = a2 + 4752;
        goto LABEL_134;
      }
    }
    LODWORD(v190[68]) = v77;
    v82 = a2 + 4752;
    goto LABEL_134;
  }
  memset((char *)&v190[4] + 4, 0, 0x210uLL);
  memset(&v190[71], 0, 0x610uLL);
  v17 = v155;
  *(_QWORD *)((char *)&v190[265] + 4) = 0LL;
  HIDWORD(v190[266]) = 0;
  v190[0] = a2;
  LODWORD(v190[1]) = v155;
  v18 = *(_QWORD *)(*(_DWORD *)(v16.QuadPart + 4) * ((8 * *(_DWORD *)(v16.QuadPart + 8) + 231) & 0xFFFFFFF8)
                  + v16.QuadPart
                  + 48);
  *(_QWORD *)(*(_DWORD *)(v16.QuadPart + 4) * ((8 * *(_DWORD *)(v16.QuadPart + 8) + 231) & 0xFFFFFFF8)
            + v16.QuadPart
            + 40) = *(_QWORD *)(*(_QWORD *)(v18 + 96) + 32LL);
  *(_WORD *)(*(_DWORD *)(v16.QuadPart + 4) * ((8 * *(_DWORD *)(v16.QuadPart + 8) + 231) & 0xFFFFFFF8) + v16.QuadPart + 32) = *(_WORD *)(*(_QWORD *)(v18 + 96) + 6LL);
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 96) + 12LL) )
  {
    v19 = v8[162].QuadPart;
    HIDWORD(v190[1]) = *(unsigned __int16 *)(*(_DWORD *)(v19 + 4) * ((8 * *(_DWORD *)(v19 + 8) + 231) & 0xFFFFFFF8)
                                           + v19
                                           + 32);
    v190[2] = *(_QWORD *)(*(_DWORD *)(v19 + 4) * ((8 * *(_DWORD *)(v19 + 8) + 231) & 0xFFFFFFF8) + v19 + 40);
    HighPart = v8[157].HighPart;
    v190[3] = *(_QWORD *)(*(_DWORD *)(v19 + 4) * ((8 * *(_DWORD *)(v19 + 8) + 231) & 0xFFFFFFF8) + v19 + 24);
    v21 = v8[157].LowPart;
    v22 = v21 & 0xF;
    LODWORD(v23) = v21 & 0x20;
    LODWORD(v190[265]) = -1073741823;
    v24 = v190[70] & 0xFFFFFF07 | (4 * (v23 | (2 * v22)));
    v190[70] = __PAIR64__(HighPart, v24);
    v16 = *(LARGE_INTEGER *)(v19 + 200);
    if ( v16.QuadPart )
    {
      LODWORD(v190[263]) = *(_DWORD *)(v16.QuadPart + 8);
      v190[264] = v16.QuadPart + 16;
    }
    v11 = v8[160];
    if ( !v11.QuadPart )
      goto LABEL_17;
    goto LABEL_153;
  }
LABEL_152:
  WdLogSingleEntry5(0LL, 281LL, 0x4000LL, 0LL, 0LL, 0LL);
  __debugbreak();
LABEL_153:
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11.QuadPart + 16), &LockHandle);
  if ( v16.QuadPart )
    _InterlockedIncrement((volatile signed __int32 *)(v16.QuadPart + 12));
  v124 = *(struct _SLIST_ENTRY **)(v11.QuadPart + 8);
  if ( v124 )
    CRefCountedBuffer::RefCountedBufferRelease(v124);
  *(LARGE_INTEGER *)(v11.QuadPart + 8) = v16;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v24 = v190[70];
  v17 = v155;
LABEL_17:
  v25 = 0;
  LODWORD(v190[4]) = v10[136].LowPart;
  if ( LODWORD(v190[4]) )
  {
    v26 = v10[147];
    do
    {
      v27 = *(_DWORD *)(v26.QuadPart + 4);
      LODWORD(v23) = v25;
      v28 = v27 * ((8 * *(_DWORD *)(v26.QuadPart + 8) + 231) & 0xFFFFFFF8);
      v19 = (unsigned __int64)(v25 * v27) << 6;
      v190[v25 + 5] = *(_QWORD *)(v19 + v26.QuadPart + v28 + 16);
      if ( v25 )
      {
        v125 = &v190[3 * v25 + 68];
        *v125 = *(_QWORD *)(((unsigned __int64)(v25 * *(_DWORD *)(v26.QuadPart + 4)) << 6)
                          + v26.QuadPart
                          + *(_DWORD *)(v26.QuadPart + 4) * ((8 * *(_DWORD *)(v26.QuadPart + 8) + 231) & 0xFFFFFFF8)
                          + 24);
        VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v26.QuadPart, 0, v25);
        v26 = v10[147];
        *((_WORD *)v125 + 4) = *(_WORD *)(((unsigned __int64)(v25 * *(_DWORD *)(v26.QuadPart + 4)) << 6)
                                        + v26.QuadPart
                                        + *(_DWORD *)(v26.QuadPart + 4)
                                        * ((8 * *(_DWORD *)(v26.QuadPart + 8) + 231) & 0xFFFFFFF8)
                                        + 32);
        v23 = *(_QWORD *)(((unsigned __int64)(v25 * *(_DWORD *)(v26.QuadPart + 4)) << 6)
                        + v26.QuadPart
                        + *(_DWORD *)(v26.QuadPart + 4) * ((8 * *(_DWORD *)(v26.QuadPart + 8) + 231) & 0xFFFFFFF8)
                        + 40);
        v125[2] = v23;
      }
      ++v25;
    }
    while ( v25 < v10[136].LowPart );
    v24 = v190[70];
    v17 = v155;
  }
  if ( v153[0] )
    v29 = v24 | 2;
  else
    v29 = v24 | 4;
  LODWORD(v190[70]) = v29;
  if ( bTracingEnabled && Microsoft_Windows_DxgKrnlEnableBits < 0 )
    McTemplateK0pqqpxqqqq_EtwWriteTransfer(
      v23,
      v19,
      v29,
      *(_QWORD *)(a2 + 16),
      v17,
      v10[131].LowPart,
      v190[3],
      v190[2],
      SBYTE4(v190[1]),
      v10[132].LowPart,
      v10[135].LowPart,
      v29);
  v30 = *(unsigned int *)(a2 + 32);
  v31 = *(_QWORD *)(a2 + 24);
  v157 = 0;
  DpSynchronizeExecution(v31, VidSchiExecuteMmIoFlipAtISR, v190, v30, &v157);
  v11 = v165;
  v32 = v156;
LABEL_29:
  if ( SLODWORD(v190[265]) < 0 )
  {
    if ( LODWORD(v190[265]) == -1073741811 )
    {
      if ( (v10[142].LowPart & 0x10) != 0 || (v190[70] & 0x40) == 0 )
      {
        WdLogSingleEntry0(1LL);
        DxgCoreInterface[85](
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Driver failed SetVidPnSourceAddress for unknown reason",
          21638LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        v126 = v172;
        WdLogSingleEntry2(
          1LL,
          *(_QWORD *)(*(_DWORD *)(v10[147].QuadPart + 4) * ((8 * *(_DWORD *)(v10[147].QuadPart + 8) + 231) & 0xFFFFFFF8)
                    + v10[147].QuadPart
                    + 24),
          v172);
        DxgCoreInterface[85](
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Driver failed SetVidPnSourceAddress - cannot flip to DirectFlip resource",
          *(_QWORD *)(*(_DWORD *)(v10[147].QuadPart + 4) * ((8 * *(_DWORD *)(v10[147].QuadPart + 8) + 231) & 0xFFFFFFF8)
                    + v10[147].QuadPart
                    + 24),
          v126,
          0LL,
          0LL,
          0LL);
      }
      LODWORD(UserDataa) = v32;
      VidSchiUpdateFlipQueueHistory(2LL, a2, v155, v6, UserDataa);
      return 3221225485LL;
    }
    if ( LODWORD(v190[265]) == -2147483631 )
    {
      v56 = v190[2];
      goto LABEL_164;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 2738LL) && LODWORD(v190[265]) == -1073741267 )
    {
      v56 = v190[2];
      if ( (v190[2] & 2) == 0 )
      {
        v10[142].LowPart |= 0x10000u;
        v57 = 1LL;
        v10[131].HighPart = 13;
        LODWORD(UserData) = v32;
LABEL_82:
        VidSchiUpdateFlipQueueHistory(v57, a2, v155, v6, UserData);
        return 259LL;
      }
LABEL_164:
      v10[131].HighPart = 14;
      v127 = v10[142].LowPart & 0xFFF8FFFF | ((v56 & 0xC | (2 * (v56 & 1))) << 15);
      v10[142].LowPart = v127;
      if ( (v127 & 0x20000) != 0 )
        *(_QWORD *)(v11.QuadPart + 112) = v10;
      LODWORD(UserData) = v32;
      v57 = 5LL;
      goto LABEL_82;
    }
LABEL_201:
    v57 = 2LL;
    LODWORD(UserData) = v156;
    goto LABEL_82;
  }
LABEL_30:
  v13 = v163;
LABEL_31:
  if ( *(LARGE_INTEGER **)(v11.QuadPart + 112) == v10 )
    *(_QWORD *)(v11.QuadPart + 112) = 0LL;
  v33 = v10[142].LowPart;
  if ( (v33 & 0x20) != 0 && v10[144].QuadPart )
  {
    FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo((struct _D3DKMT_AUXILIARYPRESENTINFO *)v10[165].QuadPart);
    if ( FlipManagerAuxiliaryPresentInfo )
      *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 7) = 0;
    v129 = (__int64)&v10[166];
    if ( !v10[166].QuadPart )
      v129 = 0LL;
    VidSchiPropagatePresentHistoryToken(
      (struct _VIDSCH_GLOBAL *)a2,
      (PKSPIN_LOCK)v10[143].QuadPart,
      (struct _D3DKMT_PRESENTHISTORYTOKEN *)v10[144].QuadPart,
      1,
      (v10[142].LowPart & 0x40) != 0,
      0,
      0,
      v10[145].QuadPart,
      v10[147].QuadPart,
      0LL,
      v129,
      1);
    v33 = v8[157].LowPart;
  }
  v10[131].HighPart = v13;
  if ( v13 == 11 )
  {
    v130 = 0LL;
    v131 = 1376LL * *(unsigned int *)(v6 + 68);
    LODWORD(v159) = 0;
    v160 = 0;
    v132 = *(_DWORD *)(v131 + v6 + 1172);
    if ( v132 == 5 || v132 == 15 )
    {
      v133 = v164;
      v180 = v155;
      LODWORD(v166) = 0;
      v158[0] = 0;
      v183 = ((_BYTE)v156 - 1) & 0x3F;
      v185 = HIDWORD(v190[265]);
      v186 = v190[266];
      v179[1] = 0LL;
      v181 = 0;
      v184 = 0;
      v187 = 0LL;
      v179[0] = a2;
      v182 = v6;
      VidSchiProcessVsyncCompletedFlipEntry(
        v164,
        (unsigned int)v179,
        (unsigned int)&v189,
        (unsigned int)&v166,
        (__int64)&v160,
        (__int64)v158);
      LODWORD(v159) = v160;
    }
    else
    {
      v133 = v164;
    }
    v10[139] = (LARGE_INTEGER)v190[266];
    v10[141].QuadPart = HIDWORD(v190[265]);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiUnreferenceDisplayingAllocationsForThisEntry)(
      v133,
      v130,
      (LARGE_INTEGER)v11.QuadPart,
      v10);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiReferenceDisplayingAllocationsForThisEntry)(
      v133,
      a2,
      (LARGE_INTEGER)v11.QuadPart,
      v10);
    v36 = v156;
    v134 = v10[130];
    v135 = VidSchiCompleteFlipEntry(v164, a2, v155, v6, v156, v156, 0, 0LL);
    v136 = v135 + v159;
    v137 = *(unsigned int *)(*(_QWORD *)(v134.QuadPart + 32) + 4LL);
    v138 = *(_QWORD *)(v134.QuadPart + 40);
    v139 = v172;
    v140 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v138 + 32) + 8 * v137) + 8 * v172 + 88);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v172 + 6456) + 8LL), -v136);
    **(_DWORD **)(a2 + 8 * v139 + 6456) += v136;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v140 + 8), -v136);
    *(_DWORD *)v140 += v136;
  }
  else
  {
    v34 = (unsigned int *)v10[147].QuadPart;
    if ( *(_BYTE *)(a2 + 59) )
    {
      v141 = *v34;
      v142 = *v34 & 0x3FF;
      v173[0] = a2;
      v9 = *(_BYTE *)(a2 + 156) == 0;
      v173[1] = v34;
      v174 = v142;
      if ( v9 )
        v143 = 0;
      else
        v143 = (v141 >> 10) & 0x3FF;
      v9 = !_BitScanForward((unsigned int *)&v144, v142);
      v145 = -1;
      v175 = v143;
      LODWORD(v164) = v144;
      if ( !v9 )
        v145 = v144;
      v176 = 0;
      v146 = v145;
      LOBYTE(v147) = -1;
      v9 = !_BitScanForward(&v148, v143);
      v177 = v146;
      v165.LowPart = v148;
      if ( !v9 )
        LOBYTE(v147) = v148;
      v147 = (char)v147;
      v178 = (char)v147;
      while ( v142 || v143 )
      {
        if ( v146 < v147 )
          v147 = v146;
        v149 = 280LL * v147;
        ++*(_DWORD *)(v149 + v11.QuadPart + 192);
        if ( (v10[142].LowPart & 0x20) != 0 )
          ++*(_DWORD *)(v149 + v11.QuadPart + 196);
        *(_DWORD *)(v11.QuadPart + 3000) |= 1 << v147;
        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v173);
        v147 = v178;
        v143 = v175;
        v142 = v174;
        v146 = v177;
      }
    }
    else
    {
      if ( (v33 & 0x10) != 0 )
        v35 = ((unsigned __int16)*v34 | (unsigned __int16)(*v34 >> 10)) & 0x3FF;
      else
        v35 = (1 << *(_DWORD *)(a2 + 152)) - 1;
      *(_DWORD *)(v11.QuadPart + 3000) |= v35;
    }
    v36 = v156;
  }
  if ( *(_BYTE *)(a2 + 59) )
  {
    VidSchiSetNextFlipEarliestIdealTime(
      (struct _VIDSCH_GLOBAL *)a2,
      v155,
      (struct VIDSCH_FLIP_QUEUE *)v6,
      (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v10);
  }
  else
  {
    v10[138].QuadPart = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v6 + 112) = v10[134].LowPart;
  }
  v37 = 1376LL * *(unsigned int *)(v6 + 68);
  *(_DWORD *)(v6 + 72) = v36;
  v38 = *(_DWORD *)(v37 + v6 + 1172);
  if ( v38 != 5 && v38 != 15 )
    *(_DWORD *)(v6 + 68) = v36;
  *(_DWORD *)(v6 + 64) = ((_BYTE)v36 + 1) & 0x3F;
  v39 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 656LL);
  v40 = *(_DWORD *)(v39 + 7904);
  if ( *(_QWORD *)(v39 + 7896) > (unsigned __int64)qword_1C006E390 )
  {
    v53 = dword_1C006E39C + v40;
    *(_DWORD *)(v39 + 7904) = v53;
    if ( v53 > dword_1C006E398
      && MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v39 + 7912) > (unsigned __int64)qword_1C006E3A0 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v9 = bTracingEnabled == 0;
      *(_QWORD *)(v39 + 7912) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v39 + 7904) = 0;
      if ( !v9 && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v54, &EventPerformanceWarning);
    }
  }
  else if ( v40 )
  {
    *(_DWORD *)(v39 + 7904) = v40 - 1;
  }
  v41 = v172;
  _InterlockedExchange64((volatile __int64 *)(v39 + 7896), 0LL);
  v42 = *(_QWORD *)(a2 + 8 * v41 + 3200);
  v43 = *(unsigned int *)(v42 + 136);
  v44 = *(_QWORD *)(v42 + 128) + 112 * v43;
  *(_DWORD *)(v42 + 136) = (v43 + 1) & (*(_DWORD *)(v42 + 120) - 1);
  v45 = *(void **)(v44 + 72);
  if ( v45 )
    memset(v45, 0, 8LL * *(unsigned int *)(a2 + 152));
  *(_DWORD *)v44 = 1;
  *(_DWORD *)(v44 + 16) = *(_DWORD *)v8[162].QuadPart & 0x3FF;
  *(_DWORD *)(v44 + 20) = (*(_DWORD *)v8[162].QuadPart >> 10) & 0x3FF;
  *(_BYTE *)(v44 + 24) = *(_BYTE *)(v6 + 80);
  *(_DWORD *)(v44 + 28) = v36;
  *(LARGE_INTEGER *)(v44 + 8) = KeQueryPerformanceCounter(0LL);
  v9 = *(_QWORD *)(v44 + 72) == 0LL;
  *(_BYTE *)(v44 + 36) = (v8[157].LowPart & 0x20) != 0;
  *(_DWORD *)(v44 + 40) = v8[146].HighPart;
  *(_DWORD *)(v44 + 32) = v8[147].LowPart;
  *(_DWORD *)(v44 + 44) = v8[157].HighPart;
  *(_DWORD *)(v44 + 48) = *(_DWORD *)(v42 + 2944);
  *(LARGE_INTEGER *)(v44 + 56) = v8[177];
  *(LARGE_INTEGER *)(v44 + 64) = v8[178];
  if ( !v9 )
  {
    v46 = *(_DWORD *)v8[162].QuadPart & 0x3FF;
    if ( *(_BYTE *)(a2 + 156) )
      v47 = (*(_DWORD *)v8[162].QuadPart >> 10) & 0x3FF;
    else
      v47 = 0;
    v9 = !_BitScanForward(&v48, v46);
    v49 = 0;
    if ( v9 )
      LOBYTE(v48) = -1;
    v50 = (unsigned int)(char)v48;
    v9 = !_BitScanForward(&v48, v47);
    if ( v9 )
      LOBYTE(v48) = -1;
    v48 = (char)v48;
    v160 = (char)v48;
    while ( v46 || v47 )
    {
      if ( (unsigned int)v50 >= v48 )
      {
        v150 = -1;
        v47 &= ~(1 << v48);
        v9 = !_BitScanForward(&v48, v47);
        if ( !v9 )
          v150 = v48;
        v48 = v150;
        v160 = v150;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v44 + 72) + 8 * v50) = *(_QWORD *)(v49
                                                                 * ((8 * *(_DWORD *)(v8[162].QuadPart + 8) + 231) & 0xFFFFFFF8)
                                                                 + v8[162].QuadPart
                                                                 + 24);
        v46 &= ~(1 << v50);
        v9 = !_BitScanForward((unsigned int *)&v52, v46);
        if ( v9 )
          LOBYTE(v52) = -1;
        v50 = (unsigned int)(char)v52;
        v48 = v160;
      }
      ++v49;
    }
  }
  *(_DWORD *)(v44 + 84) = *(_DWORD *)(v42 + 3004);
  *(_DWORD *)(v44 + 80) = *(_DWORD *)(v42 + 3000);
  *(_DWORD *)(v44 + 88) = *(_DWORD *)(v6 + 56);
  *(_DWORD *)(v44 + 92) = *(_DWORD *)(v6 + 60);
  *(_DWORD *)(v44 + 96) = *(_DWORD *)(v6 + 64);
  *(_DWORD *)(v44 + 100) = *(_DWORD *)(v6 + 68);
  *(_DWORD *)(v44 + 104) = *(_DWORD *)(v6 + 72);
  *(_DWORD *)(v44 + 108) = *(_DWORD *)(v6 + 76);
  return 0LL;
}
