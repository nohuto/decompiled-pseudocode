/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C0010190
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000F520 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C0017910 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchiCancelIndependentFlips @ 0x1C0019BA8 (VidSchiCancelIndependentFlips.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C001AE48 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x1C00346C8 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C00356F4 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003A160 (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x1C00461BC (-VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVID.c)
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0004B64 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00097D0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B770 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C000E938 (VidSchiUnwaitContext.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0010BF0 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x1C0010CD0 (-VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_E.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011BAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001430C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001863C (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C001A22C (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C001A848 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001B448 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x1C0034000 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     McTemplateK0pxqqpqx_EtwWriteTransfer @ 0x1C0037E34 (McTemplateK0pxqqpqx_EtwWriteTransfer.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003BCE4 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0045990 (-VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 */

__int64 __fastcall VidSchiCompleteFlipEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        _BYTE *a8)
{
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r10
  int v11; // r8d
  unsigned int v12; // r12d
  unsigned int v13; // esi
  unsigned int v14; // r13d
  __int64 v15; // rdi
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // r14
  unsigned int v19; // r13d
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // r14d
  _DWORD *v24; // r13
  __int64 v25; // r12
  __int64 v26; // rsi
  PSLIST_HEADER v27; // rax
  unsigned int v28; // esi
  __int64 v29; // rdx
  bool v30; // zf
  int v31; // eax
  int v32; // r9d
  unsigned int v33; // r14d
  unsigned int v34; // r8d
  struct _SLIST_ENTRY *v35; // rcx
  char v36; // r12
  __int64 v37; // r14
  _DWORD *v38; // r8
  unsigned int v39; // r13d
  bool v40; // cl
  unsigned int v41; // eax
  unsigned int v42; // r11d
  unsigned int v43; // esi
  int v44; // r13d
  int v45; // eax
  __int64 v46; // r12
  unsigned int v47; // r10d
  __int64 v48; // rsi
  __int64 v49; // r14
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r8
  int v53; // eax
  char v54; // cl
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // eax
  int v59; // eax
  _QWORD *v60; // r8
  char v61; // di
  __int64 v62; // rdx
  __int64 v63; // r14
  _QWORD *v64; // rbx
  int i; // edi
  __int64 v66; // rcx
  BOOL v67; // edx
  __int64 v68; // rbx
  int v69; // esi
  _QWORD **v70; // r14
  _QWORD *v71; // rax
  _QWORD **v72; // rax
  _QWORD *v73; // rcx
  int v74; // esi
  __int64 v75; // rdi
  __int64 v76; // rbx
  unsigned int v78; // ecx
  char *v79; // r12
  char *v80; // rcx
  char *v81; // rcx
  int v82; // eax
  bool v83; // r9
  int v84; // ecx
  char *v85; // rax
  unsigned __int64 v86; // rcx
  union _SLIST_HEADER *v87; // r11
  __int64 v88; // rdx
  __int64 v89; // r14
  __int64 v90; // rax
  bool v91; // cl
  __int64 v92; // rax
  int v93; // eax
  char v94; // cl
  int v95; // eax
  BOOL v96; // r8d
  __int64 v97; // rcx
  __int64 v98; // rax
  unsigned int *v99; // rax
  unsigned int v100; // edx
  unsigned int v101; // r8d
  __int64 v102; // rdx
  int v103; // eax
  char v104; // cl
  unsigned int v105; // r10d
  int v106; // eax
  unsigned int v107; // r9d
  char v108; // cl
  unsigned int v109; // eax
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // r14
  struct _SLIST_ENTRY *v113; // rcx
  bool v114; // r14
  __int64 v115; // rcx
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  __int64 v117; // rcx
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *v118; // rax
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *v119; // rsi
  __int64 v120; // rax
  int v121; // eax
  char v122; // cl
  int v123; // r8d
  int v124; // r10d
  __int64 v125; // r9
  __int64 v126; // rcx
  __int64 v127; // rdx
  int v128; // eax
  unsigned int v129; // r8d
  __int64 v130; // r11
  unsigned int v131; // r15d
  __int64 v132; // rdi
  int v133; // eax
  unsigned int *v134; // rax
  unsigned int v135; // edx
  unsigned int v136; // r8d
  unsigned int v137; // edx
  int v138; // eax
  char v139; // cl
  int v140; // eax
  unsigned int v141; // r10d
  char v142; // cl
  unsigned int v143; // eax
  unsigned __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rcx
  int v147; // edx
  __int64 v148; // r8
  int v149; // edi
  __int64 v150; // r10
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // r15
  __int64 v156; // rdi
  char v157; // cl
  int v158; // eax
  void (__fastcall *v159)(_QWORD, __int64, __int64, __int64); // rax
  _QWORD *v160; // rcx
  _QWORD *v161; // rdx
  _QWORD *v162; // rcx
  _QWORD *v163; // rdx
  int v165; // [rsp+68h] [rbp-98h]
  unsigned int v166; // [rsp+68h] [rbp-98h]
  unsigned int v167; // [rsp+6Ch] [rbp-94h]
  unsigned int v168; // [rsp+6Ch] [rbp-94h]
  unsigned int v169; // [rsp+70h] [rbp-90h]
  unsigned int v170; // [rsp+70h] [rbp-90h]
  int v171; // [rsp+74h] [rbp-8Ch]
  int v172; // [rsp+74h] [rbp-8Ch]
  unsigned int v173; // [rsp+78h] [rbp-88h]
  unsigned int v174; // [rsp+78h] [rbp-88h]
  __int64 v175; // [rsp+80h] [rbp-80h]
  __int64 v176; // [rsp+88h] [rbp-78h]
  __int64 v177; // [rsp+88h] [rbp-78h]
  PSLIST_HEADER ListHead; // [rsp+90h] [rbp-70h]
  PSLIST_HEADER ListHeada; // [rsp+90h] [rbp-70h]
  PSLIST_HEADER ListHeadb; // [rsp+90h] [rbp-70h]
  __int64 v181; // [rsp+98h] [rbp-68h]
  unsigned int v182; // [rsp+A0h] [rbp-60h]
  unsigned int v183; // [rsp+A4h] [rbp-5Ch]
  int v184; // [rsp+A8h] [rbp-58h]
  int v185; // [rsp+ACh] [rbp-54h]
  __int64 v187; // [rsp+B8h] [rbp-48h]
  unsigned int v188; // [rsp+D4h] [rbp-2Ch]
  _DWORD *v189; // [rsp+100h] [rbp+0h]
  _QWORD *v190; // [rsp+108h] [rbp+8h]
  __int64 v191; // [rsp+110h] [rbp+10h]
  __int64 v192; // [rsp+120h] [rbp+20h]
  __int64 v193; // [rsp+128h] [rbp+28h]
  _QWORD v194[2]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v195; // [rsp+140h] [rbp+40h]
  unsigned int v196; // [rsp+144h] [rbp+44h]
  unsigned int v197; // [rsp+148h] [rbp+48h]
  unsigned int v198; // [rsp+14Ch] [rbp+4Ch]
  unsigned int v199; // [rsp+150h] [rbp+50h]
  _QWORD v200[2]; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v201; // [rsp+168h] [rbp+68h]
  unsigned int v202; // [rsp+16Ch] [rbp+6Ch]
  int v203; // [rsp+170h] [rbp+70h]
  unsigned int v204; // [rsp+174h] [rbp+74h]
  unsigned int v205; // [rsp+178h] [rbp+78h]
  _BYTE *v206; // [rsp+180h] [rbp+80h]
  __int64 v207; // [rsp+188h] [rbp+88h]
  __int64 v208; // [rsp+190h] [rbp+90h]
  __int64 v209; // [rsp+198h] [rbp+98h]
  __int64 v210; // [rsp+1A0h] [rbp+A0h]
  _QWORD v211[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v212; // [rsp+1B8h] [rbp+B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD v214[44]; // [rsp+240h] [rbp+140h] BYREF

  v8 = a2;
  v209 = a2;
  v175 = a4;
  v206 = a8;
  if ( a8 )
    *a8 = 0;
  if ( !*(_DWORD *)(a2 + 804) )
    return 0LL;
  v187 = a3;
  v9 = *(_QWORD *)(a2 + 3200 + 8LL * a3);
  v191 = v9;
  v10 = a3;
  v190 = (_QWORD *)(a2 + 3200 + 8LL * a3);
  if ( !a4 )
    return 0LL;
  v11 = 4673;
  v12 = 0;
  v13 = 0;
  v14 = a5;
  v184 = 0;
  v185 = 0;
  while ( 1 )
  {
    v15 = a4 + 1376LL * v14;
    v16 = 0LL;
    v210 = v15;
    v181 = 0LL;
    v17 = *(_DWORD *)(v15 + 1172);
    v18 = v15 + 120;
    if ( v17 > 0xC || !_bittest(&v11, v17) )
    {
      v16 = *(_QWORD *)(v15 + 1160);
      v181 = v16;
    }
    v19 = a7;
    v20 = 1;
    v165 = 1;
    if ( a7 )
    {
      if ( a7 == 9 || a7 == 6 )
      {
        v96 = v17 > 0xC || !_bittest(&v11, v17);
        if ( a7 == 9 )
        {
          if ( v17 != 5 && v17 != 15 )
            v20 = 0;
          v165 = v20;
        }
        else if ( v17 == 5 || v17 == 15 || v17 == 13 )
        {
          v96 = 0;
        }
        if ( v17 - 7 <= 1 )
        {
          if ( *(_BYTE *)(v15 + 1197) )
            ++*(_QWORD *)(v16 + 8 * v10 + 376);
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 808));
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 2992));
          if ( *(_DWORD *)(v15 + 1172) == 8 && !*(_BYTE *)(v15 + 1197) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 4 * v10 + 1444));
            v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 32LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v16 + 32) + 4LL))
                            + 8 * v10
                            + 88);
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v10 + 6456) + 8LL));
            _InterlockedIncrement((volatile signed __int32 *)(v97 + 8));
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 736));
            v98 = v8;
            if ( *(_BYTE *)(v8 + 2212) )
              v98 = v8 + 4 * v10;
            _InterlockedIncrement((volatile signed __int32 *)(v98 + 740));
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 1572));
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 4 * v10 + 1508));
            v20 = v165;
          }
        }
        if ( !v96 )
        {
          v11 = 4673;
LABEL_295:
          v58 = a5;
LABEL_296:
          a4 = v175;
          goto LABEL_83;
        }
        if ( !*(_BYTE *)(v8 + 59) )
          goto LABEL_11;
        LOBYTE(v58) = a5;
      }
      else
      {
        if ( a7 != 12 )
          goto LABEL_295;
        if ( v17 - 2 > 1 && v17 != 14 )
        {
          if ( (v17 == 5 || v17 == 15) && (*(_DWORD *)(v15 + 1256) & 0x20) != 0 )
          {
            a4 = v175;
            v58 = a5;
            if ( v206 )
              *v206 = 1;
            goto LABEL_83;
          }
          goto LABEL_295;
        }
        v58 = a5;
        if ( (*(_DWORD *)(v15 + 1256) & 0x20) == 0 )
          goto LABEL_296;
      }
      *(_DWORD *)(v175 + 64) = ((_BYTE)v58 + 1) & 0x3F;
      goto LABEL_11;
    }
    if ( v17 - 10 > 1 )
      goto LABEL_295;
