/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x1C0007C30
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1C0005700 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00097D0 (VidSchiCheckPendingDeviceCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009A80 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B960 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000BDB0 (VidSchUnwaitFlipQueue.c)
 *     VidSchiUpdateContextStatus @ 0x1C000D200 (VidSchiUpdateContextStatus.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000E658 (VidSchiCompleteRewindPacket.c)
 *     VidSchiDecrementContextReference @ 0x1C0013610 (VidSchiDecrementContextReference.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C00173F0 (VidSchiCheckYieldExitCondition.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0017B68 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C00182B0 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C001836C (VidSchiMonitorRefreshPeriodFromNode.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0018990 (VidSchiMarkDeviceAsError.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C002E00C (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x1C002F1B0 (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C00345EC (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034CD4 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C0034FF8 (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0035528 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqxq_EtwWriteTransfer @ 0x1C0037A3C (McTemplateK0pqxq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // rsi
  __int64 v2; // rdi
  struct _VIDSCH_DMA_PACKET *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r15
  int v6; // r14d
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rcx
  LARGE_INTEGER v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  union _LARGE_INTEGER v13; // r13
  __int64 v14; // r12
  __int64 v15; // rcx
  int v16; // eax
  struct _VIDSCH_CONTEXT *v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // r12d
  __int64 v20; // rdx
  struct VIDMM_ALLOC *v21; // rcx
  __int64 v22; // r14
  _QWORD *v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r13
  unsigned __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // r14
  int v34; // r14d
  struct _KEVENT **v35; // r12
  KSPIN_LOCK *v36; // r14
  KIRQL v37; // r13
  struct _KEVENT *v38; // r12
  struct _KEVENT *v39; // r13
  struct _KEVENT *v40; // r12
  struct _KEVENT *v41; // r13
  struct _KEVENT *v42; // rcx
  struct _KEVENT *v43; // rdi
  KIRQL v44; // si
  struct _KEVENT *v45; // r14
  struct _VIDSCH_QUEUE_PACKET *v46; // rax
  unsigned int v47; // edi
  __int64 v48; // rax
  __int64 v49; // rcx
  LARGE_INTEGER *v50; // rax
  unsigned __int64 *v51; // r14
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  bool v54; // r12
  __int64 v55; // r13
  int v56; // eax
  bool v57; // zf
  int v58; // eax
  __int64 v59; // r13
  __int64 v60; // r13
  struct _KEVENT *v61; // r14
  __int64 v62; // r13
  __int64 v63; // r12
  LARGE_INTEGER v64; // rcx
  unsigned __int128 v65; // rax
  unsigned __int64 v66; // r14
  int v67; // edx
  unsigned __int64 *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  unsigned int refreshed; // eax
  __int16 v72; // r10
  unsigned __int128 v73; // rax
  unsigned __int64 v74; // rdx
  unsigned __int128 v75; // rtt
  int v76; // eax
  __int64 v77; // rax
  unsigned int i; // r12d
  struct _VIDSCH_HISTORY_BUFFER_DATA *v79; // rdx
  __int64 v80; // rax
  int v81; // eax
  _BYTE *v82; // r8
  __int64 v83; // rdx
  _BYTE *v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // r11
  char v87; // al
  _BYTE *v88; // rax
  _BYTE *v89; // r9
  __int64 v90; // rdx
  _BYTE *v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // r11
  char v94; // al
  _BYTE *v95; // rax
  int Flink; // ecx
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER v101; // [rsp+58h] [rbp-A8h]
  __int64 v102; // [rsp+60h] [rbp-A0h]
  __int64 v103; // [rsp+68h] [rbp-98h]
  union _LARGE_INTEGER v104; // [rsp+70h] [rbp-90h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v106[2]; // [rsp+80h] [rbp-80h] BYREF
  char v107; // [rsp+90h] [rbp-70h]
  __int64 v108; // [rsp+98h] [rbp-68h]
  __int64 v109; // [rsp+A0h] [rbp-60h]
  __int64 v110; // [rsp+A8h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v112; // [rsp+C8h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v113; // [rsp+E0h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v114; // [rsp+F8h] [rbp-8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v115; // [rsp+110h] [rbp+10h] BYREF
  __int128 v116; // [rsp+128h] [rbp+28h]
  __int64 v117; // [rsp+138h] [rbp+38h]
  KIRQL v119; // [rsp+190h] [rbp+90h]
  KIRQL v120; // [rsp+190h] [rbp+90h]
  char v121; // [rsp+198h] [rbp+98h] BYREF
  char v122; // [rsp+1A0h] [rbp+A0h]
  int v123; // [rsp+1A8h] [rbp+A8h]

  v1 = *((_QWORD *)a1 + 6);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v122 = 0;
  v2 = *(_QWORD *)(v1 + 96);
  v3 = a1;
  v4 = *(_QWORD *)(v1 + 104);
  LOBYTE(v123) = 0;
  v5 = *(_QWORD *)(v2 + 24);
  v102 = v4;
  if ( *((_DWORD *)a1 + 18) == 18 )
  {
    v100 = 9;
    v6 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v100 = 0;
    v6 = 13;
  }
  *((_QWORD *)v3 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v3 + 18) = v6;
  if ( *((_QWORD *)v3 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)v3 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)v3 + 7) + 52LL) = v6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  v107 = 0;
  v106[1] = v106;
  v106[0] = v106;
  v103 = *(_QWORD *)(v2 + 184) + 112LL * *(unsigned int *)(v2 + 196);
  *(_OWORD *)v103 = 0LL;
  *(_OWORD *)(v103 + 16) = 0LL;
  *(_OWORD *)(v103 + 32) = 0LL;
  *(_OWORD *)(v103 + 48) = 0LL;
  *(_OWORD *)(v103 + 64) = 0LL;
  *(_OWORD *)(v103 + 80) = 0LL;
  *(_OWORD *)(v103 + 96) = 0LL;
  *(_DWORD *)(v2 + 196) = (*(_DWORD *)(v2 + 196) + 1) & (*(_DWORD *)(v2 + 192) - 1);
  *(_DWORD *)v103 = 4;
  PerformanceFrequency.QuadPart = 0LL;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  *(LARGE_INTEGER *)(v103 + 8) = v7;
  v9 = v7;
  v10 = *(unsigned int *)(v2 + 1560);
  v11 = 1LL;
  v101 = v7;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8 * v10 + 1568), 0LL, v1) )
  {
    WdLogSingleEntry2(1LL, v5, v4);
    DxgCoreInterface[85](0LL, 0x40000LL, 0xFFFFFFFFLL, L"Context running queue is inconsistant", v5, v4, 0LL, 0LL, 0LL);
    v9 = v101;
    v11 = 1LL;
  }
  *(_QWORD *)(v2 + 224) = v1;
  *(_DWORD *)(v2 + 1560) = ((_BYTE)v10 + 1) & 0xF;
  if ( (*((_DWORD *)v3 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 812));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 728));
  v12 = (unsigned __int64)gulPriorityToYieldPriorityBand;
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 2896));
  v13 = PerformanceFrequency;
  v14 = gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 404)];
  if ( (_DWORD)v14 )
  {
    v51 = (unsigned __int64 *)(v2 + 1968 + 8 * v14);
    do
    {
      if ( *(v51 - 8) )
      {
        v52 = v9.QuadPart + *v51 - *(v51 - 4);
        *(v51 - 4) = 0LL;
        *v51 = v52;
        if ( (byte_1C006E941 & 1) != 0 )
        {
          v72 = *(_WORD *)(v2 + 4);
          v73 = v52 * (unsigned __int128)0x989680uLL;
          v108 = *((_QWORD *)&v73 + 1);
          if ( is_mul_ok(v52, 0x989680uLL) )
          {
            v75 = v73;
            v74 = v73 % (unsigned __int64)v13.QuadPart;
            v52 = v75 / (unsigned __int64)v13.QuadPart;
          }
          else
          {
            v8.QuadPart = v52 / v13.QuadPart;
            v74 = 10000000 * (v52 % v13.QuadPart) % v13.QuadPart;
            LODWORD(v52) = 10000000 * (v52 / v13.QuadPart) + 10000000 * (v52 % v13.QuadPart) / v13.QuadPart;
          }
          McTemplateK0pqxq_EtwWriteTransfer(
            v8.LowPart,
            v74,
            v52,
            *(_QWORD *)(*(_QWORD *)(v2 + 24) + 16LL),
            v14,
            v52,
            v72);
          v9 = v101;
        }
      }
      --v51;
      LODWORD(v14) = v14 - 1;
    }
    while ( (_DWORD)v14 );
    v3 = a1;
    v12 = (unsigned __int64)gulPriorityToYieldPriorityBand;
    v11 = 1LL;
  }
  v15 = *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1560) + 1568);
  if ( v15 )
  {
    v48 = *(unsigned int *)(v15 + 404);
    v49 = gulPriorityToYieldPriorityBand[v48];
    if ( gulPriorityToYieldPriorityBand[v48] )
    {
      v50 = (LARGE_INTEGER *)(v2 + 1936 + 8 * v49);
      do
      {
        if ( v50[-4].QuadPart )
          *v50 = v9;
        --v50;
        --v49;
      }
      while ( v49 );
    }
  }
  if ( *(int *)(v2 + 2880) > 0 )
  {
    RtlSetBitEx(v5 + 488, *(unsigned __int16 *)(v2 + 4));
    v11 = 1LL;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) != 1 )
    goto LABEL_23;
  *(_DWORD *)(v1 + 184) &= ~2u;
  if ( (*(_DWORD *)(v1 + 184) & 8) != 0 )
  {
    *(_DWORD *)(v1 + 184) &= ~8u;
    if ( (unsigned int)VidSchiCompleteRewindPacket(v1, 1LL) )
      LOBYTE(v123) = 1;
  }
  if ( v102 == *(_QWORD *)(v5 + 240) )
  {
    VidSchiUpdateContextStatus(v1, 0LL, 11884LL);
  }
  else
  {
    v117 = 0LL;
    v16 = *(_DWORD *)(v1 + 184);
    v116 = 0LL;
    if ( (v16 & 2) == 0 )
    {
      v17 = *(struct _VIDSCH_CONTEXT **)(v1 + 496);
      if ( v17 )
        VidSchiDecrementContextReference(v17);
      *(_QWORD *)(v1 + 496) = 0LL;
    }
  }
  --*(_DWORD *)(v2 + 4LL * *(unsigned int *)(v1 + 404) + 1776);
  v18 = *(unsigned int *)(v1 + 404);
  if ( !*(_DWORD *)(v2 + 4 * v18 + 1776) )
    *(_DWORD *)(v2 + 1772) &= ~(1 << v18);
  if ( *(_QWORD *)(v1 + 504) )
  {
    v62 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
    v110 = *(_QWORD *)(v1 + 104);
    v63 = *(_QWORD *)(v110 + 40);
    v104.QuadPart = 0LL;
    v64 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&v104) - *(_QWORD *)(v1 + 504));
    v65 = (unsigned __int64)v64.QuadPart * (unsigned __int128)0x989680uLL;
    v109 = *((_QWORD *)&v65 + 1);
    if ( is_mul_ok(v64.QuadPart, 0x989680uLL) )
    {
      v66 = v65 / (unsigned __int64)v104.QuadPart;
    }
    else
    {
      v12 = v64.QuadPart / (unsigned __int64)v104.QuadPart;
      v66 = 10000000 * (v64.QuadPart / (unsigned __int64)v104.QuadPart)
          + 10000000 * (v64.QuadPart % (unsigned __int64)v104.QuadPart) / v104.QuadPart;
    }
    v67 = 8;
    v68 = (unsigned __int64 *)(v62 + 2856);
    v69 = 8LL;
    while ( v66 <= *v68 )
    {
      --v67;
      --v68;
      if ( --v69 < 0 )
        goto LABEL_115;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v63 + 8LL * v67 + 2680));
