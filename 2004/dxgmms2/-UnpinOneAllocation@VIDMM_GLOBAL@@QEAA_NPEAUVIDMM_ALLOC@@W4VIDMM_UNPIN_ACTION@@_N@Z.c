/*
 * XREFs of ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00B5A90
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00B5A74 (-UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BD250 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00C960C (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C00222E8 (-DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C006179C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087998 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00B9AD8 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::UnpinOneAllocation(struct VIDMM_ALLOC **a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  __int64 v8; // rax
  bool v10; // di
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  void *v14; // rax
  ADAPTER_RENDER *v15; // rcx
  _QWORD v16[12]; // [rsp+20h] [rbp-78h] BYREF
  _DXGKARG_STOPCAPTURE v17; // [rsp+A8h] [rbp+10h] BYREF

  v5 = (int)a3;
  if ( (**(_DWORD **)(**(_QWORD **)a2 + 496LL) & 0x40000000) != 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(a1, a2);
    WdLogEvent5_WdWarning(v8);
    return 0;
  }
  else
  {
    v10 = 1;
    if ( (a3 & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
      v10 = VIDMM_DEVICE::UnreferencePinnedAllocation(*(VIDMM_DEVICE **)(a2 + 8), (struct VIDMM_ALLOC *)a2, a4 != 1);
    }
    if ( (v5 & 2) != 0 && v10 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v11 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        *(_QWORD *)(v11 + 24) = a2;
        *(_QWORD *)(v11 + 32) = v5;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 96) + 12LL), 0xFFFFFFFF) == 1 )
      {
        v12 = *(_QWORD *)(a2 + 16);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 48);
          if ( (*(_DWORD *)(v13 + 4) & 0x20) != 0 )
          {
            v14 = *(void **)(v13 + 16);
            v15 = a1[2];
            v17.hAllocation = v14;
            ADAPTER_RENDER::DdiStopCapture(v15, &v17);
          }
        }
      }
      if ( !(*(_BYTE *)(a2 + 25) & 1 | *(_DWORD *)(a2 + 152)) )
      {
        if ( KeGetCurrentThread() == *((struct _KTHREAD **)*a1 + 1) )
        {
          LOBYTE(a3) = 1;
          VIDMM_GLOBAL::EvictOneAllocation(a1, (struct VIDMM_ALLOC *)a2, a3);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 164));
          memset(v16, 0, 0x58uLL);
          LODWORD(v16[0]) = 205;
          v16[2] = a2;
          VIDMM_GLOBAL::QueueSystemCommandAndWait((VIDMM_GLOBAL *)a1, (struct _VIDMM_SYSTEM_COMMAND *)v16, 1);
        }
      }
    }
    return v10;
  }
}
