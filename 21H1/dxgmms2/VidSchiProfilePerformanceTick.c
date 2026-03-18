/*
 * XREFs of VidSchiProfilePerformanceTick @ 0x1C000AC50
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006F50 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007440 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0008360 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008B90 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009640 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A620 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContext @ 0x1C000A960 (VidSchiSelectContext.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B930 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C000C550 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000D820 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E610 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000E810 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000ED88 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C0013B98 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C00302E0 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C00308A4 (VidSchiReadCommandFromContextQueue.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00379B0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003C194 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C003CBB8 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C007EE90 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00D1FC4 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00D2088 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00D2160 (VidSchiWaitForEmptyHwQueue.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013ABC (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0024A40 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0024AB8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqPR4PR4_EtwWriteTransfer @ 0x1C002D4EC (McTemplateK0ppqqqPR4PR4_EtwWriteTransfer.c)
 *     McTemplateK0ppqxqpq_EtwWriteTransfer @ 0x1C002D674 (McTemplateK0ppqxqpq_EtwWriteTransfer.c)
 *     McTemplateK0pqqPR2p_EtwWriteTransfer @ 0x1C002DA48 (McTemplateK0pqqPR2p_EtwWriteTransfer.c)
 *     McTemplateK0pqqpxp_EtwWriteTransfer @ 0x1C002DE9C (McTemplateK0pqqpxp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqPR3XR3p_EtwWriteTransfer @ 0x1C002E050 (McTemplateK0pqqqPR3XR3p_EtwWriteTransfer.c)
 *     McTemplateK0pqqttp_EtwWriteTransfer @ 0x1C002E1D8 (McTemplateK0pqqttp_EtwWriteTransfer.c)
 *     McTemplateK0pqqxqqtppx_EtwWriteTransfer @ 0x1C002E520 (McTemplateK0pqqxqqtppx_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqqxqp_EtwWriteTransfer @ 0x1C002E7B8 (McTemplateK0pqxqqqxqp_EtwWriteTransfer.c)
 *     McTemplateK0pqxqt_EtwWriteTransfer @ 0x1C002E8AC (McTemplateK0pqxqt_EtwWriteTransfer.c)
 *     McTemplateK0qtpiixi_EtwWriteTransfer @ 0x1C002ED58 (McTemplateK0qtpiixi_EtwWriteTransfer.c)
 */

