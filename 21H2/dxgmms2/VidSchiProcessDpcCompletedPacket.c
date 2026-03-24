/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x1C00095B0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006AC0 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002FF94 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C00070D0 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C000A060 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000ACE0 (VidSchiCheckPendingDeviceCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000AFA0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C000AFF0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B670 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000CC70 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000D800 (VidSchUnwaitFlipQueue.c)
 *     VidSchiDecrementContextReference @ 0x1C0011740 (VidSchiDecrementContextReference.c)
 *     VidSchiCompleteRewindPacket @ 0x1C0013D54 (VidSchiCompleteRewindPacket.c)
 *     VidSchiStartNodeYield @ 0x1C0014D08 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0014DC4 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C0014F88 (VidSchiCheckYieldExitCondition.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C001561C (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0015D40 (VidSchiMarkDeviceAsError.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0023E18 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x1C00250DC (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C002A50C (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002B044 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C002B8E4 (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002BD6C (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqxq_EtwWriteTransfer @ 0x1C002E55C (McTemplateK0pqxq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // r14
  int v2; // eax
  struct _VIDSCH_DMA_PACKET *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // r15
  int v7; // ebx
  __int64 v8; // rbx
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER v11; // r8
  LARGE_INTEGER v12; // rdx
  __int64 v13; // rbx
  _LARGE_INTEGER v14; // r13
  __int64 v15; // r12
  unsigned __int64 *v16; // rbx
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  struct _VIDSCH_CONTEXT *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  struct VIDMM_ALLOC *v22; // rcx
  __int64 v23; // rbx
  _QWORD *v24; // r13
  __int64 v25; // rcx
  __int64 v26; // r12
  unsigned __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rbx
  int v34; // ebx
  struct _KEVENT *v35; // r12
  struct _KEVENT *v36; // r13
  struct _KEVENT *v37; // r12
  struct _KEVENT *v38; // r13
  struct _KEVENT *v39; // r12
  struct _KEVENT *v40; // r13
  struct _KEVENT *v41; // rcx
  struct _KEVENT *v42; // rsi
  KIRQL v43; // r14
  struct _KEVENT *v44; // rbx
  struct _VIDSCH_QUEUE_PACKET *v45; // rax
  unsigned int v46; // ebx
  __int64 v47; // rax
  bool v48; // bl
  __int64 v49; // r12
  int v50; // eax
  bool v51; // zf
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rcx
  LARGE_INTEGER *v55; // rax
  __int64 v56; // r12
  unsigned int i; // ebx
  __int64 v58; // r12
  __int64 v59; // r13
  __int64 v60; // r12
  LARGE_INTEGER v61; // rcx
  unsigned __int128 v62; // rax
  unsigned __int64 v63; // rbx
  int v64; // r8d
  unsigned __int64 *v65; // rcx
  __int64 v66; // rdx
  int v67; // eax
  int v68; // ecx
  char v69; // al
  unsigned int refreshed; // eax
  __int64 v71; // rax
  unsigned __int128 v72; // rax
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // r8
  unsigned __int128 v75; // rtt
  int v76; // eax
  int v77; // ecx
  int v78; // r8d
  __int64 v79; // r9
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rbx
  _QWORD *v83; // rax
  __int64 v84; // rax
  unsigned int j; // r12d
  struct _VIDSCH_HISTORY_BUFFER_DATA *v86; // rdx
  PVOID v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rax
  __int64 v92; // rax
  int v93; // eax
  _BYTE *v94; // r8
  __int64 v95; // rdx
  _BYTE *v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // r11
  char v99; // al
  _BYTE *v100; // rax
  _BYTE *v101; // r9
  __int64 v102; // rdx
  _BYTE *v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // r11
  char v106; // al
  _BYTE *v107; // rax
  int Flink; // ecx
  int v109; // ecx
  int v110; // ecx
  int v111; // ecx
  int v112; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER v113; // [rsp+48h] [rbp-B8h]
  __int64 v114; // [rsp+50h] [rbp-B0h]
  union _LARGE_INTEGER v115; // [rsp+58h] [rbp-A8h] BYREF
  _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v117[2]; // [rsp+68h] [rbp-98h] BYREF
  char v118; // [rsp+78h] [rbp-88h]
  __int64 v119; // [rsp+80h] [rbp-80h]
  __int64 v120; // [rsp+88h] [rbp-78h]
  __int64 v121; // [rsp+90h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v123; // [rsp+B0h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v124; // [rsp+C8h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v125; // [rsp+E0h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v126; // [rsp+F8h] [rbp-8h] BYREF
  KIRQL v128; // [rsp+160h] [rbp+60h]
  KIRQL v129; // [rsp+160h] [rbp+60h]
  KIRQL v130; // [rsp+160h] [rbp+60h]
  __int64 v131; // [rsp+160h] [rbp+60h]
  char v132; // [rsp+168h] [rbp+68h] BYREF
  char v133; // [rsp+170h] [rbp+70h]
  int v134; // [rsp+178h] [rbp+78h]

  v1 = *((_QWORD *)a1 + 6);
  v2 = *((_DWORD *)a1 + 18);
  v3 = a1;
  v133 = 0;
  LOBYTE(v134) = 0;
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(v1 + 104);
  v114 = v5;
  v6 = *(_QWORD *)(v4 + 24);
  if ( v2 == 18 )
  {
    v112 = 9;
    v7 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v112 = 0;
    v7 = 13;
  }
  *((_QWORD *)v3 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v3 + 18) = v7;
  if ( *((_QWORD *)v3 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)v3 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)v3 + 7) + 52LL) = v7;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1712), &LockHandle);
  v118 = 0;
  v117[1] = v117;
  v117[0] = v117;
  v8 = *(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196);
  v119 = v8;
  *(_OWORD *)v8 = 0LL;
  *(_OWORD *)(v8 + 16) = 0LL;
  *(_OWORD *)(v8 + 32) = 0LL;
  *(_OWORD *)(v8 + 48) = 0LL;
  *(_OWORD *)(v8 + 64) = 0LL;
  *(_OWORD *)(v8 + 80) = 0LL;
  *(_OWORD *)(v8 + 96) = 0LL;
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  *(_DWORD *)v8 = 4;
  PerformanceFrequency.QuadPart = 0LL;
  v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
  *(LARGE_INTEGER *)(v8 + 8) = v9;
  v12 = v9;
  v13 = *(unsigned int *)(v4 + 1552);
  v113 = v9;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v13 + 1560), 0LL, v1) )
  {
    v71 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v10.QuadPart,
            (LARGE_INTEGER)v9.QuadPart,
            (LARGE_INTEGER)v11.QuadPart);
    *(_QWORD *)(v71 + 24) = v6;
    *(_QWORD *)(v71 + 32) = v5;
    WdLogEvent5_WdAssertion(v71);
    v12 = v113;
  }
  *(_QWORD *)(v4 + 224) = v1;
  *(_DWORD *)(v4 + 1552) = ((_BYTE)v13 + 1) & 0xF;
  if ( (*((_DWORD *)v3 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 804));
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 720));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 2880));
  v14 = PerformanceFrequency;
  v15 = gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 404)];
  if ( (_DWORD)v15 )
  {
    v16 = (unsigned __int64 *)(v4 + 1960 + 8 * v15);
    do
    {
      if ( *(v16 - 8) )
      {
        v17 = *v16 + v12.QuadPart - *(v16 - 4);
        *v16 = v17;
        *(v16 - 4) = 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v72 = v17 * (unsigned __int128)0x989680uLL;
          v120 = *((_QWORD *)&v72 + 1);
          if ( is_mul_ok(v17, 0x989680uLL) )
          {
            v75 = v72;
            v73 = v72 % (unsigned __int64)v14.QuadPart;
            v74 = v75 / (unsigned __int64)v14.QuadPart;
          }
          else
          {
            v10.QuadPart = v17 / v14.QuadPart;
            v73 = 10000000 * (v17 % v14.QuadPart) % v14.QuadPart;
            v74 = 10000000 * (v17 % v14.QuadPart) / v14.QuadPart + 10000000 * (v17 / v14.QuadPart);
          }
          McTemplateK0pqxq_EtwWriteTransfer(
            v10.LowPart,
            v73,
            v74,
            *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL),
            v15,
            v74,
            *(_WORD *)(v4 + 4));
          v12 = v113;
        }
      }
      --v16;
      LODWORD(v15) = v15 - 1;
    }
    while ( (_DWORD)v15 );
    v3 = a1;
  }
  v18 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560);
  if ( v18 )
  {
    v53 = *(unsigned int *)(v18 + 404);
    v54 = gulPriorityToYieldPriorityBand[v53];
    if ( gulPriorityToYieldPriorityBand[v53] )
    {
      v55 = (LARGE_INTEGER *)(v4 + 1928 + 8 * v54);
      do
      {
        if ( v55[-4].QuadPart )
          *v55 = v12;
        --v55;
        --v54;
      }
      while ( v54 );
    }
  }
  if ( *(int *)(v4 + 2864) > 0 )
    RtlSetBitEx(v6 + 480);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 184) &= ~2u;
    if ( (*(_DWORD *)(v1 + 184) & 8) != 0 )
    {
      *(_DWORD *)(v1 + 184) &= ~8u;
      v67 = VidSchiCompleteRewindPacket(v1, 1LL);
      v68 = (unsigned __int8)v134;
      if ( v67 )
        v68 = 1;
      v134 = v68;
    }
    if ( v114 == *(_QWORD *)(v6 + 232) )
    {
      VidSchiUpdateContextStatus(v1, 0LL, 11248LL);
    }
    else if ( (*(_DWORD *)(v1 + 184) & 2) == 0 )
    {
      v19 = *(struct _VIDSCH_CONTEXT **)(v1 + 496);
      if ( v19 )
        VidSchiDecrementContextReference(v19);
      *(_QWORD *)(v1 + 496) = 0LL;
    }
    --*(_DWORD *)(v4 + 4LL * *(unsigned int *)(v1 + 404) + 1768);
    v20 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v4 + 4 * v20 + 1768) )
      *(_DWORD *)(v4 + 1764) &= ~(1 << v20);
    if ( *(_QWORD *)(v1 + 504) )
    {
      v59 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      v131 = *(_QWORD *)(v1 + 104);
      v60 = *(_QWORD *)(v131 + 40);
      v115.QuadPart = 0LL;
      v61 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&v115) - *(_QWORD *)(v1 + 504));
      v62 = (unsigned __int64)v61.QuadPart * (unsigned __int128)0x989680uLL;
      v121 = *((_QWORD *)&v62 + 1);
      if ( is_mul_ok(v61.QuadPart, 0x989680uLL) )
        v63 = v62 / (unsigned __int64)v115.QuadPart;
      else
        v63 = 10000000 * (v61.QuadPart / (unsigned __int64)v115.QuadPart)
            + 10000000 * (v61.QuadPart % (unsigned __int64)v115.QuadPart) / v115.QuadPart;
      v64 = 8;
      v65 = (unsigned __int64 *)(v59 + 2760);
      v66 = 8LL;
      while ( v63 <= *v65 )
      {
        --v64;
        --v65;
        if ( --v66 < 0 )
          goto LABEL_113;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v60 + 8LL * v64 + 2672));
