/*
 * XREFs of ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C00DDFB0
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00DED6C (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0085A0C (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1C00DD6A4 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C00DDE5C (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ??0VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@PEAT_LARGE_INTEGER@@PEAI_N@Z @ 0x1C00E18E4 (--0VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@PEAT_LARGE_INTEGER@@PEAI_N@Z.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x1C00E192C (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00EAAEC (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 */

char VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc(
        union _LARGE_INTEGER *a1,
        __int64 a2,
        VIDMM_DEVICE *a3,
        ...)
{
  union _LARGE_INTEGER *v4; // rdi
  char v5; // r12
  unsigned int v6; // ecx
  int v7; // r9d
  unsigned int v8; // edx
  char v9; // al
  int v10; // r8d
  int v11; // r8d
  unsigned int v12; // eax
  LONGLONG QuadPart; // rdx
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // r10
  int v17; // edx
  bool v18; // cf
  VIDMM_DEVICE *v19; // r9
  unsigned __int64 v20; // rax
  unsigned int v21; // edx
  unsigned __int64 v22; // rsi
  char v23; // al
  int *v24; // rax
  unsigned int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  VIDMM_DEVICE *v29; // r9
  _QWORD *v30; // r13
  _QWORD *v31; // r15
  VIDMM_DEVICE *v32; // rdi
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 *v35; // r15
  __int64 *v36; // r14
  __int64 *v37; // rdi
  _QWORD *v38; // rcx
  __int64 *v39; // r13
  VIDMM_DEVICE *v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 **v50; // rcx
  __int64 v51; // rcx
  __int64 **v52; // rax
  __int64 v53; // rdx
  unsigned __int64 LargestGap; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rdi
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rax
  __int64 v64; // [rsp+28h] [rbp-91h]
  __int64 v65; // [rsp+30h] [rbp-89h]
  __int64 v66; // [rsp+38h] [rbp-81h]
  __int64 v67; // [rsp+40h] [rbp-79h]
  unsigned int v68; // [rsp+48h] [rbp-71h]
  unsigned int v69; // [rsp+4Ch] [rbp-6Dh]
  unsigned int v70; // [rsp+50h] [rbp-69h]
  unsigned int v71; // [rsp+54h] [rbp-65h]
  bool v72; // [rsp+58h] [rbp-61h]
  __int64 v73; // [rsp+60h] [rbp-59h]
  unsigned int v74; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v75; // [rsp+6Ch] [rbp-4Dh]
  unsigned int v76; // [rsp+70h] [rbp-49h]
  unsigned __int64 v77; // [rsp+78h] [rbp-41h] BYREF
  int v78; // [rsp+80h] [rbp-39h]
  _DWORD v79[2]; // [rsp+88h] [rbp-31h] BYREF
  int *v80; // [rsp+90h] [rbp-29h]
  __int64 *v81; // [rsp+98h] [rbp-21h]
  __int64 v82; // [rsp+A0h] [rbp-19h]
  _BYTE v83[96]; // [rsp+A8h] [rbp-11h] BYREF
  int v85; // [rsp+120h] [rbp+67h]
  __int64 v87; // [rsp+130h] [rbp+77h] BYREF
  va_list va; // [rsp+130h] [rbp+77h]
  __int64 v89; // [rsp+138h] [rbp+7Fh]
  va_list va1; // [rsp+140h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v87 = va_arg(va1, _QWORD);
  v89 = va_arg(va1, _QWORD);
  v4 = a1;
  v5 = 1;
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
    (VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v83,
    a1 + 41,
    (unsigned int *)&a1[46],
    1);
  v6 = 0;
  v85 = *(_DWORD *)(a2 + 60);
  v68 = 0;
  if ( v85 )
  {
    v7 = *(_DWORD *)(a2 + 60);
    v8 = *(_DWORD *)(a2 + 64) == 0 ? 6 : 0;
    v69 = v8;
    while ( v8 > 5 )
    {
      v12 = v6;
      v11 = v6++;
      v68 = v6;
      if ( _bittest(&v7, v12) )
      {
        v72 = 1;
LABEL_8:
        QuadPart = v4->QuadPart;
        v14 = *(_DWORD *)(a2 + 68);
        v85 &= ~(1 << v11);
        v75 = v11 + *(_DWORD *)(1584LL * (v14 & 0x3F) + *(_QWORD *)(v4->QuadPart + 40224) + 20);
        v15 = *(_QWORD *)(QuadPart + 3712);
        v82 = v75;
        v16 = *(_QWORD *)(v15 + 8LL * v75);
        v73 = v16;
        if ( (*(_DWORD *)(v16 + 80) & 0x1001) == 0 )
        {
          v17 = 0;
          v18 = (v14 & 0x100) != 0;
          v71 = 0;
          v19 = a3;
          if ( v18 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a3 + 1) + 96LL) & 2) == 0 )
              v17 = 7;
            v71 = v17;
          }
LABEL_13:
          while ( 2 )
          {
            v20 = *(_QWORD *)(a2 + 16);
            v21 = 2013265919;
            v79[1] = 2;
            v22 = v20 + (v20 >> 2);
            v79[0] = 0;
            v77 = v22;
            while ( 2 )
            {
              v74 = 0;
              v23 = *((_BYTE *)v19 + 58) & 0x10;
              v70 = v21;
              v76 = v23 != 0;
              v24 = (_DWORD *)((char *)v79 + (-v76 & 4));
              v80 = v24;
              do
              {
                v25 = v21;
                v78 = *v24;
                if ( v78 == 2 )
                {
                  if ( (*(_DWORD *)(a2 + 68) & 0x40) != 0 && v21 >= *(_DWORD *)(a2 + 392) - 1 )
                    v25 = *(_DWORD *)(a2 + 392) - 1;
                  v30 = (_QWORD *)((char *)VIDMM_PROCESS::GetCommitmentInformation(
                                             *((VIDMM_PROCESS **)v19 + 1),
                                             *(_DWORD *)(*(_QWORD *)(v4->QuadPart + 24) + 240LL),
                                             *(_DWORD *)(v16 + 20))
                                 + 40);
                  v31 = (_QWORD *)*v30;
                  if ( (_QWORD *)*v30 != v30 )
                  {
                    while ( 1 )
                    {
                      v32 = (VIDMM_DEVICE *)v31[4];
                      v31 = (_QWORD *)*v31;
                      if ( (v32 != v29
                         || (VIDMM_GLOBAL::_Config & 0x40) != 0
                         && (*(_DWORD *)(a2 + 392) >= 0xA0000000 || (*(_DWORD *)(a2 + 68) & 0x40) == 0))
                        && ((*((_BYTE *)v29 + 58) & 0x10) == 0 || v32 == v29) )
                      {
                        if ( g_IsInternalReleaseOrDbg )
                          *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v26, v28, v29) + 24) = v32;
                        LOBYTE(v87) = 0;
                        VIDMM_DEVICE::FaultAllDemotableAllocations(v32, v26, v75, v71, v25, &v74, &v77, (__int64 *)va);
                        if ( (_BYTE)v87 && g_IsInternalReleaseOrDbg )
                        {
                          v34 = WdLogNewEntry5_WdTrace(v27, v26, v28, v33);
                          v27 = v25;
                          *(_QWORD *)(v34 + 24) = v32;
                          *(_QWORD *)(v34 + 32) = v25;
                        }
                        v22 = v77;
                        if ( !v77 )
                        {
                          v51 = v73;
                          goto LABEL_65;
                        }
                        v29 = a3;
                      }
                      if ( v31 == v30 )
                      {
                        v16 = v73;
                        goto LABEL_53;
                      }
                    }
                  }
LABEL_54:
                  v21 = v70;
                }
                else
                {
                  v35 = *(__int64 **)(v16 + 136);
                  if ( v35 != (__int64 *)(v16 + 136) )
                  {
                    while ( 1 )
                    {
                      v36 = v35 - 3;
                      v37 = v35;
                      v38 = (_QWORD *)*(v35 - 3);
                      v35 = (__int64 *)*v35;
                      if ( !(unsigned __int8)PsIsSystemProcess(*v38) )
                      {
                        v39 = (__int64 *)v36[5];
                        v81 = v36 + 5;
                        if ( v39 != v36 + 5 )
                          break;
                      }
LABEL_52:
                      v16 = v73;
                      if ( v35 == (__int64 *)(v73 + 136) )
                      {
LABEL_53:
                        v4 = a1;
                        goto LABEL_54;
                      }
                    }
                    while ( 1 )
                    {
                      v40 = (VIDMM_DEVICE *)v39[4];
                      v39 = (__int64 *)*v39;
                      if ( VIDMM_DEVICE::CanSuspendThisDevice(v40, a3, v78, v89) )
                      {
                        if ( g_IsInternalReleaseOrDbg )
                          *(_QWORD *)(WdLogNewEntry5_WdTrace(v42, v41, v43, v44) + 24) = v40;
                        LOBYTE(v87) = 0;
                        VIDMM_DEVICE::FaultAllDemotableAllocations(v40, v41, v75, v71, v70, &v74, &v77, (__int64 *)va);
                        if ( !(_BYTE)v87 )
                          goto LABEL_49;
                        if ( g_IsInternalReleaseOrDbg )
                        {
                          v48 = WdLogNewEntry5_WdTrace(v46, v45, v47, v33);
                          *(_QWORD *)(v48 + 24) = v40;
                          *(_QWORD *)(v48 + 32) = v70;
                        }
                        v49 = *v37;
                        if ( *v37 )
                        {
                          if ( *(__int64 **)(v49 + 8) != v37
                            || (v50 = (__int64 **)v37[1], *v50 != v37)
                            || (*v50 = (__int64 *)v49,
                                *(_QWORD *)(v49 + 8) = v50,
                                v51 = v73,
                                v52 = *(__int64 ***)(v73 + 144),
                                *v52 != (__int64 *)(v73 + 136)) )
                          {
                            __fastfail(3u);
                          }
                          *v37 = v73 + 136;
                          v37[1] = (__int64)v52;
                          *v52 = v37;
                          *(_QWORD *)(v73 + 144) = v37;
                        }
                        else
                        {
LABEL_49:
                          v51 = v73;
                        }
                        v22 = v77;
                        if ( !v77 )
                          break;
                      }
                      if ( v39 == v81 )
                        goto LABEL_52;
                    }
LABEL_65:
                    LOBYTE(v33) = v72;
                    LargestGap = VIDMM_SEGMENT::GetLargestGap(v51, a2, v71, v33, v64, v65, v66, v67);
                    if ( g_IsInternalReleaseOrDbg )
                    {
                      v57 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v53, v55, v56);
                      *(_QWORD *)(v57 + 24) = LargestGap;
                      *(_QWORD *)(v57 + 32) = *(_QWORD *)(a2 + 16);
                    }
                    if ( LargestGap < *(_QWORD *)(a2 + 16) )
                    {
                      v16 = v73;
                      v19 = a3;
                      v4 = a1;
                      goto LABEL_13;
                    }
                    goto LABEL_87;
                  }
                }
                v19 = a3;
                v24 = v80 + 1;
                ++v76;
                ++v80;
              }
              while ( v76 < 2 );
              if ( v74 - 1 <= 0xC7FFFFFE )
              {
                if ( v21 == 2013265919 )
                {
                  v21 = -939524097;
                  if ( v74 <= 0x9FFFFFFF )
                    v21 = -1610612737;
                  goto LABEL_63;
                }
                if ( v21 == -1610612737 )
                {
                  v21 = -939524097;
LABEL_63:
                  v19 = a3;
                  continue;
                }
              }
              break;
            }
            if ( v22 != *(_QWORD *)(a2 + 16) + (*(_QWORD *)(a2 + 16) >> 2) )
            {
              LOBYTE(v19) = v72;
              v59 = VIDMM_SEGMENT::GetLargestGap(v16, a2, 0LL, v19, v64, v65, v66, v67);
              if ( g_IsInternalReleaseOrDbg )
              {
                v62 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v58, v60, v61);
                v62[3] = v82;
                v62[4] = v59;
                v62[5] = *(_QWORD *)(a2 + 16);
              }
              if ( v59 >= *(_QWORD *)(a2 + 16) )
                goto LABEL_87;
            }
            if ( (VIDMM_GLOBAL::_Config & 0x40) == 0
              || (_DWORD)v89 == 2
              || *(_DWORD *)(a2 + 392) < 0xA0000000 && (*(_DWORD *)(a2 + 68) & 0x40) != 0
              || !dword_1C006E580
              || g_DemotedHighPriAllocDebugMode
              || KdRefreshDebuggerNotPresent() )
            {
              v4 = a1;
            }
            else
            {
              DbgPrintEx(
                0x65u,
                0,
                "\nCouldn't find preferred memory for a high priority allocation 0x%p.\n",
                (const void *)a2);
              DbgPrintEx(
                0x65u,
                0,
                "\n"
                "We broke into the debugger to allow a chance for debugging this issue.\n"
                "\n"
                "To disable debug breaks on high priority allocation page-in failures, run \"?? dxgmms2!g_DemotedHighPriA"
                "llocDebugMode=1\"\n"
                "or \"ed 0x%p 1\"\n"
                "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_DemotedHighPriAllocDebugMod"
                "e=2\"\n"
                "or \"ed 0x%p 2\"\n"
                "\n",
                (const void *)&g_DemotedHighPriAllocDebugMode,
                (const void *)&g_DemotedHighPriAllocDebugMode);
              __debugbreak();
              v16 = v73;
              v19 = a3;
              v4 = a1;
              if ( g_DemotedHighPriAllocDebugMode == 2 )
                continue;
            }
            break;
          }
        }
        v8 = v69;
        v7 = v85;
LABEL_84:
        v6 = v68;
      }
      if ( !v7 )
        goto LABEL_86;
    }
    v9 = 3 * v8++;
    v69 = v8;
    v10 = (*(_DWORD *)(a2 + 64) >> (2 * v9)) & 0x1F;
    if ( v10 )
    {
      v11 = v10 - 1;
      v72 = ((*(_DWORD *)(a2 + 64) >> (6 * v8)) & 0x20) == 0;
      goto LABEL_8;
    }
    goto LABEL_84;
  }
LABEL_86:
  v5 = 0;
LABEL_87:
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v83);
  return v5;
}