void __fastcall VidSchiProfilePerformanceTick(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // r9
  int v11; // r10d
  int v12; // ebx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r8d
  __int16 v21; // r9
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 *v30; // rsi
  int v31; // r8d
  __int64 v32; // r15
  _BYTE *PoolWithTag; // r9
  __int64 v34; // r15
  _BYTE *v35; // rcx
  __int64 v36; // r11
  __int64 v37; // r15
  unsigned int v38; // r8d
  unsigned int v39; // edx
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r10
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 *v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // r9
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // r8d
  __int64 v60; // r9
  int v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // r9
  __int64 v64; // r12
  __int64 v65; // r15
  int v66; // r8d
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r9
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 *v74; // rsi
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 *v79; // rsi
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // r9
  _BYTE *v89; // rax
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rcx
  __int64 *v94; // rsi
  PVOID v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  void *v99; // rdx
  __int64 v100; // rax
  __int64 v101; // r10
  __int64 v102; // r11
  __int64 v103; // rdx
  __int64 v104; // r9
  __int64 v105; // r8
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // r8
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // r9
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // rcx
  __int64 *v116; // rsi
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // r8
  __int64 v121; // rcx
  int v122; // [rsp+28h] [rbp-B9h]
  _BYTE *v124; // [rsp+90h] [rbp-51h]
  _BYTE v125[16]; // [rsp+98h] [rbp-49h] BYREF
  int v126; // [rsp+A8h] [rbp-39h]
  _BYTE *v127; // [rsp+B0h] [rbp-31h]
  PVOID P; // [rsp+B8h] [rbp-29h]
  _BYTE v129[16]; // [rsp+C0h] [rbp-21h] BYREF
  int v130; // [rsp+D0h] [rbp-11h]

  v8 = a7;
  v9 = 0LL;
  v10 = a3;
  v11 = a8;
  v12 = a1;
  if ( !bTracingEnabled )
    goto LABEL_16;
  if ( (_DWORD)a1 == 2 )
  {
    v17 = ((unsigned __int64)*(unsigned int *)(a2 + 76) + 63) >> 6;
    if ( a5 )
    {
      v18 = *(_QWORD *)(a5 + 96);
      v19 = *(_QWORD *)(a5 + 56);
      v20 = *(_DWORD *)(v18 + 1760);
      v21 = *(_WORD *)(v18 + 4);
      if ( !v19 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
        LODWORD(v19) = a5;
    }
    else
    {
      v20 = 0;
      LOBYTE(v21) = 0;
      LODWORD(v19) = 0;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
      goto LABEL_26;
    McTemplateK0ppqqqPR4PR4_EtwWriteTransfer(
      v17,
      v19,
      v20,
      *(_QWORD *)(a2 + 16),
      v19,
      v21,
      v20,
      v17,
      *(_QWORD *)(a2 + 448),
      *(_QWORD *)(a2 + 496));
    goto LABEL_75;
  }
  if ( (_DWORD)a1 == 9 )
  {
LABEL_27:
    if ( a7 )
    {
      v62 = *(_QWORD *)(a7 + 48);
      v63 = *(_QWORD *)(v62 + 56);
      if ( !v63 || (*(_DWORD *)(v62 + 112) & 0x40) != 0 )
        v63 = *(_QWORD *)(a7 + 48);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0pqxqt_EtwWriteTransfer(
          v62,
          v12 == 11,
          a3,
          v63,
          *(_DWORD *)(a7 + 88),
          *(_QWORD *)(a7 + 104),
          *(_DWORD *)(a7 + 96),
          v12 == 11);
        goto LABEL_75;
      }
      goto LABEL_15;
    }
    if ( !a6 )
      goto LABEL_16;
    if ( (_DWORD)a1 == 9 )
    {
      if ( *(_DWORD *)(a6 + 48) == 4 )
      {
        v87 = *(_QWORD *)(a6 + 88);
        if ( v87 )
        {
          v88 = *(_QWORD *)(v87 + 56);
          if ( !v88 || (*(_DWORD *)(v87 + 112) & 0x40) != 0 )
            v88 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v88 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v88 )
            v88 = *(_QWORD *)(a6 + 96);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqqttp_EtwWriteTransfer(
            v87,
            a2,
            a3,
            v88,
            4,
            *(_DWORD *)(a6 + 112),
            (*(_DWORD *)(a6 + 272) & 2) != 0);
          goto LABEL_75;
        }
        goto LABEL_15;
      }
    }
    else
    {
      v22 = 1;
      if ( (_DWORD)a1 == 11 )
      {
LABEL_32:
        v23 = *(_QWORD *)(a6 + 88);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 56);
          if ( !v24 || (*(_DWORD *)(v23 + 112) & 0x40) != 0 )
            v24 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v24 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v24 )
            v24 = *(_QWORD *)(a6 + 96);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqqttp_EtwWriteTransfer(v23, v22, a3, v24, *(_DWORD *)(a6 + 48), *(_DWORD *)(a6 + 112), v22);
          goto LABEL_75;
        }
        goto LABEL_15;
      }
    }
    v22 = 0;
    goto LABEL_32;
  }
  if ( (_DWORD)a1 != 20 )
  {
    if ( (_DWORD)a1 != 5 )
    {
      if ( (_DWORD)a1 != 4 )
      {
        switch ( (int)a1 )
        {
          case 1:
            v14 = *(_QWORD *)(a5 + 56);
            if ( !v14 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
              v14 = a5;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_15;
            v122 = a8;
            v99 = &EventAttemptPreemption;
            goto LABEL_191;
          case 7:
            v64 = 0LL;
            if ( *(_DWORD *)(a7 + 88) == 1 )
            {
              v85 = *(_QWORD *)(a7 + 56);
              if ( v85 )
              {
                if ( *(_DWORD *)(v85 + 48) == 8 )
                  v64 = *(_QWORD *)(v85 + 88);
              }
            }
            v65 = *(_QWORD *)(a7 + 48);
            if ( *(_DWORD *)(v65 + 976) >= 0x80u )
              VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v65);
            if ( *(_QWORD *)(v65 + 984)
              || (v95 = operator new[](0x400uLL, 0x61616956u, (POOL_TYPE)512), (*(_QWORD *)(v65 + 984) = v95) != 0LL) )
            {
              *(LARGE_INTEGER *)(*(_QWORD *)(v65 + 984) + 8LL * (unsigned int)(*(_DWORD *)(v65 + 976))++) = KeQueryPerformanceCounter(0LL);
            }
            else
            {
              v100 = WdLogNewEntry5_WdAssertion(v97, v96, v98);
              WdLogEvent5_WdAssertion(v100);
            }
            if ( v64 )
            {
              v67 = *(_QWORD *)(v64 + 56);
              if ( !v67 || (*(_DWORD *)(v64 + 112) & 0x40) != 0 )
                LODWORD(v67) = v64;
            }
            else
            {
              LODWORD(v67) = 0;
            }
            v8 = a7;
            v68 = *(_QWORD *)(a7 + 48);
            v69 = *(_QWORD *)(v68 + 56);
            if ( !v69 || (*(_DWORD *)(v68 + 112) & 0x40) != 0 )
              v69 = *(_QWORD *)(a7 + 48);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0ppqxqpq_EtwWriteTransfer(
                v68,
                v67,
                v66,
                v69,
                v67,
                *(_DWORD *)(a7 + 88),
                *(_QWORD *)(a7 + 104),
                *(_DWORD *)(a7 + 96),
                *(_QWORD *)(a7 + 64),
                *(_DWORD *)(v68 + 436));
            goto LABEL_75;
          case 8:
          case 10:
          case 12:
            LODWORD(v58) = 0;
            v59 = 0;
            LOBYTE(v60) = 0;
            v61 = 0;
            switch ( v12 )
            {
              case 8:
                v61 = 1;
                break;
              case 10:
                v61 = 2;
                break;
              case 12:
                v58 = *(_QWORD *)(a8 + 40);
                v61 = 9;
                v59 = *(_DWORD *)(a8 + 32);
                v60 = *(_QWORD *)(a8 + 64);
                break;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_26;
            v101 = *(_QWORD *)(a7 + 48);
            v102 = *(_QWORD *)(v101 + 56);
            if ( !v102 || (*(_DWORD *)(v101 + 112) & 0x40) != 0 )
              v102 = *(_QWORD *)(a7 + 48);
            McTemplateK0pqxqqqxqp_EtwWriteTransfer(
              v61,
              v58,
              v59,
              v102,
              *(_DWORD *)(a7 + 88),
              *(_QWORD *)(a7 + 104),
              *(_DWORD *)(a7 + 96),
              v61,
              *(_DWORD *)(v101 + 436),
              v58,
              v59,
              v60);
            goto LABEL_75;
          case 11:
          case 13:
            goto LABEL_27;
          case 14:
            v14 = *(_QWORD *)(a2 + 16);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_15;
            v122 = 1;
            goto LABEL_189;
          case 15:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_15;
            McTemplateK0pq_EtwWriteTransfer(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 1);
            goto LABEL_75;
          case 16:
            v14 = *(_QWORD *)(a2 + 16);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_15;
            v122 = 3;
            goto LABEL_189;
          case 17:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_15;
            McTemplateK0pq_EtwWriteTransfer(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 3);
            goto LABEL_75;
          case 18:
            v14 = *(_QWORD *)(a2 + 16);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_15;
            a1 = 2LL;
            v122 = 2;
LABEL_189:
            v99 = &EventEnterWorkerThread;
LABEL_191:
            McTemplateK0pq_EtwWriteTransfer(a1, v99, a3, v14, v122);
            goto LABEL_75;
          case 19:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_15;
            McTemplateK0pq_EtwWriteTransfer(2LL, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 2);
            goto LABEL_75;
          default:
            goto LABEL_16;
        }
      }
      v31 = *(_DWORD *)(a6 + 48);
      if ( v31 == 5 )
      {
        v32 = *(unsigned int *)(a6 + 276);
        PoolWithTag = 0LL;
        v124 = 0LL;
        v126 = 0;
        if ( (unsigned int)v32 > 2 )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v32 < 8 )
          {
            v127 = 0LL;
            goto LABEL_54;
          }
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v32, 0x38616956u);
          v124 = PoolWithTag;
        }
        else
        {
          PoolWithTag = v125;
          v124 = v125;
        }
        v126 = v32;
        if ( PoolWithTag && (_DWORD)v32 )
        {
          memset(PoolWithTag, 0, 8 * v32);
          PoolWithTag = v124;
        }
        v127 = PoolWithTag;
LABEL_54:
        v34 = *(unsigned int *)(a6 + 276);
        v35 = 0LL;
        P = 0LL;
        v130 = 0;
        if ( (unsigned int)v34 > 2 )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v34 < 8 )
          {
            v36 = 0LL;
LABEL_60:
            v37 = (__int64)v127;
            if ( v127 && v36 )
            {
              v38 = *(_DWORD *)(a6 + 276);
              v39 = 0;
              if ( v38 )
              {
                do
                {
                  *(_QWORD *)(8LL * v39 + v37) = *(_QWORD *)(a6 + 8LL * v39 + 280);
                  v40 = *(_DWORD *)(*(_QWORD *)(a6 + 8LL * v39 + 280) + 44LL);
                  if ( v40 == 4 || v40 == 2 || v40 == 5 )
                    v41 = *(_QWORD *)(a6 + 8LL * v39 + 536);
                  else
                    v41 = 0LL;
                  *(_QWORD *)(8LL * v39++ + v36) = v41;
                  v38 = *(_DWORD *)(a6 + 276);
                }
                while ( v39 < v38 );
                PoolWithTag = v124;
                v35 = P;
              }
              v42 = *(_QWORD *)(a6 + 88);
              if ( v42 )
              {
                v43 = *(_QWORD *)(v42 + 56);
                if ( !v43 || (*(_DWORD *)(v42 + 112) & 0x40) != 0 )
                  v43 = *(_QWORD *)(a6 + 88);
              }
              else
              {
                v43 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
                if ( !v43 )
                  v43 = *(_QWORD *)(a6 + 96);
              }
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                McTemplateK0pqqqPR3XR3p_EtwWriteTransfer(
                  (_DWORD)v35,
                  v42,
                  v38,
                  v43,
                  *(_DWORD *)(a6 + 112),
                  *(_DWORD *)(a6 + 272),
                  v38,
                  v37,
                  v36,
                  a6);
                PoolWithTag = v124;
                v35 = P;
              }
            }
            if ( v35 != v129 && v35 )
            {
              ExFreePoolWithTag(v35, 0);
              PoolWithTag = v124;
            }
            P = 0LL;
            v130 = 0;
            if ( PoolWithTag != v125 && PoolWithTag )
              ExFreePoolWithTag(PoolWithTag, 0);
            v8 = a7;
            goto LABEL_75;
          }
          v89 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v34, 0x38616956u);
          PoolWithTag = v124;
          v35 = v89;
          P = v89;
        }
        else
        {
          v35 = v129;
          P = v129;
        }
        v130 = v34;
        if ( v35 && (_DWORD)v34 )
        {
          memset(v35, 0, 8 * v34);
          PoolWithTag = v124;
          v35 = P;
        }
        v36 = (__int64)v35;
        goto LABEL_60;
      }
      v50 = *(_QWORD *)(a6 + 88);
      if ( !v31 )
      {
        if ( v50 )
        {
          v51 = *(_QWORD *)(v50 + 56);
          if ( !v51 || (*(_DWORD *)(v50 + 112) & 0x40) != 0 )
            v51 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v51 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v51 )
            v51 = *(_QWORD *)(a6 + 96);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqqxqqtppx_EtwWriteTransfer(
            (*(_DWORD *)(a6 + 72) >> 14) & 1,
            *(_DWORD *)(a6 + 324),
            0,
            v51,
            0,
            *(_DWORD *)(a6 + 112),
            *(_DWORD *)(a6 + 324),
            *(_DWORD *)(a6 + 332),
            *(_DWORD *)(a6 + 340),
            (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
            *(_QWORD *)(a6 + 280),
            a6,
            *(_QWORD *)(a6 + 752));
          v11 = a8;
        }
        v52 = *(_DWORD *)(a6 + 464);
        if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          v103 = *(_QWORD *)(a6 + 88);
          if ( v103 )
          {
            v104 = *(_QWORD *)(v103 + 56);
            if ( !v104 || (*(_DWORD *)(v103 + 112) & 0x40) != 0 )
              v104 = *(_QWORD *)(a6 + 88);
          }
          else
          {
            v104 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
            if ( !v104 )
              v104 = *(_QWORD *)(a6 + 96);
          }
          McTemplateK0pqqPR2p_EtwWriteTransfer(v52, v103, v31, v104, *(_DWORD *)(a6 + 112), v52, a6 + 472, a6);
          goto LABEL_75;
        }
