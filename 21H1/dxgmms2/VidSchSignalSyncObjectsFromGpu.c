/*
 * XREFs of VidSchSignalSyncObjectsFromGpu @ 0x1C0007440
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSignalPagingFences @ 0x1C0075084 (VidSchSignalPagingFences.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B61F0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiSignalSyncObject @ 0x1C0007F20 (VidSchiSignalSyncObject.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0008090 (VidSchiInsertCommandToSoftwareQueue.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A580 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000AC50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BF88 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000C000 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiFreeQueuePacket @ 0x1C00108A8 (VidSchiFreeQueuePacket.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00115E0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C001217C (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037B40 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003C194 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007EA50 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiAllocateQueuePacket @ 0x1C007EB60 (VidSchiAllocateQueuePacket.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C007ECA0 (VidSchiEnsureVSyncEnabled.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00D49DC (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        unsigned __int64 *a8)
{
  int v8; // ebx
  unsigned int v9; // esi
  unsigned int v10; // edx
  __int64 v11; // r13
  unsigned int v12; // r12d
  KSPIN_LOCK *v13; // rcx
  unsigned int v14; // r14d
  unsigned __int64 *v15; // rdi
  __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 v18; // rax
  char v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD **v22; // rdi
  __int64 v23; // r14
  _QWORD *v24; // rax
  unsigned int v25; // r15d
  KSPIN_LOCK *v26; // rcx
  __int64 HwQueuePacket; // rax
  __int64 *v28; // rdx
  _DWORD **v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // r9
  _QWORD *v33; // rcx
  __int64 v34; // rax
  KSPIN_LOCK *v35; // rcx
  unsigned int v36; // r15d
  _QWORD *v37; // rax
  unsigned int v38; // r14d
  unsigned int v39; // r15d
  __int64 v40; // r12
  __int64 v41; // r14
  struct _VIDSCH_QUEUE_PACKET *v42; // rcx
  __int64 v43; // r15
  __int64 v44; // r13
  KSPIN_LOCK *v45; // rbx
  __int64 v46; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v48; // rcx
  int v49; // r8d
  struct _KEVENT *v50; // r13
  __int64 v51; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v53; // r14d
  __int64 v54; // rax
  VIDMM_DEVICE *v55; // rcx
  unsigned int v57; // edi
  int v58; // eax
  int v59; // esi
  PVOID *v60; // r15
  int v61; // r8d
  bool v62; // zf
  struct _KLOCK_QUEUE_HANDLE *v63; // rcx
  char v64; // r13
  int v65; // eax
  KSPIN_LOCK *v66; // r8
  __int64 v67; // rax
  int v68; // ecx
  unsigned int v69; // eax
  CCHAR MostSignificantBit; // al
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  _QWORD **PoolWithTag; // rax
  __int64 v75; // rax
  __int64 v76; // rbx
  struct _VIDSCH_QUEUE_PACKET *v77; // rdx
  unsigned int v78; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v79; // [rsp+48h] [rbp-B8h]
  _QWORD *v80; // [rsp+50h] [rbp-B0h]
  PVOID v81; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v82; // [rsp+60h] [rbp-A0h]
  __int64 v83; // [rsp+68h] [rbp-98h]
  struct VIDSCH_HW_QUEUE *v84; // [rsp+70h] [rbp-90h]
  _DWORD **v85; // [rsp+78h] [rbp-88h]
  int v86; // [rsp+80h] [rbp-80h]
  KSPIN_LOCK *v87; // [rsp+88h] [rbp-78h]
  _QWORD v88[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v89; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v90; // [rsp+B8h] [rbp-48h]
  char *v91; // [rsp+C0h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v92; // [rsp+C8h] [rbp-38h] BYREF
  __int16 v93; // [rsp+E0h] [rbp-20h]
  PVOID P; // [rsp+E8h] [rbp-18h]
  _BYTE v95[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v96; // [rsp+100h] [rbp+0h]
  KSPIN_LOCK *v97; // [rsp+108h] [rbp+8h]
  struct _KLOCK_QUEUE_HANDLE v98; // [rsp+110h] [rbp+10h] BYREF
  __int16 v99; // [rsp+128h] [rbp+28h]
  _QWORD v100[2]; // [rsp+130h] [rbp+30h] BYREF
  char v101; // [rsp+140h] [rbp+40h]
  KSPIN_LOCK *v102; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+150h] [rbp+50h] BYREF
  __int16 v104; // [rsp+168h] [rbp+68h]
  __int64 v105; // [rsp+170h] [rbp+70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v106; // [rsp+178h] [rbp+78h] BYREF
  __int16 v107; // [rsp+190h] [rbp+90h]
  __int64 *v108; // [rsp+198h] [rbp+98h]
  char *v109; // [rsp+1A0h] [rbp+A0h]
  struct _KLOCK_QUEUE_HANDLE v110; // [rsp+1A8h] [rbp+A8h] BYREF
  __int16 v111; // [rsp+1C0h] [rbp+C0h]
  _QWORD v112[4]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int16 v113; // [rsp+1E8h] [rbp+E8h]
  unsigned int v114; // [rsp+240h] [rbp+140h]
  KPRIORITY Priority; // [rsp+250h] [rbp+150h]
  KPRIORITY Prioritya; // [rsp+250h] [rbp+150h]
  char Priorityb; // [rsp+250h] [rbp+150h]
  KPRIORITY Priorityc; // [rsp+250h] [rbp+150h]

  Priority = a3;
  v114 = a1;
  v8 = a7;
  v9 = 0;
  v86 = a7;
  v10 = a1;
  v88[0] = 0LL;
  if ( (_DWORD)a3 || (_DWORD)a1 )
  {
    v11 = a6;
    if ( a6 )
    {
      v12 = a5;
      if ( a5 )
        goto LABEL_4;
    }
LABEL_135:
    v71 = WdLogNewEntry5_WdAssertion(a1, (unsigned int)a1, a3);
    *(_QWORD *)(v71 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v71);
    return 3221225485LL;
  }
  v11 = a6;
  if ( !a6 )
    goto LABEL_135;
  v12 = a5;
  if ( !a5 )
    goto LABEL_135;
  Priority = 1;
  v88[0] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a6 + 8LL) + 240LL);
  a4 = v88;
LABEL_4:
  v13 = *(KSPIN_LOCK **)(*(_QWORD *)v11 + 8LL);
  v81 = v13;
  if ( (a7 & 0x80000004) != 0 )
  {
LABEL_22:
    v22 = 0LL;
    v23 = v10 + Priority;
    P = 0LL;
    v96 = 0;
    LODWORD(v82) = v23;
    if ( (unsigned int)v23 > 2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (v10 + Priority) < 8 )
      {
LABEL_157:
        v9 = -1073741801;
        goto LABEL_91;
      }
      PoolWithTag = (_QWORD **)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v23, 0x38616956u);
      v10 = v114;
      v22 = PoolWithTag;
      P = PoolWithTag;
    }
    else
    {
      v22 = (_QWORD **)v95;
      P = v95;
    }
    v96 = v23;
    if ( !v22 )
      goto LABEL_157;
    if ( (_DWORD)v23 )
    {
      memset(v22, 0, 8 * v23);
      v10 = v114;
      v22 = (_QWORD **)P;
    }
    if ( !v22 )
      goto LABEL_157;
    Prioritya = 0;
    v24 = 0LL;
    v80 = 0LL;
    v25 = 0;
    if ( !(_DWORD)v23 )
      goto LABEL_54;
    v26 = (KSPIN_LOCK *)((char *)v81 + 1712);
    v83 = 0LL;
    v87 = (KSPIN_LOCK *)((char *)v81 + 1712);
    v85 = (_DWORD **)v22;
    while ( 1 )
    {
      v79 = 0LL;
      v84 = 0LL;
      if ( v25 < v10 )
      {
        v112[0] = v26;
        v113 = 0;
        v84 = *(struct VIDSCH_HW_QUEUE **)((char *)v24 + a2);
        AcquireSpinLock::Acquire((AcquireSpinLock *)v112);
        if ( *((struct VIDSCH_HW_QUEUE **)v84 + 20) == (struct VIDSCH_HW_QUEUE *)((char *)v84 + 160) )
        {
          AcquireSpinLock::Release((AcquireSpinLock *)v112);
          v29 = v85;
          goto LABEL_52;
        }
        AcquireSpinLock::Release((AcquireSpinLock *)v112);
        if ( v84 )
        {
          HwQueuePacket = VidSchiAllocateHwQueuePacket(v84, 0LL);
          goto LABEL_36;
        }
      }
      else
      {
        _mm_lfence();
        v97 = v26;
        v99 = 0;
        v79 = a4[v25 - v10];
        KeAcquireInStackQueuedSpinLock(v26, &v98);
        LOBYTE(v99) = 1;
        if ( *(_QWORD *)(v79 + 664) == v79 + 664 )
        {
          if ( HIBYTE(v99) )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v98);
          else
            KeReleaseInStackQueuedSpinLock(&v98);
          v29 = v85;
          LOBYTE(v99) = 0;
          goto LABEL_52;
        }
        if ( HIBYTE(v99) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v98);
        else
          KeReleaseInStackQueuedSpinLock(&v98);
        LOBYTE(v99) = 0;
      }
      HwQueuePacket = VidSchiAllocateQueuePacket(v79, *(_DWORD *)(v79 + 796) == 0);
LABEL_36:
      v28 = (__int64 *)((char *)v22 + v83);
      v108 = v28;
      *v28 = HwQueuePacket;
      if ( !HwQueuePacket )
      {
        v75 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v75 + 24) = -1073741801LL;
        *(_QWORD *)(v75 + 32) = 11181LL;
        WdLogEvent5_WdWarning(v75);
        if ( v25 )
        {
          v76 = v25;
          do
          {
            v77 = (struct _VIDSCH_QUEUE_PACKET *)*v22;
            if ( *v22 )
            {
              if ( *((_QWORD *)v77 + 12) )
                VidSchiFreeQueuePacket(v84, v77);
              else
                VidSchiFreeQueuePacket(v79);
            }
            ++v22;
            --v76;
          }
          while ( v76 );
        }
        v22 = (_QWORD **)P;
        goto LABEL_157;
      }
      v29 = v85;
      Prioritya = v25;
      **v85 = 895576406;
      (*v29)[12] = 5;
      *((_QWORD *)*v29 + 7) = MEMORY[0xFFFFF78000000320];
      (*v29)[13] = 2;
      v30 = *v28;
      if ( v84 )
        *(_QWORD *)(v30 + 96) = v84;
      else
        *(_QWORD *)(v30 + 88) = v79;
      *((_QWORD *)*v29 + 13) = KeGetCurrentThread();
      *((_QWORD *)*v29 + 9) = 0LL;
      (*v29)[68] ^= ((*v29)[68] ^ v8) & 1;
      if ( (v8 & 4) != 0 )
        (*v29)[68] |= 4u;
      if ( *(_DWORD *)(*(_QWORD *)v11 + 44LL) == 2 )
        *((_QWORD *)*v29 + 67) = *a8;
      if ( v12 )
      {
        v31 = v12;
        v32 = v11;
        do
        {
          *(_QWORD *)((char *)*v29 + 280 - v11 + v32) = *(_QWORD *)v32;
          if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v32 + 44LL) - 4) <= 1 )
            *(_QWORD *)((char *)*v29 + 536 - v11 + v32) = *(unsigned __int64 *)((char *)a8 + v32 - v11);
          v32 += 8LL;
          --v31;
        }
        while ( v31 );
        v8 = v86;
        LODWORD(v23) = v82;
      }
      v33 = v80;
      (*v29)[69] = v12;
      *((_QWORD *)*v29 + 99) = 0LL;
      v34 = *v108;
      if ( v33 )
      {
        *(_QWORD *)(v34 + 800) = v33;
        v33[99] = *v29;
      }
      else
      {
        *(_QWORD *)(v34 + 800) = 0LL;
      }
      v80 = *v29;
LABEL_52:
      v10 = v114;
      v24 = (_QWORD *)(v83 + 8);
      v26 = v87;
      ++v25;
      v83 += 8LL;
      v85 = v29 + 1;
      if ( v25 >= (unsigned int)v23 )
      {
        v24 = v80;
LABEL_54:
        v35 = (KSPIN_LOCK *)((char *)v81 + 1712);
        if ( v24 )
        {
          v91 = (char *)v81 + 1712;
          v93 = 0;
          KeAcquireInStackQueuedSpinLock(v35, &v92);
          v36 = Prioritya;
          v37 = v22;
          v80 = v22;
          v38 = 0;
          LOBYTE(v93) = 1;
          v78 = 0;
          do
          {
            if ( *v37 )
            {
              v39 = 0;
              if ( v12 )
              {
                if ( v38 == Prioritya )
                {
                  do
                    VidSchiSignalSyncObject(v39++, v11, v8, (_DWORD)a8, 1);
                  while ( v39 < v12 );
                  v38 = v78;
                }
                else
                {
                  do
                    VidSchiSignalSyncObject(v39++, v11, v8, (_DWORD)a8, 0);
                  while ( v39 < v12 );
                  v9 = 0;
                }
                v37 = v80;
              }
              v36 = Prioritya;
            }
            ++v38;
            ++v37;
            v78 = v38;
            v80 = v37;
          }
          while ( v38 <= v36 );
          if ( (_BYTE)v93 )
          {
            if ( HIBYTE(v93) )
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v92);
            else
              KeReleaseInStackQueuedSpinLock(&v92);
            LOBYTE(v93) = 0;
          }
          v40 = v36 + 1;
          v83 = v40;
          while ( 1 )
          {
            v41 = (__int64)*v22;
            if ( *v22 )
            {
              v42 = (struct _VIDSCH_QUEUE_PACKET *)*v22;
              if ( !*(_QWORD *)(v41 + 96) )
              {
                v43 = *(_QWORD *)(v41 + 88);
                v44 = *(_QWORD *)(v43 + 96);
                v80 = *(_QWORD **)(v43 + 104);
                v81 = *(PVOID *)(v44 + 24);
                v45 = (KSPIN_LOCK *)v81;
                VidSchiEnsureVSyncEnabled(v42, v80);
                v90 = 0;
                v88[1] = v45 + 214;
                KeAcquireInStackQueuedSpinLock(v45 + 214, &v89);
                LOBYTE(v90) = 1;
                *(_QWORD *)(v41 + 112) = (*(_QWORD *)(v43 + 144))++;
                v46 = MEMORY[0xFFFFF78000000320];
                TimeIncrement = KeQueryTimeIncrement();
                v48 = v80;
                v80[24] = v46 * TimeIncrement;
                if ( !*(_DWORD *)(v41 + 48) )
                {
                  *(_QWORD *)(v43 + 176) = *(_QWORD *)(v41 + 112);
                  ++v48[199];
                }
                v49 = v44;
                v50 = (struct _KEVENT *)v81;
                VidSchiProfilePerformanceTick(4, (_DWORD)v81, v49, 0, 0LL, v41, 0LL, 0LL);
                v78 = 0;
                VidSchiInsertCommandToSoftwareQueue(v41, &v78);
                if ( (_BYTE)v90 )
                {
                  if ( HIBYTE(v90) )
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v89);
                  else
                    KeReleaseInStackQueuedSpinLock(&v89);
                  LOBYTE(v90) = 0;
                }
                v51 = *(_QWORD *)(*(_QWORD *)(v43 + 96) + 24LL);
                if ( (*(_DWORD *)(v51 + 2448) & 0x20) == 0 )
                  goto LABEL_82;
                CurrentThread = KeGetCurrentThread();
                if ( CurrentThread == *(struct _KTHREAD **)(v51 + 160)
                  || CurrentThread == *(struct _KTHREAD **)(v51 + 168) )
                {
                  Priorityb = 1;
                  if ( *(_DWORD *)(v43 + 780) )
                    goto LABEL_82;
                  v53 = 16;
                }
                else
                {
                  Priorityb = 0;
                  if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
                  {
                    v53 = 31;
                  }
                  else
                  {
                    v53 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
                    if ( v53 <= 16 )
                    {
LABEL_82:
                      if ( v78 )
                      {
                        v50[50].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
                        KeSetEvent(v50 + 49, 0, 0);
                      }
                      v54 = v80[1];
                      if ( v54 )
                      {
                        v55 = *(VIDMM_DEVICE **)(v54 + 760);
                        if ( v55 )
                          VIDMM_DEVICE::EnsureSchedulable(v55, 1);
                      }
                      if ( (_BYTE)v90 )
                      {
                        if ( HIBYTE(v90) )
                          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v89);
                        else
                          KeReleaseInStackQueuedSpinLock(&v89);
                      }
                      goto LABEL_88;
                    }
                  }
                }
                v107 = 0;
                v105 = v51 + 2376;
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v51 + 2376), &v106);
                v64 = Priorityb;
                LOBYTE(v107) = 1;
                while ( 1 )
                {
                  v65 = *(_DWORD *)(v43 + 780);
                  if ( v64 )
                  {
                    if ( v65 )
                      break;
                  }
                  else if ( !v65 )
                  {
                    break;
                  }
                  v66 = *(KSPIN_LOCK **)(*(_QWORD *)(v43 + 96) + 24LL);
                  v87 = v66;
                  v67 = *(int *)(v43 + 392);
                  if ( (_DWORD)v67 != v53 )
                  {
                    v68 = 0;
                    if ( (int)v67 > 16 )
                    {
                      v62 = (*((_DWORD *)v66 + v67 + 580))-- == 1;
                      if ( v62 )
                      {
                        v68 = 1;
                        *((_DWORD *)v66 + 596) &= ~(1 << *(_DWORD *)(v43 + 392));
                      }
                    }
                    if ( v53 > 16 && ++*((_DWORD *)v66 + v53 + 580) == 1 )
                    {
                      v68 = 1;
                      *((_DWORD *)v66 + 596) |= 1 << v53;
                    }
                    *(_DWORD *)(v43 + 392) = v53;
                    if ( v68 )
                    {
                      v69 = *((_DWORD *)v66 + 596);
                      if ( v69 )
                      {
                        MostSignificantBit = RtlFindMostSignificantBit(v69);
                        v66 = v87;
                        *((_DWORD *)v87 + 53) = MostSignificantBit;
                      }
                      else
                      {
                        *((_DWORD *)v66 + 53) = 16;
                      }
                    }
                  }
                  Priorityc = *((_DWORD *)v66 + 53);
                  if ( Priorityc == KeQueryPriorityThread(*(PKTHREAD *)(v51 + 160)) )
                    break;
                  AcquireSpinLock::Release((AcquireSpinLock *)&v105);
                  KeSetPriorityThread(*(PKTHREAD *)(v51 + 160), Priorityc);
                  AcquireSpinLock::Acquire((AcquireSpinLock *)&v105);
                }
                v40 = v83;
                v50 = (struct _KEVENT *)v81;
                if ( (_BYTE)v107 )
                {
                  if ( HIBYTE(v107) )
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v106);
                  else
                    KeReleaseInStackQueuedSpinLock(&v106);
                }
                goto LABEL_82;
              }
              VidSchiSubmitCommandPacketToHwQueue(v42);
            }
LABEL_88:
            ++v22;
            v83 = --v40;
            if ( !v40 )
            {
              if ( !(_BYTE)v93 )
                goto LABEL_90;
              v62 = HIBYTE(v93) == 0;
              v63 = &v92;
LABEL_109:
              if ( v62 )
                KeReleaseInStackQueuedSpinLock(v63);
              else
                KeReleaseInStackQueuedSpinLockFromDpcLevel(v63);
              goto LABEL_90;
            }
          }
        }
        v109 = (char *)v81 + 1712;
        v111 = 0;
        KeAcquireInStackQueuedSpinLock(v35, &v110);
        LOBYTE(v111) = 1;
        v100[1] = v100;
        v100[0] = v100;
        v57 = 0;
        v101 = 0;
        if ( v12 )
        {
          v58 = (int)a8;
          v59 = (int)a8;
          v60 = (PVOID *)v11;
          do
          {
            v81 = *v60;
            VidSchiSignalSyncObject(v57, v11, v8, v58, 1);
            if ( (v8 & 4) != 0 )
              LOBYTE(v61) = 1;
            else
              v61 = 0;
            VidSchiCompleteSignalSyncObject((unsigned int)v100, (_DWORD)v81, v61, v59, 1);
            VidSchiReleaseSyncObjectReference(v81);
            v58 = (int)a8;
            ++v57;
            v59 += 8;
            ++v60;
          }
          while ( v57 < v12 );
          v9 = 0;
        }
        HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v100);
        if ( (_BYTE)v111 )
        {
          v62 = HIBYTE(v111) == 0;
          v63 = &v110;
          goto LABEL_109;
        }
LABEL_90:
        v22 = (_QWORD **)P;
LABEL_91:
        if ( v22 != (_QWORD **)v95 )
        {
          if ( v22 )
            ExFreePoolWithTag(v22, 0);
        }
        return v9;
      }
    }
  }
  v104 = 0;
  v102 = v13 + 214;
  KeAcquireInStackQueuedSpinLock(v13 + 214, &LockHandle);
  LOBYTE(v104) = 1;
  v14 = 0;
  if ( !v12 )
    goto LABEL_18;
  v15 = a8;
  while ( 1 )
  {
    v16 = *(unsigned __int64 *)((char *)v15 + v11 - (_QWORD)a8);
    v17 = *(_DWORD *)(v16 + 44);
    if ( (unsigned int)(v17 - 4) > 1 || *(_BYTE *)(v16 + 28) )
      goto LABEL_16;
    v18 = *v15;
    v19 = *(_BYTE *)(v16 + 29);
    v82 = *v15;
    if ( *(_BYTE *)(v16 + 27) )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(v16 + 208) + 40LL);
      v18 = v82;
    }
    else if ( v17 == 2 )
    {
      v20 = *(_QWORD *)(v16 + 64);
    }
    else
    {
      v20 = *(_QWORD *)(v16 + 88);
    }
    v79 = v20;
    if ( v19 )
    {
      if ( v18 < v20 )
      {
        v72 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v72 + 24) = v82;
        *(_QWORD *)(v72 + 32) = v79;
        goto LABEL_138;
      }
      if ( v18 != v20 )
        goto LABEL_16;
      v21 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v21 + 24) = v82;
      goto LABEL_15;
    }
    if ( (int)v20 - (int)v18 > 0 )
      break;
    if ( (_DWORD)v20 != (_DWORD)v18 )
      goto LABEL_16;
    v21 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v21 + 24) = (unsigned int)v82;
LABEL_15:
    WdLogEvent5_WdWarning(v21);
LABEL_16:
    ++v14;
    ++v15;
    if ( v14 >= v12 )
    {
      if ( !(_BYTE)v104 )
      {
LABEL_21:
        v10 = v114;
        goto LABEL_22;
      }
LABEL_18:
      if ( HIBYTE(v104) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      LOBYTE(v104) = 0;
      goto LABEL_21;
    }
  }
  v72 = WdLogNewEntry5_WdWarning();
  *(_QWORD *)(v72 + 24) = (unsigned int)v82;
  *(_QWORD *)(v72 + 32) = (unsigned int)v79;
LABEL_138:
  WdLogEvent5_WdWarning(v72);
  v73 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v73 + 24) = a8[v14];
  *(_QWORD *)(v73 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v73);
  AcquireSpinLock::Release((AcquireSpinLock *)&v102);
  return 3221225485LL;
}
