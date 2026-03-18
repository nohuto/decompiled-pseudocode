/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007BF40
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007BEA8 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C00140D0 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x1C0024B38 (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x1C0024DF8 (McTemplateK0puu_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0065AE4 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0069C20 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1C006DB70 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006E0D4 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00883AC (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0088504 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0ED8 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0F88 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B42A8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC *a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  BOOL v10; // r12d
  BOOL v11; // esi
  char v12; // r13
  char *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // r15d
  bool v23; // r14
  enum _D3DDDI_RECLAIM_RESULT *v24; // r12
  struct VIDMM_ALLOC *v25; // r14
  VIDMM_GLOBAL *v26; // rdi
  __int64 v27; // rbx
  int v28; // eax
  int v29; // eax
  _QWORD *v31; // r12
  _QWORD *v32; // rdi
  VIDMM_GLOBAL *v33; // rbx
  _QWORD *v34; // rsi
  struct VIDMM_PAGING_QUEUE *v35; // r12
  _QWORD *v36; // r14
  int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // r13
  _QWORD *v42; // r12
  PRKPROCESS *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // rsi
  VIDMM_GLOBAL *v47; // rbx
  PRKPROCESS *v48; // rcx
  enum _D3DDDI_RECLAIM_RESULT *v49; // r12
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  NTSTATUS v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  ULONG AllocationType[2]; // [rsp+20h] [rbp-E0h]
  __int64 Protect; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v65[8]; // [rsp+40h] [rbp-C0h] BYREF
  VIDMM_GLOBAL *v66; // [rsp+48h] [rbp-B8h]
  struct VIDMM_ALLOC *v67; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v68; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v69; // [rsp+60h] [rbp-A0h]
  enum _D3DDDI_RECLAIM_RESULT *v70; // [rsp+68h] [rbp-98h]
  __int64 v71; // [rsp+70h] [rbp-90h]
  struct VIDMM_PAGING_QUEUE *v72; // [rsp+78h] [rbp-88h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-80h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 *v75; // [rsp+90h] [rbp-70h]
  unsigned __int64 v76; // [rsp+98h] [rbp-68h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v77; // [rsp+A0h] [rbp-60h] BYREF
  int v78; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v79; // [rsp+B4h] [rbp-4Ch]
  int v80; // [rsp+BCh] [rbp-44h]
  _QWORD *v81; // [rsp+C0h] [rbp-40h]
  __int64 v82; // [rsp+C8h] [rbp-38h]
  __int128 v83; // [rsp+D0h] [rbp-30h]
  __int128 v84; // [rsp+E0h] [rbp-20h]
  __int128 v85; // [rsp+F0h] [rbp-10h]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  struct _KAPC_STATE v87; // [rsp+130h] [rbp+30h] BYREF
  struct _KAPC_STATE v88; // [rsp+160h] [rbp+60h] BYREF

  v75 = a4;
  v67 = a3;
  v72 = a2;
  v66 = this;
  v70 = a5;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
  v7 = **(_QWORD **)a3;
  v71 = v7;
  v8 = *(_DWORD *)(v7 + 84) & 0x80;
  if ( (*(_DWORD *)(v7 + 84) & 0x80) != 0 && !a5 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v8, a2, a3);
    *(_QWORD *)(v38 + 24) = a3;
    WdLogEvent5_WdAssertion(v38);
    VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)a3 + 1) + 32LL));
    return 3221225485LL;
  }
  v9 = *((_DWORD *)this + 1762);
  v10 = (_DWORD)v8 && (v9 & 0x10000) != 0;
  v11 = (v9 & 8) != 0;
  v69 = (v9 & 8) != 0;
  if ( v10 )
  {
    VIDMM_GLOBAL::ForceDecommitOffer(this, a3);
  }
  else if ( (v9 & 8) != 0 )
  {
    VIDMM_GLOBAL::ForceDiscardOffer(this, a3);
  }
  v12 = 0;
  v13 = (char *)this + 39968;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v37 = *((_DWORD *)v13 + 6);
      if ( v37 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventBlockThread, v15, v37);
    }
    ExAcquirePushLockExclusiveEx(v13, 0LL);
  }
  *((_QWORD *)v13 + 1) = KeGetCurrentThread();
  v16 = (_QWORD *)(v7 + 392);
  v17 = *(_QWORD *)(v7 + 392);
  if ( v17 )
  {
    if ( *(_QWORD **)(v17 + 8) != v16 || (v18 = *(_QWORD **)(v7 + 400), (_QWORD *)*v18 != v16) )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    *v16 = 0LL;
  }
  if ( *(_QWORD *)(v7 + 408) )
  {
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v66, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    v12 = 1;
  }
  *((_QWORD *)v13 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v7 + 312));
  v20 = *(unsigned __int16 *)(*((_QWORD *)a3 + 12) + 4LL);
  *(_WORD *)(*((_QWORD *)a3 + 12) + 4LL) = 0;
  v21 = (__int16)v20;
  if ( (_WORD)v20 )
  {
    v22 = 0;
    v23 = (*(_DWORD *)(v7 + 84) & 0x40) != 0;
    if ( v12 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(v7 + 96) + 8LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v20 + 32) + 376LL), -*(_QWORD *)(v7 + 8));
    }
    if ( v23 )
    {
LABEL_20:
      *(_DWORD *)(v7 + 84) &= ~0x80u;
      v24 = v70;
      if ( !v70 )
      {
        *(_BYTE *)(v7 + 89) = 0;
LABEL_27:
        v25 = v67;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LOBYTE(Protect) = v21;
          LOBYTE(AllocationType[0]) = *(_BYTE *)(**(_QWORD **)v67 + 424LL);
          McTemplateK0puu_EtwWriteTransfer(
            **(_QWORD **)v67,
            &EventReclaimAllocation,
            v19,
            v67,
            *(_QWORD *)AllocationType,
            Protect);
        }
        v68 = 0LL;
        if ( v11 || (_DWORD)v21 == 3 || (_DWORD)v21 == 2 && (*(_DWORD *)(v7 + 80) & 0x40) != 0 || !*(_DWORD *)(v7 + 120) )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v20);
            v60[4] = v69;
            v60[3] = v25;
            v60[5] = v21;
            v20 = (*(_DWORD *)(v7 + 80) >> 6) & 1;
            v60[6] = v20;
            v60[7] = 0LL;
          }
          v31 = (_QWORD *)(v7 + 288);
          v32 = *(_QWORD **)(v7 + 288);
          v69 = v7 + 288;
          if ( v32 != (_QWORD *)(v7 + 288) )
          {
            v33 = v66;
            do
            {
              v34 = (_QWORD *)*(v32 - 2);
              if ( v34 != v32 - 2 )
              {
                v35 = v72;
                do
                {
                  v36 = v34 - 5;
                  if ( (*(_DWORD *)(v34 - 1) & 1) == 0 )
                  {
                    v20 = (*((_BYTE *)v36 + 25) & 1) != 0;
                    if ( (unsigned int)v20 | *((_DWORD *)v36 + 38) )
                    {
                      v79 = 0LL;
                      v80 = 0;
                      v82 = 0LL;
                      v83 = 0LL;
                      v84 = 0LL;
                      v85 = 0LL;
                      v78 = 210;
                      v81 = v34 - 5;
                      v22 = VIDMM_GLOBAL::QueueDeferredCommand(
                              v33,
                              v35,
                              (struct _VIDMM_DEFERRED_COMMAND *)&v78,
                              0,
                              &v68);
                      if ( (*((_DWORD *)v36 + 7) & 0x20) != 0 )
                      {
                        v36[35] = v68;
                        v36[32] = v35;
                      }
                    }
                  }
                  v34 = (_QWORD *)*v34;
                }
                while ( v34 != v32 - 2 );
                v31 = (_QWORD *)v69;
              }
              v32 = (_QWORD *)*v32;
            }
            while ( v32 != v31 );
            v7 = v71;
          }
        }
        else if ( g_IsInternalReleaseOrDbg )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdTrace(v20);
          v59[3] = v25;
          v59[4] = 0LL;
          v59[5] = v21;
          v20 = (*(_DWORD *)(v7 + 80) >> 6) & 1;
          v59[7] = 1LL;
          v59[6] = v20;
        }
        v26 = v66;
        goto LABEL_38;
      }
      if ( (_DWORD)v21 == 1 )
      {
        *v70 = D3DDDI_RECLAIM_RESULT_OK;
      }
      else
      {
        if ( (_DWORD)v21 == 3 )
          *v70 = D3DDDI_RECLAIM_RESULT_DISCARDED;
        if ( v23
          && !*(_QWORD *)(v7 + 128)
          && *(_BYTE *)(v7 + 89)
          && !*(_BYTE *)(v7 + 90)
          && (*(_DWORD *)(v7 + 84) & 8) != 0 )
        {
          if ( !v11 )
          {
            v52 = *(_QWORD *)(v7 + 96);
            if ( v52 )
            {
              v20 = *(_QWORD *)(v52 + 8);
              if ( v20 )
              {
                memset(&v88, 0, sizeof(v88));
                KeStackAttachProcess(*(PRKPROCESS *)v20, &v88);
                v53 = *(_QWORD *)(v7 + 96);
                if ( (**(_DWORD **)(v7 + 496) & 0x20000000) != 0 )
                {
                  BaseAddress = *(PVOID *)(v53 + 16);
                  RegionSize = *(_QWORD *)(v7 + 8);
                  v54 = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          &BaseAddress,
                          0LL,
                          &RegionSize,
                          0x1000000u,
                          4u);
                }
                else
                {
                  v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v53 + 8) + 24LL) + 128LL))(
                          *(_QWORD *)(*(_QWORD *)(v53 + 8) + 24LL),
                          *(_QWORD *)(v53 + 24));
                }
                v22 = v54;
                KeUnstackDetachProcess(&v88);
                if ( v22 < 0 )
                {
                  *(_BYTE *)(v7 + 89) = 0;
                  v58 = WdLogNewEntry5_WdEvent(v56, v55);
                  *(_QWORD *)(v58 + 24) = v22;
                  WdLogEvent5_WdEvent(v58);
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v7 + 8) >> 12;
                    AllocationType[0] = 0;
                    McTemplateK0pqqt_EtwWriteTransfer(
                      0LL,
                      &EventUnreset,
                      v19,
                      v7,
                      *(_QWORD *)AllocationType,
                      Protect,
                      0);
                  }
                  v22 = 0;
                }
                else
                {
                  *v24 = D3DDDI_RECLAIM_RESULT_OK;
                  *(_QWORD *)(v7 + 432) = 0LL;
                  v57 = WdLogNewEntry5_WdEvent(v56, v55);
                  *(_QWORD *)(v57 + 24) = v7;
                  WdLogEvent5_WdEvent(v57);
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v7 + 8) >> 12;
                    AllocationType[0] = 0;
                    McTemplateK0pqqt_EtwWriteTransfer(
                      v20,
                      &EventUnreset,
                      v19,
                      v7,
                      *(_QWORD *)AllocationType,
                      Protect,
                      1);
                  }
                }
                *(_DWORD *)(v7 + 84) &= ~8u;
              }
            }
            goto LABEL_27;
          }
