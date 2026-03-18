/*
 * XREFs of ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C00B9814
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00BA288 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0070734 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1C00B8B0C (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C00B9794 (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00C7D20 (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 */

char VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc(__int64 *a1, __int64 a2, VIDMM_DEVICE *a3, ...)
{
  __int64 *v4; // rdi
  int v5; // ecx
  VIDMM_DEVICE *v6; // r10
  __int64 v7; // rax
  int v8; // r9d
  unsigned int v9; // edx
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r11
  unsigned int v15; // r13d
  unsigned __int64 v16; // rax
  unsigned int v17; // edx
  unsigned __int64 v18; // r14
  char v19; // al
  _DWORD *v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  VIDMM_DEVICE *v24; // r10
  _QWORD *v25; // r12
  _QWORD *v26; // r15
  VIDMM_DEVICE *v27; // rdi
  __int64 v28; // rax
  __int64 *v29; // r15
  __int64 *v30; // rsi
  __int64 *v31; // rdi
  _QWORD *v32; // rax
  _QWORD *v33; // r13
  _QWORD *v34; // r12
  VIDMM_DEVICE *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 **v41; // rcx
  __int64 v42; // rcx
  __int64 **v43; // rax
  unsigned __int64 LargestGap; // rdi
  __int64 v45; // rax
  unsigned __int64 v46; // rdi
  _QWORD *v47; // rax
  int v49; // [rsp+48h] [rbp-49h]
  int v50; // [rsp+4Ch] [rbp-45h]
  unsigned int v51; // [rsp+50h] [rbp-41h]
  unsigned int v52; // [rsp+54h] [rbp-3Dh]
  int v53; // [rsp+58h] [rbp-39h]
  bool v54; // [rsp+5Ch] [rbp-35h]
  __int64 v55; // [rsp+60h] [rbp-31h]
  unsigned int v56; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v57; // [rsp+6Ch] [rbp-25h]
  unsigned int v58; // [rsp+70h] [rbp-21h]
  unsigned __int64 v59; // [rsp+78h] [rbp-19h] BYREF
  _DWORD v60[2]; // [rsp+80h] [rbp-11h] BYREF
  _DWORD *v61; // [rsp+88h] [rbp-9h]
  __int64 v62; // [rsp+90h] [rbp-1h]
  char v64; // [rsp+F0h] [rbp+5Fh] BYREF
  VIDMM_DEVICE *v65; // [rsp+F8h] [rbp+67h]
  __int64 v66; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va; // [rsp+100h] [rbp+6Fh]
  __int64 v68; // [rsp+108h] [rbp+77h]
  _BYTE *v69; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v66 = va_arg(va1, _QWORD);
  v68 = va_arg(va1, _QWORD);
  v69 = va_arg(va1, _BYTE *);
  v65 = a3;
  v4 = a1;
  v5 = 0;
  v49 = *(_DWORD *)(a2 + 68);
  v50 = 0;
  v6 = a3;
  *v69 = 0;
  LODWORD(v7) = *(_DWORD *)(a2 + 72);
  if ( !v49 )
    return v7;
  v8 = v49;
  v9 = (_DWORD)v7 == 0 ? 6 : 0;
  v51 = v9;
  do
  {
    if ( v9 > 5 )
    {
      LODWORD(v7) = v5;
      v11 = v5++;
      v50 = v5;
      if ( !_bittest(&v8, v7) )
        continue;
      v54 = 1;
    }
    else
    {
      LOBYTE(v7) = 3 * v9++;
      v51 = v9;
      v10 = (*(_DWORD *)(a2 + 72) >> (2 * v7)) & 0x1F;
      if ( !v10 )
        goto LABEL_87;
      v11 = v10 - 1;
      v54 = ((*(_DWORD *)(a2 + 72) >> (6 * v9)) & 0x20) == 0;
    }
    v12 = *v4;
    v13 = *(unsigned int *)(a2 + 76);
    v49 &= ~(1 << v11);
    v57 = v11 + *(_DWORD *)(1584 * (v13 & 0x3F) + *(_QWORD *)(*v4 + 40216) + 20);
    v7 = *(_QWORD *)(v12 + 3712);
    v62 = v57;
    v14 = *(_QWORD *)(v7 + 8LL * v57);
    v55 = v14;
    if ( (*(_DWORD *)(v14 + 80) & 0x1001) != 0 )
      goto LABEL_86;
    v15 = 0;
    v53 = 0;
    if ( (v13 & 0x100) != 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v6 + 1) + 96LL) & 2) == 0 )
        v15 = 7;
      v53 = v15;
    }
    do
    {
LABEL_13:
      v16 = *(_QWORD *)(a2 + 16);
      v17 = 2013265919;
      v60[1] = 2;
      v18 = v16 + (v16 >> 2);
      v60[0] = 0;
      v59 = v18;
      while ( 2 )
      {
        v56 = 0;
        v19 = *((_BYTE *)v6 + 50) & 0x10;
        v52 = v17;
        v58 = v19 != 0;
        v20 = (_DWORD *)((char *)v60 + (-v58 & 4));
        v61 = v20;
        do
        {
          v21 = v17;
          LODWORD(v66) = *v20;
          if ( (_DWORD)v66 == 2 )
          {
            if ( (*(_DWORD *)(a2 + 76) & 0x40) != 0 && v17 >= *(_DWORD *)(a2 + 368) - 1 )
              v21 = *(_DWORD *)(a2 + 368) - 1;
            v25 = (_QWORD *)((char *)VIDMM_PROCESS::GetCommitmentInformation(
                                       *((VIDMM_PROCESS **)v6 + 1),
                                       *(_DWORD *)(*(_QWORD *)(*v4 + 24) + 232LL),
                                       *(_DWORD *)(v14 + 20))
                           + 40);
            v26 = (_QWORD *)*v25;
            if ( (_QWORD *)*v25 != v25 )
            {
              while ( 1 )
              {
                v27 = (VIDMM_DEVICE *)v26[4];
                v26 = (_QWORD *)*v26;
                if ( (v27 != v24
                   || (VIDMM_GLOBAL::_Config & 0x40) != 0
                   && (*(_DWORD *)(a2 + 368) >= 0xA0000000 || (*(_DWORD *)(a2 + 76) & 0x40) == 0))
                  && ((*((_BYTE *)v24 + 50) & 0x10) == 0 || v27 == v24) )
                {
                  if ( g_IsInternalReleaseOrDbg )
                    *(_QWORD *)(WdLogNewEntry5_WdTrace(v23) + 24) = v27;
                  LOBYTE(v66) = 0;
                  VIDMM_DEVICE::FaultAllDemotableAllocations(v27, v22, v57, v15, v21, &v56, &v59, (__int64 *)va);
                  if ( (_BYTE)v66 && g_IsInternalReleaseOrDbg )
                  {
                    v28 = WdLogNewEntry5_WdTrace(v23);
                    v23 = v21;
                    *(_QWORD *)(v28 + 24) = v27;
                    *(_QWORD *)(v28 + 32) = v21;
                  }
                  v18 = v59;
                  if ( !v59 )
                  {
                    v42 = v55;
                    goto LABEL_66;
                  }
                  v24 = v65;
                }
                if ( v26 == v25 )
                {
                  v14 = v55;
                  goto LABEL_54;
                }
              }
            }
          }
          else
          {
            v29 = *(__int64 **)(v14 + 136);
            if ( v29 == (__int64 *)(v14 + 136) )
              goto LABEL_56;
            do
            {
              v30 = v29 - 3;
              v31 = v29;
              v32 = (_QWORD *)*(v29 - 3);
              v29 = (__int64 *)*v29;
              if ( !(unsigned __int8)PsIsSystemProcess(*v32) )
              {
                v33 = v30 + 5;
                v34 = (_QWORD *)v30[5];
                while ( v34 != v33 )
                {
                  v35 = (VIDMM_DEVICE *)v34[4];
                  v34 = (_QWORD *)*v34;
                  if ( VIDMM_DEVICE::CanSuspendThisDevice(v35, v65, v66, v68) )
                  {
                    if ( g_IsInternalReleaseOrDbg )
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v37) + 24) = v35;
                    v64 = 0;
                    VIDMM_DEVICE::FaultAllDemotableAllocations(v35, v36, v57, v53, v52, &v56, &v59, &v64);
                    if ( !v64 )
                      goto LABEL_49;
                    if ( g_IsInternalReleaseOrDbg )
                    {
                      v39 = WdLogNewEntry5_WdTrace(v38);
                      *(_QWORD *)(v39 + 24) = v35;
                      *(_QWORD *)(v39 + 32) = v52;
                    }
                    v40 = *v31;
                    if ( *v31 )
                    {
                      if ( *(__int64 **)(v40 + 8) != v31
                        || (v41 = (__int64 **)v31[1], *v41 != v31)
                        || (*v41 = (__int64 *)v40,
                            *(_QWORD *)(v40 + 8) = v41,
                            v42 = v55,
                            v43 = *(__int64 ***)(v55 + 144),
                            *v43 != (__int64 *)(v55 + 136)) )
                      {
                        __fastfail(3u);
                      }
                      *v31 = v55 + 136;
                      v31[1] = (__int64)v43;
                      *v43 = v31;
                      *(_QWORD *)(v55 + 144) = v31;
                    }
                    else
                    {
LABEL_49:
                      v42 = v55;
                    }
                    v18 = v59;
                    if ( !v59 )
                    {
                      v15 = v53;
LABEL_66:
                      LOBYTE(v13) = v54;
                      LargestGap = VIDMM_SEGMENT::GetLargestGap(v42, a2, v15, v13);
                      if ( g_IsInternalReleaseOrDbg )
                      {
                        v45 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
                        *(_QWORD *)(v45 + 24) = LargestGap;
                        *(_QWORD *)(v45 + 32) = *(_QWORD *)(a2 + 16);
                      }
                      if ( LargestGap < *(_QWORD *)(a2 + 16) )
                      {
                        v6 = v65;
                        v14 = v55;
                        v4 = a1;
                        goto LABEL_13;
                      }
                      goto LABEL_91;
                    }
                  }
                }
              }
              v14 = v55;
            }
            while ( v29 != (__int64 *)(v55 + 136) );
            v15 = v53;
LABEL_54:
            v4 = a1;
          }
          v17 = v52;
LABEL_56:
          v6 = v65;
          v20 = v61 + 1;
          ++v58;
          ++v61;
        }
        while ( v58 < 2 );
        if ( v56 - 1 <= 0xC7FFFFFE )
        {
          if ( v17 == 2013265919 )
          {
            v17 = -939524097;
            if ( v56 <= 0x9FFFFFFF )
              v17 = -1610612737;
            goto LABEL_64;
          }
          if ( v17 == -1610612737 )
          {
            v17 = -939524097;
LABEL_64:
            v6 = v65;
            continue;
          }
        }
        break;
      }
      if ( v18 != *(_QWORD *)(a2 + 16) + (*(_QWORD *)(a2 + 16) >> 2) )
      {
        LOBYTE(v13) = v54;
        v46 = VIDMM_SEGMENT::GetLargestGap(v14, a2, 0LL, v13);
        if ( g_IsInternalReleaseOrDbg )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
          v47[3] = v62;
          v47[4] = v46;
          v47[5] = *(_QWORD *)(a2 + 16);
        }
        if ( v46 >= *(_QWORD *)(a2 + 16) )
        {
LABEL_91:
          LOBYTE(v7) = (_BYTE)v69;
          *v69 = 1;
          return v7;
        }
      }
      LODWORD(v7) = VIDMM_GLOBAL::_Config >> 6;
      if ( (VIDMM_GLOBAL::_Config & 0x40) == 0
        || (_DWORD)v68 == 2
        || *(_DWORD *)(a2 + 368) < 0xA0000000 && (LODWORD(v7) = *(_DWORD *)(a2 + 76), (v7 & 0x40) != 0)
        || (LOBYTE(v7) = (_BYTE)v69, *v69)
        || !dword_1C0051510
        || (LOBYTE(v7) = g_DemotedHighPriAllocDebugMode, g_DemotedHighPriAllocDebugMode)
        || (LOBYTE(v7) = KdRefreshDebuggerNotPresent(), (_BYTE)v7) )
      {
        v6 = v65;
        v4 = a1;
        break;
      }
      DbgPrintEx(0x65u, 0, "\nCouldn't find preferred memory for a high priority allocation 0x%p.\n", (const void *)a2);
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "\n"
        "To disable debug breaks on high priority allocation page-in failures, run \"?? dxgmms2!g_DemotedHighPriAllocDebu"
        "gMode=1\"\n"
        "or \"ed 0x%p 1\"\n"
        "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_DemotedHighPriAllocDebugMode=2\"\n"
        "or \"ed 0x%p 2\"\n"
        "\n",
        (const void *)&g_DemotedHighPriAllocDebugMode,
        (const void *)&g_DemotedHighPriAllocDebugMode);
      __debugbreak();
      LOBYTE(v7) = g_DemotedHighPriAllocDebugMode;
      v6 = v65;
      v14 = v55;
      v4 = a1;
    }
    while ( g_DemotedHighPriAllocDebugMode == 2 );
LABEL_86:
    v9 = v51;
    v8 = v49;
LABEL_87:
    v5 = v50;
  }
  while ( v8 );
  return v7;
}