LABEL_26:
        v10 = a3;
        goto LABEL_16;
      }
      if ( v31 == 4 )
      {
        if ( v50 )
        {
          v86 = *(_QWORD *)(v50 + 56);
          if ( !v86 || (*(_DWORD *)(v50 + 112) & 0x40) != 0 )
            v86 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v86 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v86 )
            v86 = *(_QWORD *)(a6 + 96);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_26;
        McTemplateK0pqqpxp_EtwWriteTransfer(
          v50,
          a2,
          4,
          v86,
          *(_DWORD *)(a6 + 112),
          *(_DWORD *)(a6 + 272),
          *(_QWORD *)(a6 + 280),
          *(_QWORD *)(a6 + 304),
          a6);
      }
      else
      {
        if ( v50 )
        {
          v80 = *(_QWORD *)(v50 + 56);
          if ( !v80 || (*(_DWORD *)(v50 + 112) & 0x40) != 0 )
            v80 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v80 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v80 )
            v80 = *(_QWORD *)(a6 + 96);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_26;
        McTemplateK0pqqxqqtppx_EtwWriteTransfer(
          (*(_DWORD *)(a6 + 72) >> 14) & 1,
          a2,
          v31,
          v80,
          v31,
          *(_DWORD *)(a6 + 112),
          0,
          0,
          0,
          (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
          *(_QWORD *)(a6 + 280),
          a6,
          *(_QWORD *)(a6 + 752));
      }
LABEL_75:
      v11 = a8;
      v10 = a3;
      goto LABEL_16;
    }
    v15 = *(_QWORD *)(a6 + 88);
    v16 = *(_QWORD *)(v15 + 56);
    if ( !v16 || (*(_DWORD *)(v15 + 112) & 0x40) != 0 )
      v16 = *(_QWORD *)(a6 + 88);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqq_EtwWriteTransfer(
        v15,
        (unsigned int)&EventQueueSelect,
        a3,
        v16,
        *(_DWORD *)(a6 + 48),
        *(_DWORD *)(a6 + 112));
      goto LABEL_75;
    }
