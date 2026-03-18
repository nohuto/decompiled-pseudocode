/*
 * XREFs of VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSignalPagingFences @ 0x1C00AB498 (VidSchSignalPagingFences.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DACE0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0006CD0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009A80 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B770 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B800 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiFreeQueuePacket @ 0x1C000EE3C (VidSchiFreeQueuePacket.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EC80 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001F79E (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0097060 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0097180 (VidSchiAllocateQueuePacket.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C00972B0 (VidSchiEnsureVSyncEnabled.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00B8D3A (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        unsigned int a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        unsigned __int64 *a8)
{
  int v8; // r15d
  unsigned int v9; // edx
  __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 *v14; // rdi
  __int64 v15; // rcx
  int v16; // edx
  unsigned __int64 v17; // r9
  char v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  _QWORD **Pool2; // rsi
  unsigned int v22; // r14d
  unsigned __int64 v23; // rax
  KSPIN_LOCK *v24; // rcx
  _QWORD **v25; // r15
  __int64 QueuePacket; // rax
  __int64 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r11
  __int64 v30; // r8
  _DWORD *v31; // rdx
  __int64 v32; // rax
  KSPIN_LOCK *v33; // rcx
  unsigned int v34; // edi
  _QWORD *v35; // rax
  __int64 **v36; // rsi
  unsigned int v37; // r15d
  KPRIORITY v38; // ecx
  __int64 v39; // rax
  __int64 **v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rdi
  int v43; // ecx
  __int64 *v44; // rdx
  __int64 *v45; // rcx
  __int64 *v46; // rsi
  __int64 v47; // r15
  __int64 v48; // rdi
  struct _VIDSCH_QUEUE_PACKET *v49; // rcx
  __int64 v50; // r14
  __int64 v51; // r13
  _QWORD *v52; // r12
  __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rbx
  int v56; // r8d
  __int64 v57; // r13
  __int64 v58; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v60; // edi
  __int64 v61; // rax
  VIDMM_DEVICE *v62; // rcx
  unsigned int v63; // ebx
  unsigned __int64 v65; // r8
  unsigned __int64 *v66; // rdi
  int v67; // r14d
  __int64 v68; // r15
  __int64 v69; // r13
  __int64 v70; // rsi
  int v71; // edx
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  char v74; // r13
  int v75; // eax
  __int64 v76; // r8
  __int64 v77; // rax
  bool v78; // zf
  struct _KLOCK_QUEUE_HANDLE *v79; // rcx
  int v80; // ecx
  unsigned int v81; // eax
  CCHAR MostSignificantBit; // al
  unsigned __int64 v83; // r9
  const wchar_t *v84; // r9
  __int64 v85; // rdi
  struct _VIDSCH_QUEUE_PACKET *v86; // rdx
  unsigned __int64 v87; // r12
  unsigned __int64 v88; // r8
  unsigned int v89; // eax
  unsigned __int64 v90; // r12
  unsigned __int64 v91; // r8
  unsigned __int64 v92; // r8
  struct _KLOCK_QUEUE_HANDLE *v93; // rcx
  unsigned __int64 v94; // r8
  __int64 *v95; // r9
  unsigned int v96; // eax
  unsigned __int64 v97; // r8
  __int64 v98; // [rsp+50h] [rbp-B0h]
  __int64 v99; // [rsp+50h] [rbp-B0h]
  __int64 v100; // [rsp+58h] [rbp-A8h]
  __int64 v101; // [rsp+58h] [rbp-A8h]
  __int64 v102; // [rsp+58h] [rbp-A8h]
  __int64 v103; // [rsp+58h] [rbp-A8h]
  __int64 v104; // [rsp+58h] [rbp-A8h]
  __int64 v105; // [rsp+60h] [rbp-A0h]
  _QWORD *v106; // [rsp+60h] [rbp-A0h]
  __int64 v107; // [rsp+60h] [rbp-A0h]
  __int64 *v108; // [rsp+68h] [rbp-98h]
  int v109; // [rsp+70h] [rbp-90h] BYREF
  struct VIDSCH_HW_QUEUE *v110; // [rsp+78h] [rbp-88h]
  __int64 *v111; // [rsp+80h] [rbp-80h]
  unsigned __int64 v112; // [rsp+88h] [rbp-78h]
  _DWORD *v113; // [rsp+90h] [rbp-70h]
  _QWORD v114[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v115; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v116; // [rsp+C0h] [rbp-40h]
  __int64 v117; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE v118; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v119; // [rsp+E8h] [rbp-18h]
  KSPIN_LOCK *v120; // [rsp+F0h] [rbp-10h]
  struct _KLOCK_QUEUE_HANDLE v121; // [rsp+F8h] [rbp-8h] BYREF
  __int16 v122; // [rsp+110h] [rbp+10h]
  PVOID P; // [rsp+118h] [rbp+18h]
  _BYTE v124[16]; // [rsp+120h] [rbp+20h] BYREF
  int v125; // [rsp+130h] [rbp+30h]
  _QWORD v126[2]; // [rsp+138h] [rbp+38h] BYREF
  char v127; // [rsp+148h] [rbp+48h]
  __int64 v128; // [rsp+150h] [rbp+50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+158h] [rbp+58h] BYREF
  __int16 v130; // [rsp+170h] [rbp+70h]
  __int64 v131; // [rsp+178h] [rbp+78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v132; // [rsp+180h] [rbp+80h] BYREF
  __int16 v133; // [rsp+198h] [rbp+98h]
  __int64 v134; // [rsp+1A0h] [rbp+A0h]
  struct _KLOCK_QUEUE_HANDLE v135; // [rsp+1A8h] [rbp+A8h] BYREF
  __int16 v136; // [rsp+1C0h] [rbp+C0h]
  struct _KLOCK_QUEUE_HANDLE v137; // [rsp+1C8h] [rbp+C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v138; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v139; // [rsp+1F8h] [rbp+F8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v140; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v141[4]; // [rsp+228h] [rbp+128h] BYREF
  __int16 v142; // [rsp+248h] [rbp+148h]
  KPRIORITY Priority; // [rsp+2B0h] [rbp+1B0h]
  char Prioritya; // [rsp+2B0h] [rbp+1B0h]
  KPRIORITY Priorityb; // [rsp+2B0h] [rbp+1B0h]

  v8 = a3;
  v9 = a1;
  v114[0] = 0LL;
  if ( !a3 && !a1 )
  {
    v10 = a6;
    if ( a6 )
    {
      v11 = a5;
      if ( a5 )
      {
        v8 = 1;
        v114[0] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a6 + 8LL) + 248LL);
        a4 = v114;
        goto LABEL_4;
      }
    }
    WdLogSingleEntry1(1LL, -1073741811LL);
    v84 = L"NULL VIDSCH_CONTEXT pointer, returning 0x%I64x";
LABEL_174:
    DxgCoreInterface[85](0LL, 0x40000LL, 0xFFFFFFFFLL, v84, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v10 = a6;
  if ( !a6 || (v11 = a5) == 0 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    v84 = L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x";
    goto LABEL_174;
  }
LABEL_4:
  v12 = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
  v105 = v12;
  if ( (a7 & 0x80000004) == 0 )
  {
    v130 = 0;
    v128 = v12 + 1728;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 1728), &LockHandle);
    v13 = 0LL;
    LOBYTE(v130) = 1;
    if ( !v11 )
      goto LABEL_16;
    v14 = a8;
    do
    {
      v15 = *(unsigned __int64 *)((char *)v14 + v10 - (_QWORD)a8);
      v16 = *(_DWORD *)(v15 + 48);
      if ( (unsigned int)(v16 - 4) <= 1 && !*(_BYTE *)(v15 + 28) )
      {
        v17 = *v14;
        v18 = *(_BYTE *)(v15 + 29);
        if ( *(_BYTE *)(v15 + 27) )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(v15 + 208) + 40LL);
        }
        else if ( v16 == 2 )
        {
          v19 = *(_QWORD *)(v15 + 64);
        }
        else
        {
          v19 = *(_QWORD *)(v15 + 88);
        }
        if ( v18 )
        {
          if ( v17 == v19 )
          {
            WdLogSingleEntry1(3LL, *v14);
          }
          else if ( v17 < v19 )
          {
            WdLogSingleEntry2(3LL, *v14, v19);
LABEL_177:
            WdLogSingleEntry2(2LL, a8[v13], -1073741811LL);
            ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Invalid monitored fence value 0x%I64x, returning 0x%I64x",
              a8[v13],
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            AcquireSpinLock::Release((AcquireSpinLock *)&v128);
            return 3221225485LL;
          }
        }
        else
        {
          if ( (int)v19 - (int)v17 > 0 )
          {
            WdLogSingleEntry2(3LL, (unsigned int)v17, (unsigned int)v19);
            goto LABEL_177;
          }
          if ( (_DWORD)v19 == (_DWORD)v17 )
            WdLogSingleEntry1(3LL, (unsigned int)v17);
        }
      }
      v13 = (unsigned int)(v13 + 1);
      ++v14;
    }
    while ( (unsigned int)v13 < v11 );
    if ( (_BYTE)v130 )
    {
LABEL_16:
      if ( HIBYTE(v130) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      LOBYTE(v130) = 0;
    }
    v9 = a1;
  }
  v20 = v9 + v8;
  P = 0LL;
  v125 = 0;
  if ( (unsigned int)v20 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v20 < 8 )
      goto LABEL_181;
    Pool2 = (_QWORD **)ExAllocatePool2(64LL, 8 * v20, 945908054LL);
    P = Pool2;
  }
  else
  {
    Pool2 = (_QWORD **)v124;
    v108 = (__int64 *)v124;
    P = v124;
    if ( !(_DWORD)v20 )
      goto LABEL_24;
    memset(v124, 0, 8LL * (unsigned int)v20);
    Pool2 = (_QWORD **)P;
  }
  v9 = a1;
  v108 = (__int64 *)Pool2;
LABEL_24:
  v125 = v20;
  if ( !Pool2 )
  {
LABEL_181:
    WdLogSingleEntry0(3LL);
    v63 = -1073741801;
    goto LABEL_107;
  }
  Priority = 0;
  v22 = 0;
  v113 = 0LL;
  if ( !(_DWORD)v20 )
  {
LABEL_50:
    v33 = (KSPIN_LOCK *)(v105 + 1728);
    if ( v113 )
    {
      v117 = v105 + 1728;
      v119 = 0;
      KeAcquireInStackQueuedSpinLock(v33, &v118);
      v34 = Priority;
      v35 = Pool2;
      v36 = (__int64 **)a8;
      v37 = 0;
      v106 = v35;
      LOBYTE(v119) = 1;
      while ( !*v35 || !v11 )
      {
LABEL_79:
        ++v35;
        ++v37;
        v106 = v35;
        if ( v37 > v34 )
        {
          v46 = v108;
          if ( (_BYTE)v119 )
          {
            if ( HIBYTE(v119) )
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v118);
            else
              KeReleaseInStackQueuedSpinLock(&v118);
            LOBYTE(v119) = 0;
          }
          v47 = v34 + 1;
          do
          {
            v48 = *v46;
            if ( *v46 )
            {
              v49 = (struct _VIDSCH_QUEUE_PACKET *)*v46;
              if ( *(_QWORD *)(v48 + 96) )
              {
                VidSchiSubmitCommandPacketToHwQueue(v49);
              }
              else
              {
                v50 = *(_QWORD *)(v48 + 88);
                v51 = *(_QWORD *)(v50 + 96);
                v52 = *(_QWORD **)(v50 + 104);
                v53 = *(_QWORD *)(v51 + 24);
                v107 = v53;
                VidSchiEnsureVSyncEnabled(v49, v52);
                v116 = 0;
                v114[1] = v53 + 1728;
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v53 + 1728), &v115);
                LOBYTE(v116) = 1;
                v54 = *(_QWORD *)(v50 + 144);
                *(_QWORD *)(v50 + 144) = v54 + 1;
                *(_QWORD *)(v48 + 112) = v54;
                v55 = MEMORY[0xFFFFF78000000320];
                v52[24] = v55 * KeQueryTimeIncrement();
                if ( !*(_DWORD *)(v48 + 48) )
                {
                  *(_QWORD *)(v50 + 176) = *(_QWORD *)(v48 + 112);
                  ++v52[199];
                }
                v56 = v51;
                v57 = v107;
                VidSchiProfilePerformanceTick(4, v107, v56, 0, 0LL, v48, 0LL, 0LL);
                v109 = 0;
                VidSchiInsertCommandToSoftwareQueue(v48, &v109);
                if ( (_BYTE)v116 )
                {
                  if ( HIBYTE(v116) )
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v115);
                  else
                    KeReleaseInStackQueuedSpinLock(&v115);
                  LOBYTE(v116) = 0;
                }
                v58 = *(_QWORD *)(*(_QWORD *)(v50 + 96) + 24LL);
                if ( (*(_DWORD *)(v58 + 2536) & 0x20) != 0 )
                {
                  CurrentThread = KeGetCurrentThread();
                  if ( CurrentThread == *(struct _KTHREAD **)(v58 + 168)
                    || CurrentThread == *(struct _KTHREAD **)(v58 + 176) )
                  {
                    Prioritya = 1;
                    if ( *(_DWORD *)(v50 + 780) )
                      goto LABEL_98;
                    v60 = 16;
                  }
                  else
                  {
                    Prioritya = 0;
                    if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
                    {
                      v60 = 31;
                    }
                    else
                    {
                      v60 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
                      if ( v60 <= 16 )
                        goto LABEL_98;
                    }
                  }
                  v133 = 0;
                  v131 = v58 + 2464;
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v58 + 2464), &v132);
                  v74 = Prioritya;
                  LOBYTE(v133) = 1;
                  while ( 2 )
                  {
                    v75 = *(_DWORD *)(v50 + 780);
                    if ( v74 )
                    {
                      if ( v75 )
                      {
LABEL_129:
                        v46 = v108;
                        v57 = v107;
                        if ( (_BYTE)v133 )
                        {
                          if ( HIBYTE(v133) )
                            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v132);
                          else
                            KeReleaseInStackQueuedSpinLock(&v132);
                        }
                        goto LABEL_98;
                      }
                    }
                    else if ( !v75 )
                    {
                      goto LABEL_129;
                    }
                    v76 = *(_QWORD *)(*(_QWORD *)(v50 + 96) + 24LL);
                    v100 = v76;
                    v77 = *(int *)(v50 + 392);
                    if ( (_DWORD)v77 == v60 )
                    {
LABEL_128:
                      Priorityb = *(_DWORD *)(v76 + 220);
                      if ( Priorityb == KeQueryPriorityThread(*(PKTHREAD *)(v58 + 168)) )
                        goto LABEL_129;
                      AcquireSpinLock::Release((AcquireSpinLock *)&v131);
                      KeSetPriorityThread(*(PKTHREAD *)(v58 + 168), Priorityb);
                      AcquireSpinLock::Acquire((AcquireSpinLock *)&v131);
                      continue;
                    }
                    break;
                  }
                  v80 = 0;
                  if ( (int)v77 > 16 )
                  {
                    v78 = (*(_DWORD *)(v76 + 4 * v77 + 2408))-- == 1;
                    if ( v78 )
                    {
                      v80 = 1;
                      *(_DWORD *)(v76 + 2472) &= ~(1 << *(_DWORD *)(v50 + 392));
                    }
                  }
                  if ( (unsigned int)v60 > 0x10
                    && (++*(_DWORD *)(v76 + 4LL * v60 + 2408), *(_DWORD *)(v76 + 4LL * v60 + 2408) == 1) )
                  {
                    *(_DWORD *)(v76 + 2472) |= 1 << v60;
                    *(_DWORD *)(v50 + 392) = v60;
                  }
                  else
                  {
                    *(_DWORD *)(v50 + 392) = v60;
                    if ( !v80 )
                      goto LABEL_128;
                  }
                  v81 = *(_DWORD *)(v76 + 2472);
                  if ( v81 )
                  {
                    MostSignificantBit = RtlFindMostSignificantBit(v81);
                    v76 = v100;
                    *(_DWORD *)(v100 + 220) = MostSignificantBit;
                  }
                  else
                  {
                    *(_DWORD *)(v76 + 220) = 16;
                  }
                  goto LABEL_128;
                }
LABEL_98:
                if ( v109 )
                {
                  *(_QWORD *)(v57 + 1224) = MEMORY[0xFFFFF78000000320];
                  KeSetEvent((PRKEVENT)(v57 + 1192), 0, 0);
                }
                v61 = v52[1];
                if ( v61 )
                {
                  v62 = *(VIDMM_DEVICE **)(v61 + 760);
                  if ( v62 )
                    VIDMM_DEVICE::EnsureSchedulable(v62, 1);
                }
                if ( (_BYTE)v116 )
                {
                  if ( HIBYTE(v116) )
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v115);
                  else
                    KeReleaseInStackQueuedSpinLock(&v115);
                }
              }
            }
            v108 = ++v46;
            --v47;
          }
          while ( v47 );
          if ( !(_BYTE)v119 )
          {
LABEL_106:
            v63 = 0;
            goto LABEL_107;
          }
          v78 = HIBYTE(v119) == 0;
          v79 = &v118;
LABEL_146:
          if ( v78 )
            KeReleaseInStackQueuedSpinLock(v79);
          else
            KeReleaseInStackQueuedSpinLockFromDpcLevel(v79);
          goto LABEL_106;
        }
      }
      v38 = Priority;
      v39 = v10 - (_QWORD)v36;
      v40 = v36;
      v99 = v10 - (_QWORD)v36;
      v41 = v11;
      while ( 1 )
      {
        v42 = *(__int64 *)((char *)v40 + v39);
        if ( v37 == v38 )
          break;
LABEL_77:
        _InterlockedIncrement((volatile signed __int32 *)(v42 + 36));
        ++v40;
        if ( !--v41 )
        {
          v36 = (__int64 **)a8;
          v35 = v106;
          v34 = Priority;
          goto LABEL_79;
        }
      }
      v43 = *(_DWORD *)(v42 + 48);
      if ( v43 != 4 )
      {
        switch ( v43 )
        {
          case 0:
            if ( !*(_QWORD *)(v42 + 64) )
              WdLogSingleEntry1(3LL, *(_QWORD *)(v42 + 16));
            *(_QWORD *)(v42 + 64) = 0LL;
            goto LABEL_75;
          case 1:
            v96 = *(_DWORD *)(v42 + 64);
            if ( v96 >= *(_DWORD *)(v42 + 60) )
              WdLogSingleEntry1(3LL, *(_QWORD *)(v42 + 16));
            else
              *(_DWORD *)(v42 + 64) = v96 + 1;
            goto LABEL_75;
          case 2:
            if ( !*(_BYTE *)(v42 + 27) )
            {
              v94 = *(_QWORD *)(v42 + 64);
              v95 = *v40;
              if ( v94 >= (unsigned __int64)*v40 )
                WdLogSingleEntry3(3LL, *(_QWORD *)(v42 + 16), v94, v95);
              else
                *(_QWORD *)(v42 + 64) = v95;
              goto LABEL_75;
            }
            v111 = *v40;
            v103 = *(_QWORD *)(v42 + 208);
            memset(&v139, 0, sizeof(v139));
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v103 + 8), &v139);
            v92 = *(_QWORD *)(v103 + 40);
            if ( v92 >= (unsigned __int64)v111 )
              WdLogSingleEntry3(3LL, *(_QWORD *)(v42 + 16), v92, v111);
            else
              *(_QWORD *)(v103 + 40) = v111;
            v93 = &v139;
            goto LABEL_226;
        }
        v39 = v99;
        if ( v43 != 5 )
          goto LABEL_76;
      }
      if ( *(_BYTE *)(v42 + 28) )
      {
LABEL_76:
        v38 = Priority;
        goto LABEL_77;
      }
      if ( !*(_BYTE *)(v42 + 27) )
      {
        if ( (a7 & 4) == 0 )
        {
          v44 = *v40;
          v45 = *(__int64 **)(v42 + 88);
          if ( *(_BYTE *)(v42 + 29) )
          {
            if ( v44 >= v45 )
            {
              if ( v44 == v45 )
                WdLogSingleEntry1(3LL, v44);
              goto LABEL_73;
            }
            WdLogSingleEntry2(3LL, v44, v45);
          }
          else
          {
            if ( (int)v45 - (int)v44 <= 0 )
            {
              if ( (_DWORD)v45 == (_DWORD)v44 )
                WdLogSingleEntry1(3LL, (unsigned int)v44);
              goto LABEL_73;
            }
            WdLogSingleEntry2(3LL, (unsigned int)v44, (unsigned int)v45);
          }
          WdLogSingleEntry3(3LL, *(_QWORD *)(v42 + 16), *(_QWORD *)(v42 + 88), *v40);
          goto LABEL_74;
        }
LABEL_73:
        *(_QWORD *)(v42 + 88) = *v40;
LABEL_74:
        WdLogSingleEntry4(4LL, v42, **(_QWORD **)(v42 + 64), *v40, *(unsigned __int8 *)(v42 + 28));
LABEL_75:
        v39 = v99;
        goto LABEL_76;
      }
      v111 = *v40;
      v104 = *(_QWORD *)(v42 + 208);
      memset(&v140, 0, sizeof(v140));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v104 + 8), &v140);
      v97 = *(_QWORD *)(v104 + 40);
      if ( v97 >= (unsigned __int64)v111 )
        WdLogSingleEntry3(3LL, *(_QWORD *)(v42 + 16), v97, v111);
      else
        *(_QWORD *)(v104 + 40) = v111;
      v93 = &v140;
LABEL_226:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v93);
      goto LABEL_75;
    }
    v134 = v105 + 1728;
    v136 = 0;
    KeAcquireInStackQueuedSpinLock(v33, &v135);
    LOBYTE(v136) = 1;
    v126[1] = v126;
    v126[0] = v126;
    v127 = 0;
    if ( !v11 )
    {
LABEL_144:
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v126);
      if ( !(_BYTE)v136 )
        goto LABEL_106;
      v78 = HIBYTE(v136) == 0;
      v79 = &v135;
      goto LABEL_146;
    }
    v66 = a8;
    v67 = (int)a8;
    v68 = v11;
    v69 = v10 - (_QWORD)a8;
    while ( 1 )
    {
      v70 = *(unsigned __int64 *)((char *)v66 + v69);
      v71 = *(_DWORD *)(v70 + 48);
      switch ( v71 )
      {
        case 4:
          goto LABEL_259;
        case 0:
          if ( !*(_QWORD *)(v70 + 64) )
            WdLogSingleEntry1(3LL, *(_QWORD *)(v70 + 16));
          *(_QWORD *)(v70 + 64) = 0LL;
          break;
        case 1:
          v89 = *(_DWORD *)(v70 + 64);
          if ( v89 >= *(_DWORD *)(v70 + 60) )
            WdLogSingleEntry1(3LL, *(_QWORD *)(v70 + 16));
          else
            *(_DWORD *)(v70 + 64) = v89 + 1;
          break;
        case 2:
          if ( *(_BYTE *)(v70 + 27) )
          {
            v87 = *v66;
            v101 = *(_QWORD *)(v70 + 208);
            memset(&v137, 0, sizeof(v137));
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v101 + 8), &v137);
            v88 = *(_QWORD *)(v101 + 40);
            if ( v88 >= v87 )
              WdLogSingleEntry3(3LL, *(_QWORD *)(v70 + 16), v88, v87);
            else
              *(_QWORD *)(v101 + 40) = v87;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v137);
          }
          else
          {
            v65 = *(_QWORD *)(v70 + 64);
            v83 = *v66;
            if ( v65 >= *v66 )
              WdLogSingleEntry3(3LL, *(_QWORD *)(v70 + 16), v65, v83);
            else
              *(_QWORD *)(v70 + 64) = v83;
          }
          break;
        case 5:
LABEL_259:
          if ( !*(_BYTE *)(v70 + 28) )
          {
            if ( *(_BYTE *)(v70 + 27) )
            {
              v90 = *v66;
              v102 = *(_QWORD *)(v70 + 208);
              memset(&v138, 0, sizeof(v138));
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v102 + 8), &v138);
              v91 = *(_QWORD *)(v102 + 40);
              if ( v91 >= v90 )
                WdLogSingleEntry3(3LL, *(_QWORD *)(v70 + 16), v91, v90);
              else
                *(_QWORD *)(v102 + 40) = v90;
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v138);
              break;
            }
            if ( (a7 & 4) != 0 )
            {
LABEL_139:
              *(_QWORD *)(v70 + 88) = *v66;
            }
            else
            {
              v72 = *v66;
              v73 = *(_QWORD *)(v70 + 88);
              if ( *(_BYTE *)(v70 + 29) )
              {
                if ( v72 >= v73 )
                {
                  if ( v72 == v73 )
                    WdLogSingleEntry1(3LL, *v66);
                  goto LABEL_139;
                }
                WdLogSingleEntry2(3LL, *v66, v73);
              }
              else
              {
                if ( (_DWORD)v73 == (_DWORD)v72 )
                {
                  WdLogSingleEntry1(3LL, (unsigned int)v72);
                  goto LABEL_139;
                }
                if ( (int)v73 - (int)v72 <= 0 )
                  goto LABEL_139;
                WdLogSingleEntry2(3LL, (unsigned int)v72, (unsigned int)v73);
              }
              WdLogSingleEntry3(3LL, *(_QWORD *)(v70 + 16), *(_QWORD *)(v70 + 88), *v66);
            }
            WdLogSingleEntry4(4LL, v70, **(_QWORD **)(v70 + 64), *v66, *(unsigned __int8 *)(v70 + 28));
          }
          break;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v70 + 36));
      if ( (a7 & 4) != 0 )
        LOBYTE(v65) = 1;
      else
        LODWORD(v65) = 0;
      VidSchiCompleteSignalSyncObject((unsigned int)v126, v70, v65, v67, 1);
      VidSchiReleaseSyncObjectReference((PVOID)v70);
      v67 += 8;
      ++v66;
      if ( !--v68 )
        goto LABEL_144;
    }
  }
  v23 = 0LL;
  v24 = (KSPIN_LOCK *)(v105 + 1728);
  v112 = 0LL;
  v25 = Pool2;
  while ( 1 )
  {
    v98 = 0LL;
    v110 = 0LL;
    if ( v22 < v9 )
      break;
    _mm_lfence();
    v120 = v24;
    v122 = 0;
    v98 = a4[v22 - v9];
    KeAcquireInStackQueuedSpinLock(v24, &v121);
    LOBYTE(v122) = 1;
    if ( *(_QWORD *)(v98 + 664) != v98 + 664 )
    {
      if ( HIBYTE(v122) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v121);
      else
        KeReleaseInStackQueuedSpinLock(&v121);
      LOBYTE(v122) = 0;
      goto LABEL_32;
    }
    if ( HIBYTE(v122) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v121);
    else
      KeReleaseInStackQueuedSpinLock(&v121);
    LOBYTE(v122) = 0;
LABEL_49:
    ++v22;
    v9 = a1;
    v23 = v112 + 8;
    v24 = (KSPIN_LOCK *)(v105 + 1728);
    ++v25;
    v112 += 8LL;
    if ( v22 >= (unsigned int)v20 )
      goto LABEL_50;
  }
  v141[0] = v24;
  v142 = 0;
  v110 = *(struct VIDSCH_HW_QUEUE **)(v23 + a2);
  AcquireSpinLock::Acquire((AcquireSpinLock *)v141);
  if ( *((struct VIDSCH_HW_QUEUE **)v110 + 20) == (struct VIDSCH_HW_QUEUE *)((char *)v110 + 160) )
  {
    AcquireSpinLock::Release((AcquireSpinLock *)v141);
    goto LABEL_49;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v141);
  if ( !v110 )
  {
LABEL_32:
    QueuePacket = VidSchiAllocateQueuePacket(v98, *(_DWORD *)(v98 + 796) == 0);
    goto LABEL_33;
  }
  QueuePacket = VidSchiAllocateHwQueuePacket(v110, 0LL);
LABEL_33:
  v27 = (__int64 *)&Pool2[v112 / 8];
  v111 = v27;
  *v27 = QueuePacket;
  if ( QueuePacket )
  {
    Priority = v22;
    *(_DWORD *)*v25 = 895576406;
    *((_DWORD *)*v25 + 12) = 5;
    (*v25)[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)*v25 + 13) = 2;
    v28 = *v27;
    if ( v110 )
      *(_QWORD *)(v28 + 96) = v110;
    else
      *(_QWORD *)(v28 + 88) = v98;
    (*v25)[13] = KeGetCurrentThread();
    (*v25)[9] = 0LL;
    *((_DWORD *)*v25 + 68) ^= (*((_DWORD *)*v25 + 68) ^ a7) & 1;
    if ( (a7 & 4) != 0 )
      *((_DWORD *)*v25 + 68) |= 4u;
    if ( *(_DWORD *)(*(_QWORD *)v10 + 48LL) == 2 )
      (*v25)[67] = *a8;
    if ( v11 )
    {
      v29 = v11;
      v30 = v10;
      do
      {
        *(_QWORD *)((char *)*v25 + 280 - v10 + v30) = *(_QWORD *)v30;
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v30 + 48LL) - 4) <= 1 )
          *(_QWORD *)((char *)*v25 + 536 - v10 + v30) = *(unsigned __int64 *)((char *)a8 + v30 - v10);
        v30 += 8LL;
        --v29;
      }
      while ( v29 );
      Pool2 = (_QWORD **)v108;
    }
    v31 = v113;
    *((_DWORD *)*v25 + 69) = v11;
    (*v25)[99] = 0LL;
    v32 = *v111;
    if ( v31 )
    {
      *(_QWORD *)(v32 + 800) = v31;
      *((_QWORD *)v31 + 99) = *v25;
    }
    else
    {
      *(_QWORD *)(v32 + 800) = 0LL;
    }
    v113 = *v25;
    goto LABEL_49;
  }
  v63 = -1073741801;
  WdLogSingleEntry2(3LL, -1073741801LL, 11480LL);
  if ( v22 )
  {
    v85 = v22;
    do
    {
      v86 = (struct _VIDSCH_QUEUE_PACKET *)*Pool2;
      if ( *Pool2 )
      {
        if ( *((_QWORD *)v86 + 12) )
          VidSchiFreeQueuePacket(v110, v86);
        else
          VidSchiFreeQueuePacket(v98);
      }
      ++Pool2;
      --v85;
    }
    while ( v85 );
    v63 = -1073741801;
  }
LABEL_107:
  if ( P != v124 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v63;
}