LABEL_111:
          *v24 = D3DDDI_RECLAIM_RESULT_DISCARDED;
          goto LABEL_27;
        }
      }
      if ( !v11 )
        goto LABEL_27;
      goto LABEL_111;
    }
    if ( v10 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 96) + 8LL) + 112LL) & 4) != 0 )
    {
      v26 = v66;
    }
    else
    {
      v22 = VIDMM_GLOBAL::CommitGlobalBackingStore(v66, (struct _VIDMM_GLOBAL_ALLOC *)v7);
      if ( v22 < 0 )
      {
        v26 = v66;
      }
      else
      {
        v41 = (_QWORD *)(v7 + 288);
        v42 = *(_QWORD **)(v7 + 288);
        if ( v42 == (_QWORD *)(v7 + 288) )
        {
LABEL_86:
          *(_BYTE *)(v7 + 89) = 0;
          goto LABEL_20;
        }
        while ( 1 )
        {
          v43 = (PRKPROCESS *)*(v42 - 6);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(*v43, &ApcState);
          v65[0] = 1;
          v22 = VIDMM_GLOBAL::CommitLocalBackingStore(v66, (struct _VIDMM_LOCAL_ALLOC *)(v42 - 7), v65, 0LL);
          KeUnstackDetachProcess(&ApcState);
          if ( v22 < 0 )
            break;
          v42 = (_QWORD *)*v42;
          if ( v42 == v41 )
            goto LABEL_86;
        }
        v45 = WdLogNewEntry5_WdAssertion(v20, v44, v19);
        *(_QWORD *)(v45 + 24) = v42 - 7;
        WdLogEvent5_WdAssertion(v45);
        v46 = (_QWORD *)v42[1];
        if ( v46 != v41 )
        {
          v47 = v66;
          do
          {
            v48 = (PRKPROCESS *)*(v46 - 6);
            memset(&v87, 0, sizeof(v87));
            KeStackAttachProcess(*v48, &v87);
            VIDMM_GLOBAL::UncommitLocalBackingStore(v47, (struct _VIDMM_LOCAL_ALLOC *)(v46 - 7), 1);
            KeUnstackDetachProcess(&v87);
            v46 = (_QWORD *)v46[1];
          }
          while ( v46 != v41 );
          v7 = v71;
        }
        v26 = v66;
        VIDMM_GLOBAL::UncommitGlobalBackingStore(v66, (struct _VIDMM_GLOBAL_ALLOC *)v7, 0);
      }
    }
    v49 = v70;
    v22 = 0;
    v50 = *(unsigned __int16 *)(*((_QWORD *)v67 + 12) + 4LL);
    *(_WORD *)(*((_QWORD *)v67 + 12) + 4LL) = 3;
    *v49 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
    _InterlockedIncrement(&dword_1C00517B4);
    v51 = WdLogNewEntry5_WdLowResource(v50);
    *(_QWORD *)(v51 + 24) = v7;
    WdLogEvent5_WdLowResource(v51);