LABEL_15:
    v10 = a3;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(a2 + 2448) & 4) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(a5 + 404)] )
  {
    v105 = *(_QWORD *)(a5 + 440);
    if ( v105 <= 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v106 = *(_QWORD *)(a5 + 56);
      if ( !v106 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
        LODWORD(v106) = a5;
      McTemplateK0qtpiixi_EtwWriteTransfer(
        a8 != 0,
        v106,
        v105,
        *(unsigned __int16 *)(v10 + 4),
        a8 != 0,
        v106,
        *(_QWORD *)(a5 + 472),
        v105,
        *(_QWORD *)(a5 + 464),
        *(_QWORD *)(a5 + 448));
      goto LABEL_75;
    }
  }
LABEL_16:
  if ( *(int *)(a2 + 6344) >= 1 )
  {
    if ( v12 == 1 )
    {
      if ( v11 < 0 )
      {
        v11 = -v11;
      }
      else if ( v11 >= 16 )
      {
        v11 = 1;
      }
      ++*(_DWORD *)(v10 + 2652);
      ++*(_DWORD *)(v10 + 4LL * v11 + 2652);
      v53 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v53 + 12) & 0x10) != 0 )
      {
        v57 = 0LL;
      }
      else
      {
        v54 = *(unsigned __int16 *)(v53 + 4);
        v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v53 + 24) + 4LL));
        v56 = *(__int64 **)(v55 + 8);
        if ( (unsigned int)v54 < *(_DWORD *)(v55 + 80) )
          v56 += v54;
        v57 = *v56;
        v10 = a3;
      }
      ++*(_DWORD *)(v57 + 12);
      ++*(_DWORD *)(v57 + 4LL * v11 + 12);
    }
    else if ( v12 == 3 )
    {
      ++*(_DWORD *)(v10 + 2648);
      v81 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v81 + 12) & 0x10) == 0 )
      {
        v82 = *(unsigned __int16 *)(v81 + 4);
        v83 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v81 + 24) + 4LL));
        v84 = *(_QWORD *)(v83 + 8);
        if ( (unsigned int)v82 < *(_DWORD *)(v83 + 80) )
          v84 += 8 * v82;
        if ( *(_QWORD *)v84 )
          ++*(_DWORD *)(*(_QWORD *)v84 + 8LL);
      }
    }
  }
  if ( *(int *)(a2 + 6344) >= 2 )
  {
    switch ( v12 )
    {
      case 4:
        ++*(_DWORD *)(v10 + 8LL * *(int *)(a6 + 48) + 2716);
        v44 = *(_QWORD *)(a6 + 96);
        if ( !v44 )
        {
          v45 = *(_QWORD *)(a6 + 88);
          v46 = *(_QWORD *)(v45 + 96);
          if ( (*(_DWORD *)(v46 + 12) & 0x10) != 0 )
            goto LABEL_81;
          v47 = *(unsigned __int16 *)(v46 + 4);
          v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 104) + 40LL) + 24LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v46 + 24) + 4LL));
          v49 = *(__int64 **)(v48 + 8);
          if ( (unsigned int)v47 < *(_DWORD *)(v48 + 80) )
            v49 += v47;
          goto LABEL_80;
        }
        v107 = *(_QWORD *)(v44 + 40);
        v108 = *(_QWORD *)(v107 + 16);
        v109 = *(unsigned __int16 *)(v108 + 4);
        v110 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v107 + 8) + 40LL) + 24LL)
                         + 8LL * *(unsigned int *)(*(_QWORD *)(v108 + 24) + 4LL));
        if ( v110 )
        {
          v49 = *(__int64 **)(v110 + 8);
          if ( (unsigned int)v109 < *(_DWORD *)(v110 + 80) )
            v49 += v109;
LABEL_80:
          v9 = *v49;
        }