LABEL_115:
    if ( v66 >= *(_QWORD *)(v62 + 2784) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v63 + 2672));
      if ( v66 >= *(_QWORD *)(v62 + 2768) && !*(_BYTE *)(*(_QWORD *)(v110 + 40) + 2632LL) )
      {
        v76 = *(_DWORD *)(v110 + 48);
        if ( (v76 & 8) == 0
          && (v76 & 1) == 0
          && !*(_DWORD *)(v62 + 3012)
          && !*(_BYTE *)(v110 + 204)
          && !_InterlockedCompareExchange((volatile signed __int32 *)(v110 + 200), 0, 0)
          && (*(_DWORD *)(v62 + 2536) & 0x200) != 0 )
        {
          KeSetTimer((PKTIMER)(v1 + 512), (LARGE_INTEGER)-*(_QWORD *)(v62 + 2776), (PKDPC)(v1 + 576));
          VidSchiUpdateContextStatus(v1, 7LL, 28048LL);
          if ( bTracingEnabled )
          {
            v11 = *(_QWORD *)(v1 + 56);
            if ( !v11 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
              v11 = v1;
            if ( (byte_1C006E941 & 1) != 0 )
              McTemplateK0ppxx_EtwWriteTransfer(
                *(_QWORD *)(v62 + 2776),
                (unsigned int)&EventDelayContextScheduling,
                v12,
                v11,
                *(_QWORD *)(v63 + 2640),
                v66,
                *(_QWORD *)(v62 + 2776));
          }
        }
      }
    }
    v19 = 0;
    *(_QWORD *)(v1 + 504) = 0LL;
  }
  else
  {
LABEL_23:
    v19 = 0;
  }
  if ( *(_BYTE *)(v2 + 2024) )
  {
    if ( *(_QWORD *)(v2 + 2000) )
    {
      v121 = 0;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiCheckYieldExitCondition)(
        v2,
        (LARGE_INTEGER)v101.QuadPart,
        &v121,
        v11);
      v12 = (unsigned __int8)v123;
      if ( v121 )
        v12 = 1LL;
      v123 = v12;
    }
    else
    {
      v70 = (unsigned int)(-1 << (*(_BYTE *)(v5 + 200) + 1));
      if ( ((unsigned int)v70 & *(_DWORD *)(v2 + 1772)) == 0 )
      {
        refreshed = VidSchiMonitorRefreshPeriodFromNode(v2, v70, v12, v11);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
          v2,
          (LARGE_INTEGER)v101.QuadPart,
          (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
          refreshed);
        LOBYTE(v123) = 1;
      }
    }
  }
  v20 = v103;
  *(_QWORD *)(v103 + 16) = *((_QWORD *)v3 + 13);
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 16) + 436LL) & 0x200) != 0 )
  {
    if ( *(_DWORD *)(v2 + 480) )
    {
      v20 = v103;
      if ( *((_QWORD *)v3 + 13) != *(_QWORD *)(v2 + 472) )
        *(_DWORD *)(v2 + 480) = 0;
    }
  }
  _m_prefetchw((const void *)(v2 + 96));
  do
    v21 = (struct VIDMM_ALLOC *)*((_QWORD *)v3 + 13);
  while ( (struct VIDMM_ALLOC *)_InterlockedCompareExchange64(
                                  (volatile signed __int64 *)(v2 + 96),
                                  (signed __int64)v21,
                                  *(_QWORD *)(v2 + 96)) != v21 );
  v22 = *((_QWORD *)v3 + 7);
  if ( v22 )
  {
    *(_QWORD *)(v20 + 24) = *(_QWORD *)(v22 + 112);
    v23 = *(_QWORD **)(v22 + 88);
    v24 = v23[13];
    v25 = *(_QWORD *)(v23[12] + 24LL);
    v26 = v23[20];
    if ( v26 && *(_QWORD *)(v22 + 112) <= v26 )
    {
      if ( !*(_BYTE *)(v24 + 204)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(v24 + 200), 0, 0)
        && (*(_BYTE *)(v25 + 3036) & 1) == 0 )
      {
        WdLogSingleEntry5(0LL, 281LL, 1792LL, *(_QWORD *)(v22 + 112), v23[20], 0LL);
        __debugbreak();
      }
      WdLogSingleEntry1(4LL, *(_QWORD *)(v22 + 112));
    }
    else
    {
      if ( *(_BYTE *)(v24 + 204)
        || _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 200), 0, 0)
        || (*(_BYTE *)(v25 + 3036) & 1) != 0 )
      {
        WdLogSingleEntry2(4LL, v22, *(_QWORD *)(v22 + 112));
      }
      else
      {
        WdLogSingleEntry3(4LL, v22, *(_QWORD *)(v22 + 112), v23[20]);
      }
      *(_QWORD *)(*(_QWORD *)(v22 + 88) + 160LL) = *(_QWORD *)(v22 + 112);
      v21 = *(struct VIDMM_ALLOC **)(*(_QWORD *)(v22 + 88) + 104LL);
      if ( *((_DWORD *)v21 + 394) )
        VidSchUnwaitFlipQueue(v106, v25);
    }
    *((_DWORD *)v3 + 23) |= 0x80u;
    v122 = 1;
  }
  v27 = *((_QWORD *)v3 + 8);
  if ( (*((_DWORD *)v3 + 23) & 2) != 0 )
  {
    v59 = *(_QWORD *)(v27 + 104);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v12, v11) + 24) = v27;
    if ( *(_DWORD *)(v27 + 144) )
    {
      do
      {
        v21 = *(struct VIDMM_ALLOC **)(v59 + 8LL * v19);
        if ( v21 )
          VIDMM_GLOBAL::RemoveDMAReferences(v21, 1);
        ++v19;
      }
      while ( v19 < *(_DWORD *)(v27 + 144) );
      v3 = a1;
    }
    v60 = *(_QWORD *)(v27 + 64);
    if ( v60 )
    {
      if ( *(int *)(v60 + 156) < 1 )
        WdLogSingleEntry5(0LL, 270LL, 41LL, v60, *(int *)(v60 + 156), 0LL);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v60 + 156), 0xFFFFFFFF);
    }
    ++*(_DWORD *)(v27 + 20);
  }
  if ( (*((_DWORD *)v3 + 23) & 1) != 0 )
  {
    v53 = *((_QWORD *)v3 + 7);
    v54 = v53 && *(_DWORD *)(v53 + 48) == 8;
    v55 = *(_QWORD *)(v27 + 136);
    if ( g_IsInternalReleaseOrDbg )
    {
      v77 = WdLogNewEntry5_WdTrace(v21, v20, v12, v11);
      *(_QWORD *)(v77 + 24) = v27;
      *(_QWORD *)(v77 + 32) = *(_QWORD *)(v55 + 16);
    }
    if ( v54 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 32), 0xFFFFFFFF) == 1 )
        *(_BYTE *)(v27 + 24) = 0;
    }
    else
    {
      v56 = *(_DWORD *)(v27 + 32);
      v57 = v56 == 0;
      if ( v56 > 0 )
      {
        v58 = v56 - 1;
        *(_DWORD *)(v27 + 32) = v58;
        v57 = v58 == 0;
      }
      if ( v57 )
        *(_BYTE *)(v27 + 24) = 0;
    }
  }
  v28 = *((_QWORD *)v3 + 7);
  if ( v28 && *(_QWORD *)(v28 + 264) )
  {
    for ( i = 0; i < *(_DWORD *)(v28 + 624); ++i )
    {
      v79 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(*(_QWORD *)(v28 + 264) + 16LL * i);
      if ( *(_QWORD *)v79 )
        VidSchiProcessHistoryBuffer(v3, v79);
    }
    VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v28);
  }
  v29 = v102;
  VidSchiUnwaitMonitoredFences(v106, *(_QWORD *)(v102 + 32), 0LL, v11);
  VidSchiCheckPendingDeviceCommand(v102, v30, v31);
  v32 = (unsigned __int8)v123;
  if ( _bittest64(*(const signed __int64 **)(v5 + 448), *(unsigned __int16 *)(v2 + 4)) )
    v32 = 1;
  v123 = v32;
  if ( bTracingEnabled )
  {
    v33 = *((_QWORD *)v3 + 6);
    if ( *(_DWORD *)(v33 + 984) >= 0x80u )
      VidSchiFlushGpuWorkEntries(*((struct _VIDSCH_CONTEXT **)v3 + 6));
    if ( *(_QWORD *)(v33 + 992)
      || (v80 = operator new[](1024LL, 0x61616956u, 64LL), (*(_QWORD *)(v33 + 992) = v80) != 0LL) )
    {
      *(_QWORD *)(*(_QWORD *)(v33 + 992) + 8LL * (unsigned int)(*(_DWORD *)(v33 + 984))++) = KeQueryPerformanceCounter(0LL).QuadPart | 0x8000000000000000uLL;
    }
    else
    {
      WdLogSingleEntry0(1LL);
      DxgCoreInterface[85](
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to allocate GpuWorkRecords for long haul logging",
        458LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v29 = v102;
  }
  if ( v100 )
  {
    *(_BYTE *)(v103 + 32) = 1;
    *(_OWORD *)(v103 + 40) = *(_OWORD *)(v29 + 208);
    *(_OWORD *)(v103 + 56) = *(_OWORD *)(v29 + 224);
    v81 = *(_DWORD *)(v29 + 224);
    if ( (v81 & 4) != 0 )
    {
      if ( !*(_DWORD *)(v2 + 2032) )
      {
        v82 = (_BYTE *)(v5 + 3037);
        v83 = *(_QWORD *)(*(_QWORD *)(v29 + 40) + 2648LL);
        if ( !v83 )
          goto LABEL_185;
        v84 = (_BYTE *)(v5 + 3037);
        v85 = v83 - (_QWORD)v82;
        v86 = 15LL;
        do
        {
          if ( v86 == -2147483631 )
            break;
          v87 = v84[v85];
          if ( !v87 )
            break;
          *v84++ = v87;
          --v86;
        }
        while ( v86 );
        v88 = v84 - 1;
        if ( v86 )
          v88 = v84;
        *v88 = 0;
        if ( !v86 )
LABEL_185:
          *v82 = 0;
        *(_DWORD *)(v2 + 2032) = 1;
      }
    }
    else if ( (v81 & 8) != 0 && !*(_DWORD *)(v2 + 2028) )
    {
      v89 = (_BYTE *)(v2 + 2036);
      v90 = *(_QWORD *)(*(_QWORD *)(v29 + 40) + 2648LL);
      if ( !v90 )
        goto LABEL_197;
      v91 = (_BYTE *)(v2 + 2036);
      v92 = v90 - (_QWORD)v89;
      v93 = 15LL;
      do
      {
        if ( v93 == -2147483631 )
          break;
        v94 = v91[v92];
        if ( !v94 )
          break;
        *v91++ = v94;
        --v93;
      }
      while ( v93 );
      v95 = v91 - 1;
      if ( v93 )
        v95 = v91;
      *v95 = 0;
      if ( !v93 )
LABEL_197:
        *v89 = 0;
      *(_DWORD *)(v2 + 2028) = 1;
    }
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v106);
    v34 = 13;
  }
  else
  {
    v34 = 9;
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v106);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(v34, v5, v2, 0, 0LL, 0LL, (__int64)v3, 0LL);
  v35 = (struct _KEVENT **)(v1 + 376);
  memset(&v112, 0, sizeof(v112));
  v36 = (KSPIN_LOCK *)(v5 + 1744);
  v37 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1744), &v112);
  if ( *v35 != (struct _KEVENT *)v35 )
  {
    v61 = *v35;
    while ( 1 )
    {
      if ( LODWORD(v61->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v61[1].Header.Lock + 4LL * LODWORD(v61[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v61[1].Header.Lock + 244LL) )
          goto LABEL_104;
      }
      else if ( ((__int64)v61[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        Flink = (int)v61[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v61[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_104;
      }
      ++v61[5].Header.LockNV;
      KeSetEvent(v61 + 4, 0, 0);
LABEL_104:
      v61 = *(struct _KEVENT **)&v61->Header.Lock;
      if ( v61 == (struct _KEVENT *)v35 )
      {
        v36 = (KSPIN_LOCK *)(v5 + 1744);
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v112);
  KeLowerIrql(v37);
  v38 = (struct _KEVENT *)(v2 + 408);
  memset(&v113, 0, sizeof(v113));
  v119 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v36, &v113);
  v39 = *(struct _KEVENT **)(v2 + 408);
  if ( *(struct _KEVENT **)&v38->Header.Lock != v38 )
  {
    do
    {
      if ( LODWORD(v39->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v39[1].Header.Lock + 4LL * LODWORD(v39[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v39[1].Header.Lock + 244LL) )
          goto LABEL_210;
      }
      else if ( ((__int64)v39[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v97 = (int)v39[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v39[5].Header.WaitListHead.Blink) = v97;
        if ( v97 )
          goto LABEL_210;
      }
      ++v39[5].Header.LockNV;
      KeSetEvent(v39 + 4, 0, 0);
LABEL_210:
      v39 = *(struct _KEVENT **)&v39->Header.Lock;
    }
    while ( v39 != v38 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v113);
  KeLowerIrql(v119);
  v40 = (struct _KEVENT *)(v5 + 1640);
  memset(&v114, 0, sizeof(v114));
  v120 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v36, &v114);
  v41 = *(struct _KEVENT **)(v5 + 1640);
  if ( *(struct _KEVENT **)&v40->Header.Lock != v40 )
  {
    do
    {
      if ( LODWORD(v41->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v41[1].Header.Lock + 4LL * LODWORD(v41[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v41[1].Header.Lock + 244LL) )
          goto LABEL_128;
      }
      else if ( ((__int64)v41[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v98 = (int)v41[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v41[5].Header.WaitListHead.Blink) = v98;
        if ( v98 )
          goto LABEL_128;
      }
      ++v41[5].Header.LockNV;
      KeSetEvent(v41 + 4, 0, 0);
LABEL_128:
      v41 = *(struct _KEVENT **)&v41->Header.Lock;
    }
    while ( v41 != v40 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v114);
  KeLowerIrql(v120);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v2 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v2 + 240), 0, 0);
  *(_QWORD *)(v5 + 1448) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1416), 0, 0);
  if ( (_BYTE)v123 )
  {
    *(_QWORD *)(v5 + 1224) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1192), 0, 0);
  }
  v42 = (struct _KEVENT *)*((_QWORD *)v3 + 25);
  if ( v42 )
    KeSetEvent(v42, 0, 0);
  v43 = (struct _KEVENT *)(v5 + 1688);
  memset(&v115, 0, sizeof(v115));
  v44 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v36, &v115);
  v45 = *(struct _KEVENT **)(v5 + 1688);
  if ( *(struct _KEVENT **)&v43->Header.Lock != v43 )
  {
    do
    {
      if ( LODWORD(v45->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v45[1].Header.Lock + 4LL * LODWORD(v45[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v45[1].Header.Lock + 244LL) )
          goto LABEL_133;
      }
      else if ( ((__int64)v45[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v99 = (int)v45[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v45[5].Header.WaitListHead.Blink) = v99;
        if ( v99 )
          goto LABEL_133;
      }
      ++v45[5].Header.LockNV;
      KeSetEvent(v45 + 4, 0, 0);
LABEL_133:
      v45 = *(struct _KEVENT **)&v45->Header.Lock;
    }
    while ( v45 != v43 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v115);
  KeLowerIrql(v44);
  v46 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)v3 + 7);
  v47 = -1;
  if ( v46 )
    v47 = *((_DWORD *)v46 + 40);
  if ( v122 )
  {
    do
      v46 = VidSchiProcessCompletedQueuePacketInternal(v46);
    while ( v46 );
  }
  *((_QWORD *)v3 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v3 + 18) = 16;
  if ( v47 != -1 && (*((_DWORD *)v3 + 23) & 0x10) != 0 )
    VidSchiQueueDeferredVisibilityWorkItem(
      *(struct _VIDSCH_PRESENT_INFO **)(v5 + 8LL * v47 + 3200),
      (struct _VIDSCH_GLOBAL *)v5);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v106);
}