LABEL_113:
      if ( v63 >= *(_QWORD *)(v59 + 2688) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v60 + 2664));
        if ( v63 >= *(_QWORD *)(v59 + 2672) && !*(_BYTE *)(*(_QWORD *)(v131 + 40) + 2624LL) )
        {
          v76 = *(_DWORD *)(v131 + 48);
          if ( (v76 & 8) == 0
            && (v76 & 1) == 0
            && !*(_DWORD *)(v59 + 2916)
            && !*(_BYTE *)(v131 + 204)
            && !_InterlockedCompareExchange((volatile signed __int32 *)(v131 + 200), 0, 0)
            && (*(_DWORD *)(v59 + 2448) & 0x200) != 0 )
          {
            KeSetTimer((PKTIMER)(v1 + 512), (LARGE_INTEGER)-*(_QWORD *)(v59 + 2680), (PKDPC)(v1 + 576));
            VidSchiUpdateContextStatus(v1, 7uLL, 26666LL);
            if ( bTracingEnabled )
            {
              v79 = *(_QWORD *)(v1 + 56);
              if ( !v79 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
                LODWORD(v79) = v1;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0ppxx_EtwWriteTransfer(
                  v77,
                  (unsigned int)&EventDelayContextScheduling,
                  v78,
                  v79,
                  *(_QWORD *)(v60 + 2632),
                  v63,
                  *(_QWORD *)(v59 + 2680));
            }
          }
        }
      }
      *(_QWORD *)(v1 + 504) = 0LL;
    }
  }
  if ( *(_BYTE *)(v4 + 2016) )
  {
    if ( *(_QWORD *)(v4 + 1992) )
    {
      v132 = 0;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiCheckYieldExitCondition)(
        v4,
        (LARGE_INTEGER)v113.QuadPart,
        &v132);
      v69 = v134;
      if ( v132 )
        v69 = 1;
      LOBYTE(v134) = v69;
    }
    else if ( ((-1 << (*(_BYTE *)(v6 + 192) + 1)) & *(_DWORD *)(v4 + 1764)) == 0 )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v4);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v4,
        (LARGE_INTEGER)v113.QuadPart,
        (_LARGE_INTEGER)PerformanceFrequency.QuadPart,
        refreshed);
      LOBYTE(v134) = 1;
    }
  }
  v21 = v119;
  *(_QWORD *)(v119 + 16) = *((_QWORD *)v3 + 13);
  _m_prefetchw((const void *)(v4 + 96));
  do
    v22 = (struct VIDMM_ALLOC *)*((_QWORD *)v3 + 13);
  while ( (struct VIDMM_ALLOC *)_InterlockedCompareExchange64(
                                  (volatile signed __int64 *)(v4 + 96),
                                  (signed __int64)v22,
                                  *(_QWORD *)(v4 + 96)) != v22 );
  v23 = *((_QWORD *)v3 + 7);
  if ( v23 )
  {
    *(_QWORD *)(v21 + 24) = *(_QWORD *)(v23 + 112);
    v24 = *(_QWORD **)(v23 + 88);
    v25 = v24[13];
    v26 = *(_QWORD *)(v24[12] + 24LL);
    v27 = v24[20];
    if ( v27 && *(_QWORD *)(v23 + 112) <= v27 )
    {
      if ( !*(_BYTE *)(v25 + 204)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(v25 + 200), 0, 0)
        && (*(_BYTE *)(v26 + 2940) & 1) == 0 )
      {
        v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, 0LL);
        v80[3] = 281LL;
        v80[4] = 1792LL;
        v80[5] = *(_QWORD *)(v23 + 112);
        v80[6] = v24[20];
        v80[7] = 0LL;
        WdLogEvent5_WdCriticalError(v80);
        __debugbreak();
      }
      v81 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v81 + 24) = *(_QWORD *)(v23 + 112);
      WdLogEvent5_WdEvent(v81);
    }
    else
    {
      if ( *(_BYTE *)(v25 + 204)
        || _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 200), 0, 0)
        || (*(_BYTE *)(v26 + 2940) & 1) != 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v28[3] = v23;
        v28[4] = *(_QWORD *)(v23 + 112);
      }
      else
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v28[3] = v23;
        v28[4] = *(_QWORD *)(v23 + 112);
        v28[5] = v24[20];
      }
      WdLogEvent5_WdEvent(v28);
      *(_QWORD *)(*(_QWORD *)(v23 + 88) + 160LL) = *(_QWORD *)(v23 + 112);
      v22 = *(struct VIDMM_ALLOC **)(*(_QWORD *)(v23 + 88) + 104LL);
      if ( *((_DWORD *)v22 + 394) )
        VidSchUnwaitFlipQueue(v117, v26);
    }
    *((_DWORD *)v3 + 23) |= 0x80u;
    v133 = 1;
  }
  v29 = *((_QWORD *)v3 + 8);
  if ( (*((_DWORD *)v3 + 23) & 2) != 0 )
  {
    v56 = *(_QWORD *)(v29 + 104);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = v29;
    for ( i = 0; i < *(_DWORD *)(v29 + 144); ++i )
    {
      v22 = *(struct VIDMM_ALLOC **)(v56 + 8LL * i);
      if ( v22 )
        VIDMM_GLOBAL::RemoveDMAReferences(v22, 1);
    }
    v58 = *(_QWORD *)(v29 + 64);
    if ( v58 )
    {
      if ( *(int *)(v58 + 172) < 1 )
      {
        v82 = *(int *)(v58 + 172);
        v83 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21);
        v83[7] = 0LL;
        v83[3] = 270LL;
        v83[4] = 41LL;
        v83[5] = v58;
        v83[6] = v82;
        WdLogEvent5_WdCriticalError(v83);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 172), 0xFFFFFFFF);
    }
    ++*(_DWORD *)(v29 + 20);
  }
  if ( (*((_DWORD *)v3 + 23) & 1) != 0 )
  {
    v47 = *((_QWORD *)v3 + 7);
    v48 = v47 && *(_DWORD *)(v47 + 48) == 8;
    v49 = *(_QWORD *)(v29 + 136);
    if ( g_IsInternalReleaseOrDbg )
    {
      v84 = WdLogNewEntry5_WdTrace();
      *(_QWORD *)(v84 + 24) = v29;
      *(_QWORD *)(v84 + 32) = *(_QWORD *)(v49 + 16);
    }
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 32), 0xFFFFFFFF) == 1 )
        *(_BYTE *)(v29 + 24) = 0;
    }
    else
    {
      v50 = *(_DWORD *)(v29 + 32);
      v51 = v50 == 0;
      if ( v50 > 0 )
      {
        v52 = v50 - 1;
        *(_DWORD *)(v29 + 32) = v52;
        v51 = v52 == 0;
      }
      if ( v51 )
        *(_BYTE *)(v29 + 24) = 0;
    }
  }
  v30 = *((_QWORD *)v3 + 7);
  if ( v30 && *(_QWORD *)(v30 + 264) )
  {
    for ( j = 0; j < *(_DWORD *)(v30 + 616); ++j )
    {
      v86 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(*(_QWORD *)(v30 + 264) + 16LL * j);
      if ( *(_QWORD *)v86 )
        VidSchiProcessHistoryBuffer(v3, v86);
    }
    VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v30);
  }
  v31 = v114;
  VidSchiUnwaitMonitoredFences(v117, *(_QWORD *)(v114 + 32), 0LL);
  VidSchiCheckPendingDeviceCommand(v114);
  v32 = (unsigned __int8)v134;
  if ( _bittest64(*(const signed __int64 **)(v6 + 440), *(unsigned __int16 *)(v4 + 4)) )
    v32 = 1;
  v134 = v32;
  if ( bTracingEnabled )
  {
    v33 = *((_QWORD *)v3 + 6);
    if ( *(_DWORD *)(v33 + 976) >= 0x80u )
      VidSchiFlushGpuWorkEntries(*((struct _VIDSCH_CONTEXT **)v3 + 6));
    if ( *(_QWORD *)(v33 + 984)
      || (v87 = operator new[](0x400uLL, 0x61616956u, (POOL_TYPE)512), (*(_QWORD *)(v33 + 984) = v87) != 0LL) )
    {
      *(_QWORD *)(*(_QWORD *)(v33 + 984) + 8LL * (unsigned int)(*(_DWORD *)(v33 + 976))++) = KeQueryPerformanceCounter(0LL).QuadPart | 0x8000000000000000uLL;
    }
    else
    {
      v91 = WdLogNewEntry5_WdAssertion(v89, v88, v90);
      WdLogEvent5_WdAssertion(v91);
    }
    v31 = v114;
  }
  if ( v112 )
  {
    v92 = v119;
    *(_BYTE *)(v119 + 32) = 1;
    *(_OWORD *)(v92 + 40) = *(_OWORD *)(v31 + 208);
    *(_OWORD *)(v92 + 56) = *(_OWORD *)(v31 + 224);
    v93 = *(_DWORD *)(v31 + 224);
    if ( (v93 & 4) != 0 )
    {
      if ( !*(_DWORD *)(v4 + 2024) )
      {
        v94 = (_BYTE *)(v6 + 2941);
        v95 = *(_QWORD *)(*(_QWORD *)(v31 + 40) + 2640LL);
        if ( !v95 )
          goto LABEL_175;
        v96 = (_BYTE *)(v6 + 2941);
        v97 = v95 - (_QWORD)v94;
        v98 = 15LL;
        do
        {
          if ( v98 == -2147483631 )
            break;
          v99 = v96[v97];
          if ( !v99 )
            break;
          *v96++ = v99;
          --v98;
        }
        while ( v98 );
        v100 = v96 - 1;
        if ( v98 )
          v100 = v96;
        *v100 = 0;
        if ( !v98 )
LABEL_175:
          *v94 = 0;
        *(_DWORD *)(v4 + 2024) = 1;
      }
    }
    else if ( (v93 & 8) != 0 && !*(_DWORD *)(v4 + 2020) )
    {
      v101 = (_BYTE *)(v4 + 2028);
      v102 = *(_QWORD *)(*(_QWORD *)(v31 + 40) + 2640LL);
      if ( !v102 )
        goto LABEL_187;
      v103 = (_BYTE *)(v4 + 2028);
      v104 = v102 - (_QWORD)v101;
      v105 = 15LL;
      do
      {
        if ( v105 == -2147483631 )
          break;
        v106 = v103[v104];
        if ( !v106 )
          break;
        *v103++ = v106;
        --v105;
      }
      while ( v105 );
      v107 = v103 - 1;
      if ( v105 )
        v107 = v103;
      *v107 = 0;
      if ( !v105 )
LABEL_187:
        *v101 = 0;
      *(_DWORD *)(v4 + 2020) = 1;
    }
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v117);
    v34 = 13;
  }
  else
  {
    v34 = 9;
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v117);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(v34, v6, v4, 0, 0LL, 0LL, (__int64)v3, 0LL);
  v35 = (struct _KEVENT *)(v1 + 376);
  v128 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1728), &v123);
  v36 = *(struct _KEVENT **)(v1 + 376);
  if ( *(struct _KEVENT **)&v35->Header.Lock != v35 )
  {
    do
    {
      if ( LODWORD(v36->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v36[1].Header.Lock + 4LL * LODWORD(v36[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v36[1].Header.Lock + 244LL) )
          goto LABEL_101;
      }
      else if ( ((__int64)v36[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        Flink = (int)v36[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v36[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_101;
      }
      ++v36[5].Header.LockNV;
      KeSetEvent(v36 + 4, 0, 0);
LABEL_101:
      v36 = *(struct _KEVENT **)&v36->Header.Lock;
    }
    while ( v36 != v35 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v123);
  KeLowerIrql(v128);
  v37 = (struct _KEVENT *)(v4 + 408);
  v129 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1728), &v124);
  v38 = *(struct _KEVENT **)(v4 + 408);
  if ( *(struct _KEVENT **)&v37->Header.Lock != v37 )
  {
    do
    {
      if ( LODWORD(v38->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v38[1].Header.Lock + 4LL * LODWORD(v38[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v38[1].Header.Lock + 244LL) )
          goto LABEL_200;
      }
      else if ( ((__int64)v38[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v109 = (int)v38[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v38[5].Header.WaitListHead.Blink) = v109;
        if ( v109 )
          goto LABEL_200;
      }
      ++v38[5].Header.LockNV;
      KeSetEvent(v38 + 4, 0, 0);
LABEL_200:
      v38 = *(struct _KEVENT **)&v38->Header.Lock;
    }
    while ( v38 != v37 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v124);
  KeLowerIrql(v129);
  v39 = (struct _KEVENT *)(v6 + 1624);
  v130 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1728), &v125);
  v40 = *(struct _KEVENT **)(v6 + 1624);
  if ( *(struct _KEVENT **)&v39->Header.Lock != v39 )
  {
    do
    {
      if ( LODWORD(v40->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v40[1].Header.Lock + 4LL * LODWORD(v40[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v40[1].Header.Lock + 244LL) )
          goto LABEL_122;
      }
      else if ( ((__int64)v40[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v110 = (int)v40[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v40[5].Header.WaitListHead.Blink) = v110;
        if ( v110 )
          goto LABEL_122;
      }
      ++v40[5].Header.LockNV;
      KeSetEvent(v40 + 4, 0, 0);
LABEL_122:
      v40 = *(struct _KEVENT **)&v40->Header.Lock;
    }
    while ( v40 != v39 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v125);
  KeLowerIrql(v130);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v4 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v4 + 240), 0, 0);
  *(_QWORD *)(v6 + 1432) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v6 + 1400), 0, 0);
  if ( (_BYTE)v134 )
  {
    *(_QWORD *)(v6 + 1208) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v6 + 1176), 0, 0);
  }
  v41 = (struct _KEVENT *)*((_QWORD *)v3 + 25);
  if ( v41 )
    KeSetEvent(v41, 0, 0);
  v42 = (struct _KEVENT *)(v6 + 1672);
  v43 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1728), &v126);
  v44 = *(struct _KEVENT **)(v6 + 1672);
  if ( *(struct _KEVENT **)&v42->Header.Lock != v42 )
  {
    do
    {
      if ( LODWORD(v44->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v44[1].Header.Lock + 4LL * LODWORD(v44[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v44[1].Header.Lock + 244LL) )
          goto LABEL_212;
      }
      else if ( ((__int64)v44[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v111 = (int)v44[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v44[5].Header.WaitListHead.Blink) = v111;
        if ( v111 )
          goto LABEL_212;
      }
      ++v44[5].Header.LockNV;
      KeSetEvent(v44 + 4, 0, 0);
LABEL_212:
      v44 = *(struct _KEVENT **)&v44->Header.Lock;
    }
    while ( v44 != v42 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v126);
  KeLowerIrql(v43);
  v45 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)v3 + 7);
  v46 = -1;
  if ( v45 )
    v46 = *((_DWORD *)v45 + 40);
  if ( v133 )
  {
    do
      v45 = VidSchiProcessCompletedQueuePacketInternal(v45);
    while ( v45 );
  }
  *((_QWORD *)v3 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v3 + 18) = 16;
  if ( v46 != -1 && (*((_DWORD *)v3 + 23) & 0x10) != 0 )
    VidSchiQueueDeferredVisibilityWorkItem(
      *(struct _VIDSCH_PRESENT_INFO **)(v6 + 8LL * v46 + 3104),
      (struct _VIDSCH_GLOBAL *)v6);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v117);
}