LABEL_11:
    v21 = *(_QWORD *)(v8 + 16);
    if ( *(_BYTE *)(v21 + 4648)
      && *(_DWORD *)(v21 + 288) == 1
      && *(_DWORD *)(v15 + 1172) == 11
      && (*(_DWORD *)(v15 + 1256) & 0x1000) == 0
      && !a7 )
    {
      v214[0] = -1;
      memset(&v214[1], 0, 0xA4uLL);
      `vector constructor iterator'(
        &v214[2],
        0x10uLL,
        0xAuLL,
        (void *(*)(void *))_MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_::_unnamed_type_PerPlane_);
      v214[0] = a3;
      v99 = *(unsigned int **)(v15 + 1296);
      v194[0] = v8;
      v194[1] = v99;
      v100 = *v99;
      v101 = *v99 & 0x3FF;
      v195 = v101;
      if ( *(_BYTE *)(v8 + 156) )
        v102 = (v100 >> 10) & 0x3FF;
      else
        v102 = 0LL;
      v30 = !_BitScanForward((unsigned int *)&v103, v101);
      v104 = -1;
      v196 = v102;
      v105 = 0;
      if ( !v30 )
        v104 = v103;
      v197 = 0;
      v30 = !_BitScanForward((unsigned int *)&v106, v102);
      v107 = v104;
      v108 = -1;
      if ( !v30 )
        v108 = v106;
      v198 = v107;
      v109 = v108;
      v199 = v108;
      while ( v101 || (_DWORD)v102 )
      {
        if ( v107 >= v109 )
        {
          v214[4 * v105 + 2] = v109;
          v111 = 0LL;
          LOBYTE(v214[4 * v105 + 3]) = 0;
        }
        else
        {
          v110 = *(_QWORD *)(v15 + 1296);
          v214[4 * v105 + 2] = v107;
          LOBYTE(v214[4 * v105 + 3]) = 1;
          v111 = *(_QWORD *)(((unsigned __int64)v105 << 6)
                           + v110
                           + *(_DWORD *)(v110 + 4) * ((8 * *(_DWORD *)(v110 + 8) + 231) & 0xFFFFFFF8)
                           + 24);
        }
        *(_QWORD *)&v214[4 * v105 + 4] = v111;
        ++v214[1];
        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v194);
        v109 = v199;
        v102 = v196;
        v101 = v195;
        v107 = v198;
        v105 = v197;
      }
      ((void (__fastcall *)(_QWORD, __int64, _DWORD *))DxgCoreInterface[83])(*(_QWORD *)(v8 + 16), v102, v214);
LABEL_13:
      if ( (*(_DWORD *)(v15 + 1256) & 0x10) != 0 )
        v173 = ((unsigned __int16)**(_DWORD **)(v15 + 1296) | (unsigned __int16)(**(_DWORD **)(v15 + 1296) >> 10)) & 0x3FF;
      else
        v173 = (1 << *(_DWORD *)(v8 + 152)) - 1;
      goto LABEL_15;
    }
    if ( a7 != 9 || !v20 )
      goto LABEL_13;
    v173 = VidSchiDecrementPendingFlipsForFlipEntry(
             (struct _VIDSCH_GLOBAL *)v8,
             (struct _VIDSCH_PRESENT_INFO *)v9,
             (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v15 + 120));
LABEL_15:
    if ( *(_QWORD *)(v9 + 112) == v18 )
      *(_QWORD *)(v9 + 112) = 0LL;
    v22 = *(_QWORD *)(v15 + 1280);
    *(_DWORD *)(v15 + 1172) = a7;
    if ( v22 )
    {
      v112 = *(_QWORD *)(*(_QWORD *)(v15 + 1296) + 200LL);
      if ( v112 )
      {
        memset(&v212, 0, sizeof(v212));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v22 + 16), &v212);
        _InterlockedIncrement((volatile signed __int32 *)(v112 + 12));
        v113 = *(struct _SLIST_ENTRY **)(v22 + 8);
        if ( v113 )
          CRefCountedBuffer::RefCountedBufferRelease(v113);
        *(_QWORD *)(v22 + 8) = v112;
        KeReleaseInStackQueuedSpinLock(&v212);
      }
      *(_QWORD *)(v15 + 1280) = 0LL;
      v18 = v15 + 120;
    }
    VidSchiSignalRuntimeFenceForCompletedFlipEntry(v8, v18, a7, a1);
    v23 = 0;
    v24 = *(_DWORD **)(v15 + 1296);
    if ( *(_DWORD *)(v8 + 152) )
    {
      do
      {
        v25 = v23 * ((8 * v24[2] + 231) & 0xFFFFFFF8);
        v26 = *(_QWORD *)((char *)v24 + v25 + 200);
        if ( v26 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF) == 1 )
          {
            v27 = *(PSLIST_HEADER *)v26;
            ListHead = *(PSLIST_HEADER *)v26;
            if ( *(_QWORD *)v26 )
            {
              ++*((_DWORD *)&v27[1].HeaderX64 + 3);
              if ( ExQueryDepthSList(v27) < LOWORD(ListHead[1].Alignment) )
              {
                ExpInterlockedPushEntrySList(ListHead, (PSLIST_ENTRY)v26);
              }
              else
              {
                ++LODWORD(ListHead[2].Alignment);
                ((void (__fastcall *)(__int64, PSLIST_HEADER))ListHead[3].Region)(v26, ListHead);
              }
            }
            else
            {
              ExFreePoolWithTag((PVOID)v26, 0);
            }
          }
          *(_QWORD *)((char *)v24 + v25 + 200) = 0LL;
        }
        ++v23;
      }
      while ( v23 < *(_DWORD *)(v8 + 152) );
      v24 = *(_DWORD **)(v15 + 1296);
    }
    v28 = *v24 & 0x3FF;
    if ( *(_BYTE *)(v8 + 156) )
      v29 = (*v24 >> 10) & 0x3FF;
    else
      v29 = 0LL;
    v30 = !_BitScanForward((unsigned int *)&v31, v28);
    v167 = v29;
    v32 = 0;
    v171 = 0;
    if ( v30 )
      LOBYTE(v31) = -1;
    v33 = (char)v31;
    v30 = !_BitScanForward((unsigned int *)&v31, v29);
    if ( v30 )
      LOBYTE(v31) = -1;
    v34 = (char)v31;
    v169 = (char)v31;
    while ( v28 || (_DWORD)v29 )
    {
      v78 = v34;
      if ( v33 < v34 )
        v78 = v33;
      v79 = (char *)v24 + v78 * ((8 * v24[2] + 231) & 0xFFFFFFF8);
      v80 = (char *)*((_QWORD *)v79 + 26);
      if ( v80 )
      {
        VidSchiReleaseSyncObjectReference(v80, v29);
        v29 = v167;
        v34 = v169;
        v32 = v171;
        *((_QWORD *)v79 + 26) = 0LL;
      }
      v81 = (char *)*((_QWORD *)v79 + 28);
      if ( v81 )
      {
        if ( v33 >= v34 )
          goto LABEL_135;
        VidSchiReleaseSyncObjectReference(v81, v29);
        v29 = v167;
        v34 = v169;
        v32 = v171;
        *((_QWORD *)v79 + 28) = 0LL;
      }
      if ( v33 < v34 )
      {
        v28 &= ~(1 << v33);
        v30 = !_BitScanForward((unsigned int *)&v82, v28);
        if ( v30 )
          LOBYTE(v82) = -1;
        v33 = (char)v82;
        goto LABEL_119;
      }
LABEL_135:
      v94 = -1;
      v29 = ~(1 << v34) & (unsigned int)v29;
      v30 = !_BitScanForward((unsigned int *)&v95, v29);
      v167 = v29;
      if ( !v30 )
        v94 = v95;
      v34 = v94;
      v169 = v94;
LABEL_119:
      v171 = ++v32;
    }
    v35 = *(struct _SLIST_ENTRY **)(v15 + 1288);
    v9 = v191;
    if ( v35 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v35);
      *(_QWORD *)(v15 + 1288) = 0LL;
    }
    v19 = a7;
    if ( !a7 )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1736), &LockHandle);
      if ( (*(_DWORD *)(v15 + 1256) & 0x20) == 0 )
        *(_DWORD *)(*(_QWORD *)(v191 + 16) + 4 * v187 + 508) = *(_DWORD *)(v15 + 1176);
      *(_QWORD *)(*(_QWORD *)(v191 + 16) + 8 * v187 + 576) = *(_QWORD *)(v15 + 1248);
      *(_QWORD *)(*(_QWORD *)(v191 + 16) + 8 * v187 + 704) = *(_QWORD *)(v15 + 1232);
      *(_QWORD *)(*(_QWORD *)(v191 + 16) + 8 * v187 + 832) = *(_QWORD *)(v15 + 1240);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    if ( (*(_DWORD *)(v15 + 1256) & 0x20) == 0 || !*(_QWORD *)(v15 + 1272) )
    {
      v36 = a3;
      goto LABEL_43;
    }
    v114 = 1;
    if ( !a7 )
      goto LABEL_225;
    if ( a7 != 9 )
    {
      if ( a7 == 6 )
      {
        FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(v15 + 1440));
        if ( FlipManagerAuxiliaryPresentInfo )
          *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 7) = 0;
        v117 = 0LL;
        if ( *(_QWORD *)(v15 + 1448) )
          v117 = v15 + 1448;
        VidSchiPropagatePresentHistoryToken(
          (struct _VIDSCH_GLOBAL *)v8,
          *(PKSPIN_LOCK *)(v15 + 1264),
          *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v15 + 1272),
          1,
          (*(_DWORD *)(v15 + 1256) & 0x40) != 0,
          0,
          0,
          *(_QWORD *)(v15 + 1280),
          *(_QWORD *)(v15 + 1296),
          0LL,
          v117,
          1);
        goto LABEL_225;
      }
LABEL_214:
      v114 = 0;
LABEL_215:
      v36 = a3;
      goto LABEL_216;
    }
    if ( !v165 )
      goto LABEL_214;
LABEL_225:
    v118 = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(v15 + 1440));
    v119 = v118;
    if ( !v118 )
      goto LABEL_215;
    *((_DWORD *)v118 + 7) = 1;
    v120 = a7 ? 0LL : *(_QWORD *)(v15 + 1232);
    v36 = a3;
    *((_QWORD *)v119 + 4) = v120;
    *((_DWORD *)v119 + 10) = VidSchiGetCurrentVSyncPeriodQpc((struct _VIDSCH_GLOBAL *)v8, a3, 1);
LABEL_216:
    v115 = 0LL;
    if ( *(_QWORD *)(v15 + 1448) )
      v115 = v15 + 1448;
    VidSchiPropagatePresentHistoryToken(
      (struct _VIDSCH_GLOBAL *)v8,
      *(PKSPIN_LOCK *)(v15 + 1264),
      *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v15 + 1272),
      v114,
      (*(_DWORD *)(v15 + 1256) & 0x40) != 0,
      0,
      0,
      *(_QWORD *)(v15 + 1280),
      *(_QWORD *)(v15 + 1296),
      0LL,
      v115,
      0);
LABEL_43:
    v37 = v181;
    if ( bTracingEnabled && a7 )
    {
      v30 = !_BitScanForward((unsigned int *)&v121, v173);
      v122 = -1;
      if ( !v30 )
        v122 = v121;
      v123 = v122;
      if ( v181 )
      {
        v29 = *(_QWORD *)(v181 + 8);
        v124 = *(_DWORD *)(v8 + 2544);
        if ( !v29 )
          v29 = v181;
      }
      else
      {
        LOBYTE(v124) = 0;
        v29 = 0LL;
      }
      v125 = *(_QWORD *)(v15 + 1296);
      if ( (byte_1C006E941 & 1) != 0 )
      {
        v126 = *(_DWORD *)(v125 + 4) * ((8 * *(_DWORD *)(v125 + 8) + 231) & 0xFFFFFFF8);
        McTemplateK0pxqqpqx_EtwWriteTransfer(
          v126,
          v29,
          v123,
          *(_QWORD *)(v8 + 16),
          *(_QWORD *)(v126 + v125 + 40),
          v36,
          *(_DWORD *)(v15 + 1176),
          v29,
          v124,
          v123);
      }
    }
    v38 = *(_DWORD **)(v15 + 1296);
    v189 = v38;
    if ( (*v38 & 0x3FF) != 0 )
    {
      v39 = *(_DWORD *)(v15 + 1200);
      v182 = v39;
      v40 = a7 != 0;
      v41 = *(_DWORD *)(v15 + 1204);
      v42 = 0;
      v183 = v41;
      v168 = 0;
      if ( v39 )
      {
        do
        {
          if ( (v39 & 1) != 0 )
          {
            if ( (v41 & 1) != 0 )
            {
              v43 = *v38 & 0x3FF;
              if ( *(_BYTE *)(v8 + 156) )
                v29 = (*v38 >> 10) & 0x3FF;
              else
                v29 = 0LL;
              v44 = 0;
              v166 = v29;
              v30 = !_BitScanForward((unsigned int *)&v45, v43);
              v172 = 0;
              if ( v30 )
                LOBYTE(v45) = -1;
              v46 = (unsigned int)(char)v45;
              v30 = !_BitScanForward((unsigned int *)&v45, v29);
              if ( v30 )
                LOBYTE(v45) = -1;
              v47 = (char)v45;
              v170 = (char)v45;
              while ( v43 || (_DWORD)v29 )
              {
                if ( (unsigned int)v46 >= v47 )
                  goto LABEL_286;
                v83 = v40;
                v84 = v38[1];
                v85 = (char *)v38 + v84 * ((8 * v38[2] + 231) & 0xFFFFFFF8);
                v86 = (unsigned __int64)(v44 + v42 * v84) << 6;
                v87 = *(union _SLIST_HEADER **)&v85[v86 + 72];
                v88 = *(_QWORD *)&v85[v86 + 64];
                v89 = *(_QWORD *)&v85[v86 + 48];
                ListHeada = v87;
                v176 = v88;
                if ( a7 && v87 && a3 != -1 )
                {
                  v127 = *v190;
                  v192 = *v190;
                  if ( *v190 )
                  {
                    v128 = *(_DWORD *)(v127 + 3000);
                    if ( _bittest(&v128, v46) )
                    {
                      v129 = 0;
                      do
                      {
                        if ( v129 )
                          v130 = *(_QWORD *)(v127 + 8 * v46 + 32);
                        else
                          v130 = *(_QWORD *)(v127 + 24);
                        ++v129;
                        v131 = *(_DWORD *)(v130 + 72);
                        v193 = v130;
                        v174 = v129;
                        if ( v131 != (((unsigned __int8)*(_DWORD *)(v130 + 68) - 1) & 0x3F) )
                        {
                          while ( 2 )
                          {
                            v132 = v130 + 1376LL * v131;
                            v208 = v132;
                            v133 = *(_DWORD *)(v132 + 1172);
                            if ( v133 == 5 || v133 == 15 )
                            {
                              v134 = *(unsigned int **)(v132 + 1296);
                              v200[0] = v8;
                              v200[1] = v134;
                              v135 = *v134;
                              v136 = *v134 & 0x3FF;
                              v30 = *(_BYTE *)(v8 + 156) == 0;
                              v201 = v136;
                              if ( v30 )
                                v137 = 0;
                              else
                                v137 = (v135 >> 10) & 0x3FF;
                              v30 = !_BitScanForward((unsigned int *)&v138, v136);
                              v139 = -1;
                              if ( !v30 )
                                v139 = v138;
                              v30 = !_BitScanForward((unsigned int *)&v140, v137);
                              v141 = v139;
                              v142 = -1;
                              if ( !v30 )
                                v142 = v140;
                              v202 = v137;
                              v143 = v142;
                              v205 = v142;
                              v203 = 0;
                              v204 = v141;
                              while ( v136 || v137 )
                              {
                                if ( v141 < v143 )
                                {
                                  v147 = 0;
                                  v188 = *(_DWORD *)(v132 + 1216);
                                  if ( v188 )
                                  {
                                    v148 = *(_QWORD *)(v132 + 1296);
                                    v207 = *(_QWORD *)(v89 + 96);
                                    v149 = *(_DWORD *)(v148 + 4);
                                    v150 = v149 * ((8 * *(_DWORD *)(v148 + 8) + 231) & 0xFFFFFFF8);
                                    while ( v207 != *(_QWORD *)(*(_QWORD *)(v148
                                                                          + ((unsigned __int64)(unsigned int)(v203 + v147 * v149) << 6)
                                                                          + v150
                                                                          + 48)
                                                              + 96LL) )
                                    {
                                      if ( ++v147 >= v188 )
                                      {
                                        v132 = v208;
                                        goto LABEL_274;
                                      }
                                    }
                                    v87 = ListHeada;
                                    v151 = v150 + ((unsigned __int64)(unsigned int)(v203 + v147 * v149) << 6);
                                    if ( (unsigned __int64)ListHeada >= *(_QWORD *)(v151 + v148 + 72) )
                                    {
                                      *(_QWORD *)(v151 + v148 + 72) = ListHeada;
                                      v152 = *(_QWORD *)(*(_QWORD *)(v89 + 96) + 24LL);
                                      v153 = 2LL * *(unsigned int *)(v152 + 32);
                                      *(_OWORD *)(v152 + 8 * v153 + 40) = 0LL;
                                      *(_DWORD *)(v152 + 32) = ((unsigned __int8)*(_DWORD *)(v152 + 32) + 1) & 7;
                                      *(_DWORD *)(v152 + 8 * v153 + 40) = 4;
                                      *(_QWORD *)(v152 + 8 * v153 + 48) = ListHeada;
                                    }
                                    v38 = v189;
                                    v83 = 0;
                                    v47 = v170;
                                    goto LABEL_267;
                                  }
                                }
LABEL_274:
                                VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v200);
                                v143 = v205;
                                v137 = v202;
                                v136 = v201;
                                v141 = v204;
                              }
                              v130 = v193;
                              v131 = ((_BYTE)v131 - 1) & 0x3F;
                              if ( v131 != (((unsigned __int8)*(_DWORD *)(v193 + 68) - 1) & 0x3F) )
                                continue;
                            }
                            break;
                          }
                          v129 = v174;
                          v127 = v192;
                        }
                      }
                      while ( v129 < 2 );
                      v38 = v189;
                      v47 = v170;
                      v87 = ListHeada;
                    }
                    v144 = (v168 + ((unsigned __int64)(unsigned int)v46 << 6)) << 6;
                    if ( *(_QWORD *)(v144 + v127 + 3096) == *(_QWORD *)(v89 + 96) )
                    {
                      v83 = 0;
                      if ( (unsigned __int64)v87 >= *(_QWORD *)(v144 + v127 + 3128) )
                      {
                        *(_QWORD *)(v144 + v127 + 3128) = v87;
                        v145 = *(_QWORD *)(*(_QWORD *)(v89 + 96) + 24LL);
                        v146 = 2LL * *(unsigned int *)(v145 + 32);
                        *(_OWORD *)(v145 + 8 * v146 + 40) = 0LL;
                        *(_DWORD *)(v145 + 32) = ((unsigned __int8)*(_DWORD *)(v145 + 32) + 1) & 7;
                        *(_DWORD *)(v145 + 8 * v146 + 40) = 3;
                        *(_QWORD *)(v145 + 8 * v146 + 48) = v87;
                      }
                    }
                  }
LABEL_267:
                  v88 = v176;
                }
                v90 = *(_QWORD *)(v89 + 96);
                v91 = *(_QWORD *)(v90 + 24) == 0LL;
                _InterlockedDecrement((volatile signed __int32 *)(v89 + 104));
                v92 = *(_QWORD *)(v90 + 16);
                if ( v92 )
                  _InterlockedDecrement((volatile signed __int32 *)(v92 + 8));
                if ( v83 && !v91 )
                {
                  v154 = 0LL;
                  v211[0] = v88;
                  v155 = 0LL;
                  v211[1] = v87;
                  v177 = 0LL;
                  v156 = 2LL;
                  do
                  {
                    ListHeadb = *(PSLIST_HEADER *)((char *)v211 + v154);
                    if ( ListHeadb )
                    {
                      if ( (int)VidSchiSignalSyncObjectsFromCpu(
                                  (struct HwQueueStagingList *)a1,
                                  1u,
                                  (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*(_QWORD *)(v89 + 96) + 24LL) + 8 * v155),
                                  0,
                                  &v211[v155],
                                  0LL) < 0 )
                      {
                        WdLogSingleEntry3(
                          1LL,
                          v155,
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v89 + 96) + 24LL) + v177),
                          ListHeadb);
                        ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
                          0LL,
                          0x40000LL,
                          0xFFFFFFFFLL,
                          L"Failed to signal Flip fence[%d] 0x%p value 0x%I64x",
                          v155,
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v89 + 96) + 24LL) + v177),
                          ListHeadb,
                          0LL,
                          0LL);
                      }
                      v154 = v177;
                    }
                    v154 += 8LL;
                    ++v155;
                    v177 = v154;
                    --v156;
                  }
                  while ( v156 );
                  v8 = v209;
                  v38 = v189;
                  v47 = v170;
                  v44 = v172;
                }
                v29 = v166;
                v42 = v168;
                if ( (unsigned int)v46 >= v47 )
                {
LABEL_286:
                  v157 = -1;
                  v29 = ~(1 << v47) & (unsigned int)v29;
                  v30 = !_BitScanForward((unsigned int *)&v158, v29);
                  v166 = v29;
                  if ( !v30 )
                    v157 = v158;
                  v47 = v157;
                  v170 = v157;
                }
                else
                {
                  v43 &= ~(1 << v46);
                  v30 = !_BitScanForward((unsigned int *)&v93, v43);
                  if ( v30 )
                    LOBYTE(v93) = -1;
                  v46 = (unsigned int)(char)v93;
                }
                v40 = a7 != 0;
                v172 = ++v44;
              }
              v39 = v182;
              v41 = v183;
            }
            v168 = ++v42;
          }
          v39 >>= 1;
          v41 >>= 1;
          v182 = v39;
          v183 = v41;
        }
        while ( v39 );
        v15 = v210;
        v9 = v191;
        v37 = v181;
      }
      if ( v37 )
        VidSchiCheckPendingDeviceCommand((_QWORD *)v37);
      v19 = a7;
    }
    v48 = 0LL;
    if ( *(_DWORD *)(v15 + 1212) )
    {
      do
      {
        v49 = v15 + 8 * v48;
        v50 = *(_QWORD *)(v49 + 120);
        if ( (*(_DWORD *)(v15 + 1256) & 0x4000) != 0 )
        {
          if ( v50 )
          {
            VidSchiReleaseSyncObjectReference((char *)v50, v29);
            *(_QWORD *)(v49 + 120) = 0LL;
          }
        }
        else if ( v50 )
        {
          --*(_DWORD *)(v50 + 792);
        }
        v48 = (unsigned int)(v48 + 1);
      }
      while ( (unsigned int)v48 < *(_DWORD *)(v15 + 1212) );
      v37 = v181;
    }
    v12 = ++v184;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 1572), 0xFFFFFFFF);
    if ( *(_BYTE *)(v8 + 2212) )
      v51 = v8 + 4 * v187;
    else
      v51 = v8;
    _InterlockedDecrement((volatile signed __int32 *)(v51 + 740));
    _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 736), 0xFFFFFFFF);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 4LL * a3 + 1508), 0xFFFFFFFF);
    if ( (*(_DWORD *)(v15 + 1256) & 0x10) != 0 )
      v52 = ((unsigned __int16)**(_DWORD **)(v15 + 1296) | (unsigned __int16)(**(_DWORD **)(v15 + 1296) >> 10)) & 0x3FF;
    else
      v52 = (unsigned int)((1 << *(_DWORD *)(v8 + 152)) - 1);
    v30 = !_BitScanForward((unsigned int *)&v53, v52);
    v54 = -1;
    v55 = (unsigned int)v52;
    if ( !v30 )
      v54 = v53;
    if ( (_DWORD)v52 )
    {
      do
      {
        --*(_DWORD *)(280LL * v54 + *(_QWORD *)(v8 + 8LL * a3 + 3200) + 188);
        v56 = 1 << v54;
        v54 = -1;
        v55 = ~v56 & (unsigned int)v55;
        v30 = !_BitScanForward((unsigned int *)&v56, v55);
        if ( !v30 )
          v54 = v56;
      }
      while ( (_DWORD)v55 );
    }
    v13 = v52 | v185;
    v185 |= v52;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 4LL * a3 + 1444), 0xFFFFFFFF);
    --*(_DWORD *)(v37 + 1576);
    v57 = *(unsigned int *)(*(_QWORD *)(v8 + 8LL * a3 + 3200) + 44232LL);
    if ( (_DWORD)v57 != -1 )
    {
      v159 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v8 + 3072);
      if ( v159 )
        v159(*(_QWORD *)(v8 + 3120), v57, v52, v55);
    }
    a4 = v175;
    v11 = 4673;
    v58 = a5;
    v10 = v187;
    *(_DWORD *)(v175 + 76) = a5;
LABEL_83:
    if ( v58 == a6 )
      break;
    v14 = ((_BYTE)a5 + 1) & 0x3F;
    a5 = v14;
  }
  if ( v12 )
  {
    v30 = !_BitScanForward((unsigned int *)&v59, v13);
    if ( v30 )
      LOBYTE(v59) = -1;
    if ( v13 )
    {
      v60 = v190;
      do
      {
        v61 = v59;
        v62 = *(int *)(280LL * (unsigned int)(char)v59 + *v60 + 180);
        if ( (int)v62 > -1 && *(_DWORD *)(160 * v62 + *(_QWORD *)(v8 + 3328) + 112) == 1 )
        {
          VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)a1, (struct _VIDSCH_GLOBAL *)v8, a3, (char)v59);
          v60 = v190;
        }
        v13 &= ~(1 << v61);
        v30 = !_BitScanForward((unsigned int *)&v59, v13);
        if ( v30 )
          LOBYTE(v59) = -1;
      }
      while ( v13 );
      v9 = v191;
      v19 = a7;
    }
  }
  *(_DWORD *)(v8 + 804) -= v12;
  *(_DWORD *)(v9 + 2988) -= v12;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 808), -v12);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 2992), -v12);
  if ( !v19
    && _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 78576), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(v8 + 2456), 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v8 + 16) + 24LL));
    *(_QWORD *)(v8 + 2416) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v8 + 2424), CriticalWorkQueue);
  }
  v63 = *(_QWORD *)(v9 + 16);
  if ( v63 )
  {
    v64 = *(_QWORD **)(v63 + 72);
    for ( i = 0; v64 != (_QWORD *)(v63 + 72); i |= v67 )
    {
      v66 = (__int64)(v64 - 3);
      v67 = 0;
      if ( (v64[20] & 0x10) != 0 )
      {
        *(_DWORD *)(v66 + 184) &= ~0x10u;
        v67 = VidSchiUnwaitContext(v66, 0x580Du);
      }
      v64 = (_QWORD *)*v64;
    }
    v68 = *(_QWORD *)(v63 + 32);
    v69 = 0;
    v70 = (_QWORD **)(v68 + 3520);
    while ( 1 )
    {
      v71 = *v70;
      if ( *v70 == v70 )
        break;
      if ( (_QWORD **)v71[1] != v70 || (v160 = (_QWORD *)*v71, *(_QWORD **)(*v71 + 8LL) != v71) )
LABEL_306:
        __fastfail(3u);
      *v70 = v160;
      v160[1] = v70;
      v71[1] = 0LL;
      *v71 = 0LL;
      v69 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v71 - 5));
    }
    v72 = (_QWORD **)(v68 + 3536);
    while ( 1 )
    {
      v73 = *v72;
      if ( *v72 == v72 )
        break;
      if ( (_QWORD **)v73[1] != v72 )
        goto LABEL_306;
      v161 = (_QWORD *)*v73;
      if ( *(_QWORD **)(*v73 + 8LL) != v73 )
        goto LABEL_306;
      *v72 = v161;
      v161[1] = v72;
      *v73 = 0LL;
      v73[1] = 0LL;
      v162 = v73 + 19;
      if ( !*v162 )
      {
        v163 = *(_QWORD **)(a1 + 8);
        if ( *v163 != a1 )
          goto LABEL_306;
        *v162 = a1;
        v162[1] = v163;
        *v163 = v162;
        *(_QWORD *)(a1 + 8) = v162;
        *(_BYTE *)(a1 + 16) = 0;
      }
    }
    v74 = i | v69;
    v75 = *(_QWORD *)(v9 + 16);
    if ( v75 )
    {
      v76 = *(_QWORD *)(v75 + 32);
      VidSchiSignalRegisteredEvent(v76, v75 + 120);
      VidSchiSignalRegisteredEvent(v76, v75 + 136);
      VidSchiSignalRegisteredEvent(v76, v76 + 1672);
      VidSchiSignalRegisteredEvent(v76, v76 + 1656);
      *(_QWORD *)(v76 + 1504) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v76 + 1472), 0, 0);
      *(_QWORD *)(v76 + 1616) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v76 + 1584), 0, 0);
      if ( v74 )
      {
        *(_QWORD *)(v76 + 1224) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v76 + 1192), 0, 0);
      }
      VidSchiSignalRegisteredEvent(v76, v76 + 1688);
    }
  }
  return v12;
}