LABEL_81:
        if ( v9 )
          ++*(_DWORD *)(v9 + 8LL * *(int *)(a6 + 48) + 76);
        return;
      case 7:
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 2788);
        v70 = *(_QWORD *)(v8 + 48);
        v71 = *(_QWORD *)(v70 + 96);
        if ( (*(_DWORD *)(v71 + 12) & 0x10) == 0 )
        {
          v72 = *(unsigned __int16 *)(v71 + 4);
          v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v70 + 104) + 40LL) + 24LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v71 + 24) + 4LL));
          v74 = *(__int64 **)(v73 + 8);
          if ( (unsigned int)v72 < *(_DWORD *)(v73 + 80) )
            v74 += v72;
          v9 = *v74;
        }
        ++*(_DWORD *)(v9 + 16LL * *(int *)(v8 + 88) + 148);
        return;
      case 8:
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 2792);
        v75 = *(_QWORD *)(v8 + 48);
        v76 = *(_QWORD *)(v75 + 96);
        if ( (*(_DWORD *)(v76 + 12) & 0x10) == 0 )
        {
          v77 = *(unsigned __int16 *)(v76 + 4);
          v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v75 + 104) + 40LL) + 24LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v76 + 24) + 4LL));
          v79 = *(__int64 **)(v78 + 8);
          if ( (unsigned int)v77 < *(_DWORD *)(v78 + 80) )
            v79 += v77;
          v9 = *v79;
        }
        ++*(_DWORD *)(v9 + 16LL * *(int *)(v8 + 88) + 152);
        return;
      case 9:
      case 11:
      case 13:
        if ( !a6 )
          return;
        ++*(_DWORD *)(v10 + 8LL * *(int *)(a6 + 48) + 2720);
        v25 = *(_QWORD *)(a6 + 96);
        if ( !v25 )
        {
          v26 = *(_QWORD *)(a6 + 88);
          v27 = *(_QWORD *)(v26 + 96);
          if ( (*(_DWORD *)(v27 + 12) & 0x10) != 0 )
            goto LABEL_43;
          v28 = *(unsigned __int16 *)(v27 + 4);
          v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 104) + 40LL) + 24LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v27 + 24) + 4LL));
          v30 = *(__int64 **)(v29 + 8);
          if ( (unsigned int)v28 < *(_DWORD *)(v29 + 80) )
            v30 += v28;
          goto LABEL_42;
        }
        v118 = *(_QWORD *)(v25 + 40);
        v119 = *(_QWORD *)(v118 + 16);
        v120 = *(unsigned __int16 *)(v119 + 4);
        v121 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v118 + 8) + 40LL) + 24LL)
                         + 8LL * *(unsigned int *)(*(_QWORD *)(v119 + 24) + 4LL));
        if ( v121 )
        {
          v30 = *(__int64 **)(v121 + 8);
          if ( (unsigned int)v120 < *(_DWORD *)(v121 + 80) )
            v30 += v120;
LABEL_42:
          v9 = *v30;
        }
