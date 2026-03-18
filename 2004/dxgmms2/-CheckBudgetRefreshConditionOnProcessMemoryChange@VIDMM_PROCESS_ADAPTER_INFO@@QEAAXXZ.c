/*
 * XREFs of ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0081268
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008B6F0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BAD68 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E00 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0081458 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C0082EF0 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(
        VIDMM_PROCESS_ADAPTER_INFO *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // r14
  unsigned int v4; // edi
  VIDMM_PROCESS_ADAPTER_INFO *v5; // rbx
  char *v6; // r15
  VIDMM_PROCESS_BUDGET_STATE *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // r9
  int v11; // r8d
  unsigned int *v12; // r11
  unsigned __int64 v13; // r10
  __int64 v14; // rbp
  int v15; // r9d
  unsigned __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // rax

  v3 = 0;
  v4 = 0;
  v5 = this;
  if ( *(_DWORD *)(*(_QWORD *)this + 7000LL) )
  {
    v6 = (char *)this + 360;
    do
    {
      v7 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)v5 + 6) + 296LL * v4);
      if ( v6 && *((struct _KTHREAD **)v6 + 1) == KeGetCurrentThread() )
      {
        v18 = WdLogNewEntry5_WdAssertion(this, a2, a3);
        *(_QWORD *)(v18 + 24) = 1569LL;
        WdLogEvent5_WdAssertion(v18);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v15 = *((_DWORD *)v6 + 6);
          if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v8, &EventBlockThread, v9, v15);
        }
        ExAcquirePushLockSharedEx(v6, 0LL);
      }
      v10 = (_QWORD *)((char *)v7 + 184);
      v11 = 0;
      v12 = (unsigned int *)(1584LL * v4 + *(_QWORD *)(*(_QWORD *)v5 + 40216LL) + 496LL);
      while ( 1 )
      {
        v13 = *(v10 - 6);
        if ( v11 == 1 )
        {
          v16 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v7);
          v13 = v16 + v17;
        }
        v14 = *v12;
        if ( v13 > *v10 * (v14 + 100) / 0x64uLL || v13 < *v10 * (100 - v14) / 0x64uLL )
          break;
        ++v11;
        v12 += 6;
        ++v10;
        if ( v11 >= 2 )
          goto LABEL_12;
      }
      v3 = 1;
LABEL_12:
      ExReleasePushLockSharedEx(v6, 0LL);
      KeLeaveCriticalRegion();
      this = *(VIDMM_PROCESS_ADAPTER_INFO **)v5;
      ++v4;
    }
    while ( v4 < *(_DWORD *)(*(_QWORD *)v5 + 7000LL) );
    if ( v3 )
      VIDMM_GLOBAL::RequestNewBudget(this, 1);
  }
}