LABEL_38:
    v27 = *(_QWORD *)(v7 + 312);
    if ( *(struct _KTHREAD **)(v27 + 16) != KeGetCurrentThread() )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, 0LL);
      v61[3] = 275LL;
      v61[4] = 4LL;
      v61[5] = v27;
      v61[6] = 0LL;
      v61[7] = 0LL;
      WdLogEvent5_WdCriticalError(v61);
    }
    v28 = *(_DWORD *)(v27 + 24);
    if ( v28 <= 0 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v20, 0LL, v19);
      *(_QWORD *)(v62 + 24) = 703LL;
      WdLogEvent5_WdAssertion(v62);
      v28 = *(_DWORD *)(v27 + 24);
    }
    v29 = v28 - 1;
    *(_DWORD *)(v27 + 24) = v29;
    if ( !v29 )
    {
      *(_QWORD *)(v27 + 16) = 0LL;
      ExReleasePushLockExclusiveEx(v27, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v22 == 259 )
    {
      if ( v75 )
      {
        *v75 = v68;
      }
      else
      {
        v77 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v72 + 11);
        v76 = v68;
        VIDMM_GLOBAL::WaitForFences(v26, &v77, &v76, 1u, 0LL);
        return 0;
      }
    }
    return (unsigned int)v22;
  }
  v39 = WdLogNewEntry5_WdAssertion(v20, 0LL, v19);
  *(_QWORD *)(v39 + 24) = a3;
  WdLogEvent5_WdAssertion(v39);
  if ( a5 )
    *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 312), v40);
  return DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
}
