/*
 * XREFs of ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00A9F98
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A9174 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00AB3B0 (-UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00EBD94 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C002CC1C (-DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A0810 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A6BA8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00AA07C (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::UnpinOneAllocation(struct VIDMM_ALLOC **a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 v5; // rbp
  bool v8; // di
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  void *v13; // rax
  ADAPTER_RENDER *v14; // rcx
  _QWORD v15[12]; // [rsp+20h] [rbp-78h] BYREF
  _DXGKARG_STOPCAPTURE v16; // [rsp+A8h] [rbp+10h] BYREF

  v4 = a4;
  v5 = (int)a3;
  if ( (**(_DWORD **)(**(_QWORD **)a2 + 528LL) & 0x40000000) != 0 )
  {
    WdLogSingleEntry0(3LL);
    return 0;
  }
  else
  {
    v8 = 1;
    if ( (a3 & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
      v8 = VIDMM_DEVICE::UnreferencePinnedAllocation(*(VIDMM_DEVICE **)(a2 + 8), (struct VIDMM_ALLOC *)a2, v4 != 1);
    }
    if ( (v5 & 2) != 0 && v8 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v12 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, a2, a3, a4);
        *(_QWORD *)(v12 + 24) = a2;
        *(_QWORD *)(v12 + 32) = v5;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 96) + 12LL), 0xFFFFFFFF) == 1 )
      {
        v9 = *(_QWORD *)(a2 + 16);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 48);
          if ( (*(_DWORD *)(v10 + 4) & 0x20) != 0 )
          {
            v13 = *(void **)(v10 + 16);
            v14 = a1[2];
            v16.hAllocation = v13;
            ADAPTER_RENDER::DdiStopCapture(v14, &v16);
          }
        }
      }
      if ( !(*(_BYTE *)(a2 + 25) & 1 | *(_DWORD *)(a2 + 152)) )
      {
        if ( KeGetCurrentThread() == *((struct _KTHREAD **)*a1 + 1) )
        {
          LOBYTE(a3) = 1;
          VIDMM_GLOBAL::EvictOneAllocation(a1, (struct VIDMM_ALLOC **)a2, a3, a4);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 164));
          memset(v15, 0, 0x58uLL);
          LODWORD(v15[0]) = 205;
          v15[2] = a2;
          VIDMM_GLOBAL::QueueSystemCommandAndWait((VIDMM_GLOBAL *)a1, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1);
        }
      }
    }
    return v8;
  }
}