LABEL_43:
        if ( v9 )
          ++*(_DWORD *)(v9 + 8LL * *(int *)(a6 + 48) + 80);
        break;
      case 10:
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 2796);
        v90 = *(_QWORD *)(v8 + 48);
        v91 = *(_QWORD *)(v90 + 96);
        if ( (*(_DWORD *)(v91 + 12) & 0x10) == 0 )
        {
          v92 = *(unsigned __int16 *)(v91 + 4);
          v93 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v90 + 104) + 40LL) + 24LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v91 + 24) + 4LL));
          v94 = *(__int64 **)(v93 + 8);
          if ( (unsigned int)v92 < *(_DWORD *)(v93 + 80) )
            v94 += v92;
          v9 = *v94;
        }
        ++*(_DWORD *)(v9 + 16LL * *(int *)(v8 + 88) + 156);
        return;
      case 12:
        v111 = 2 * (*(int *)(v8 + 88) + 175LL);
        ++*(_DWORD *)(v10 + 8 * v111);
        v112 = *(_QWORD *)(v8 + 48);
        v113 = *(_QWORD *)(v112 + 96);
        if ( (*(_DWORD *)(v113 + 12) & 0x10) == 0 )
        {
          v114 = *(unsigned __int16 *)(v113 + 4);
          v115 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v112 + 104) + 40LL) + 24LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v113 + 24) + 4LL));
          v116 = *(__int64 **)(v115 + 8);
          if ( (unsigned int)v114 < *(_DWORD *)(v115 + 80) )
            v116 += v114;
          v9 = *v116;
        }
        v117 = 2 * (*(int *)(v8 + 88) + 10LL);
        ++*(_DWORD *)(v9 + 8 * v117);
        return;
      default:
        return;
    }
  }
}
