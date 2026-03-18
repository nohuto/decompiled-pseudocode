/*
 * XREFs of ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C0068600
 * Callers:
 *     VidMmBeginCPUAccess @ 0x1C00016A0 (VidMmBeginCPUAccess.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C00018CC (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x1C002461C (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E00 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00804A0 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00B2300 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00B4D5C (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BeginCPUAccess(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        void **a7)
{
  __int64 *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  void *v36; // rax
  VIDMM_GLOBAL *v37; // rdi
  bool v38; // zf
  __int64 *v39; // rax
  __int64 v40; // r9
  char v41; // bl
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 *v54; // rax
  int v55; // eax
  __int64 v56; // rax
  int v57; // r9d
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned int v66; // r8d
  unsigned __int8 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  void *v74; // rax
  unsigned __int8 v75; // [rsp+20h] [rbp-58h]
  __int64 v77; // [rsp+88h] [rbp+10h]
  unsigned int v78; // [rsp+90h] [rbp+18h]

  v7 = *a2;
  v8 = 0LL;
  v9 = a4;
  v78 = 0;
  LODWORD(v11) = 0;
  v12 = **a2;
  KeEnterCriticalRegion();
  v77 = v12 + 472;
  ExAcquirePushLockExclusiveEx(v12 + 472, 0LL);
  if ( *((_WORD *)a2[12] + 2) )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v47 = WdLogNewEntry5_WdAssertion(v45, v44, v46);
      *(_QWORD *)(v47 + 24) = a2;
      *(_QWORD *)(v47 + 32) = 2LL;
      WdLogEvent5_WdAssertion(v47);
      LODWORD(v11) = -1073741811;
      goto LABEL_46;
    }
    v48 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v48 + 24) = a2;
    *(_QWORD *)(v48 + 32) = 2LL;
    WdLogEvent5_WdError(v48);
  }
  if ( (*(_DWORD *)(v12 + 84) & 0x20) != 0 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v14, v13, v15);
    *(_QWORD *)(v49 + 24) = 7847LL;
    WdLogEvent5_WdAssertion(v49);
    goto LABEL_46;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v50 = WdLogNewEntry5_WdTrace(v14);
    *(_QWORD *)(v50 + 24) = a2;
    *(_QWORD *)(v50 + 32) = v9;
  }
  v16 = v9 & 0xFFFFFFA7;
  *a7 = 0LL;
  if ( (v16 & 0xFFFFFC58) != 0 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v14, v13, v15);
    *(_QWORD *)(v51 + 24) = v16;
    WdLogEvent5_WdAssertion(v51);
    LODWORD(v11) = -1073741811;
    goto LABEL_46;
  }
  v17 = **(unsigned int **)(v12 + 496);
  if ( (v17 & 1) == 0 )
  {
    v52 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v52 + 24) = 7887LL;
    WdLogEvent5_WdError(v52);
    LODWORD(v11) = -1073741811;
    goto LABEL_46;
  }
  if ( (v17 & 8) == 0 )
  {
    v18 = *(_QWORD *)v7[1];
    if ( v18 != PsGetCurrentProcess(v17) && (*(_DWORD *)(v12 + 80) & 0x1000) == 0 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v19, v13, v15);
      *(_QWORD *)(v53 + 24) = 7902LL;
LABEL_67:
      WdLogEvent5_WdAssertion(v53);
      LODWORD(v11) = -1073741811;
      goto LABEL_46;
    }
  }
  v20 = **(unsigned int **)(v12 + 496);
  if ( (**(_DWORD **)(v12 + 496) & 0x60000000) == 0x20000000 && v7 != *(__int64 **)(v12 + 96) )
  {
    v13 = *(unsigned int *)(*((_QWORD *)this + 3) + 348LL);
    if ( (v13 & 0x10) == 0 && (v13 & 8) == 0 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v20, v13, v15);
      *(_QWORD *)(v53 + 24) = 7917LL;
      goto LABEL_67;
    }
  }
  if ( (v16 & 0x82) != 0 )
  {
    if ( (*(_DWORD *)(v12 + 76) & 0x40) == 0 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v20, v13, v15);
      *(_QWORD *)(v53 + 24) = 7943LL;
      goto LABEL_67;
    }
    if ( !*((_BYTE *)this + 7081) && (v20 & 4) != 0 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v20, v13, v15);
      *(_QWORD *)(v53 + 24) = 7954LL;
      goto LABEL_67;
    }
  }
  if ( (v16 & 0x81) != 0 )
  {
    if ( (v16 & 0x100) != 0 )
    {
      LODWORD(v11) = -1071775484;
      v43 = WdLogNewEntry5_WdEvent(v20, v13);
      *(_QWORD *)(v43 + 24) = a2;
      *(_QWORD *)(v43 + 32) = -1071775484LL;
      WdLogEvent5_WdEvent(v43);
      goto LABEL_46;
    }
    VIDMM_GLOBAL::WaitOnAllocForceSync((VIDMM_GLOBAL *)v20, (struct VIDMM_ALLOC *)a2);
    v78 = 4;
LABEL_15:
    if ( v7[3] )
    {
      v21 = *(_QWORD *)(v12 + 312);
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v21 + 16) == KeGetCurrentThread() )
      {
        v55 = *(_DWORD *)(v21 + 24);
        if ( v55 <= 0 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v23, v22, v24);
          *(_QWORD *)(v56 + 24) = 659LL;
          WdLogEvent5_WdAssertion(v56);
          v55 = *(_DWORD *)(v21 + 24);
        }
        v28 = v55 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v57 = *(_DWORD *)(v21 + 28);
            if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v26, &EventBlockThread, v27, v57);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v21 + 8));
          ExAcquirePushLockExclusiveEx(v21, 0LL);
        }
        if ( *(_QWORD *)(v21 + 16) )
        {
          v58 = WdLogNewEntry5_WdAssertion(v26, v25, v27);
          *(_QWORD *)(v58 + 24) = 683LL;
          WdLogEvent5_WdAssertion(v58);
        }
        if ( *(_DWORD *)(v21 + 24) )
        {
          v59 = WdLogNewEntry5_WdAssertion(v26, v25, v27);
          *(_QWORD *)(v59 + 24) = 684LL;
          WdLogEvent5_WdAssertion(v59);
        }
        *(_QWORD *)(v21 + 16) = KeGetCurrentThread();
        v28 = 1;
      }
      *(_DWORD *)(v21 + 24) = v28;
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7[1] + 24) + 152LL))(*(_QWORD *)(v7[1] + 24), v7[3]);
      v32 = *(_QWORD *)(v12 + 312);
      if ( *(struct _KTHREAD **)(v32 + 16) != KeGetCurrentThread() )
      {
        v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29);
        v60[3] = 275LL;
        v60[4] = 4LL;
        v60[5] = v32;
        v60[6] = 0LL;
        v60[7] = 0LL;
        WdLogEvent5_WdCriticalError(v60);
      }
      v33 = *(_DWORD *)(v32 + 24);
      if ( v33 <= 0 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v30, v29, v31);
        *(_QWORD *)(v61 + 24) = 703LL;
        WdLogEvent5_WdAssertion(v61);
        v33 = *(_DWORD *)(v32 + 24);
      }
      v34 = v33 - 1;
      *(_DWORD *)(v32 + 24) = v34;
      if ( !v34 )
      {
        *(_QWORD *)(v32 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v32, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 336));
    v35 = *(_DWORD *)(v12 + 80);
    if ( (v35 & 0x4000) != 0 )
    {
      v36 = *(void **)(v12 + 528);
      goto LABEL_38;
    }
    if ( (v35 & 0x2000) != 0 )
    {
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 312));
      v11 = (int)LockParavirtualizedAllocationOnHost((struct VIDMM_ALLOC *)a2, a7);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 312), v62);
      if ( (int)v11 >= 0 )
        goto LABEL_39;
      v63 = WdLogNewEntry5_WdAssertion(v20, v13, v15);
      *(_QWORD *)(v63 + 24) = v11;
      WdLogEvent5_WdAssertion(v63);
    }
    else
    {
      v20 = **(unsigned int **)(v12 + 496);
      if ( (v20 & 0x40000000) != 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v20);
        goto LABEL_37;
      }
      if ( (*(_DWORD *)(v12 + 76) & 0x80u) != 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v20);
          v20 = **(unsigned int **)(v12 + 496);
        }
        if ( (v20 & 8) != 0 )
        {
          v36 = *(void **)(v12 + 360);
          goto LABEL_38;
        }
LABEL_37:
        v36 = (void *)v7[2];
LABEL_38:
        *a7 = v36;
LABEL_39:
        v37 = this;
        goto LABEL_40;
      }
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 312));
      if ( (*(_DWORD *)(v12 + 76) & 0x100000) != 0 )
      {
        v68 = WdLogNewEntry5_WdWarning(v65, v64);
        *(_QWORD *)(v68 + 24) = v12;
        WdLogEvent5_WdWarning(v68);
        v37 = this;
      }
      else
      {
        v37 = this;
        if ( (*((_DWORD *)this + 1762) & 0x20) != 0 || *((_BYTE *)this + 7080) )
        {
          LODWORD(v11) = -1073741823;
        }
        else
        {
          v69 = *(_QWORD *)(v12 + 128);
          if ( v69 && (*(_DWORD *)(v69 + 80) & 0x1001) == 0 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v65);
            LODWORD(v11) = VIDMM_GLOBAL::SetupAllocationForCPUAccess(this, (struct VIDMM_ALLOC *)a2, v66, v67, v75);
            if ( (int)v11 < 0 )
            {
              v71 = WdLogNewEntry5_WdWarning(v70, v64);
              *(_QWORD *)(v71 + 24) = a2;
              WdLogEvent5_WdWarning(v71);
            }
          }
        }
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 312), v64);
      if ( (int)v11 >= 0 )
      {
        v20 = **(unsigned int **)(v12 + 496);
        if ( (v20 & 8) != 0 )
          v74 = *(void **)(v12 + 360);
        else
          v74 = (void *)v7[2];
        *a7 = v74;
LABEL_40:
        v38 = bTracingEnabled == 0;
        *(_BYTE *)(v12 + 89) = 1;
        if ( v38 )
        {
          v41 = v78;
        }
        else
        {
          v39 = a2[1];
          if ( v39 )
            v40 = v39[3];
          else
            v40 = 0LL;
          v41 = v78;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ppqq_EtwWriteTransfer(v20, v13, v15, v40, a2, v16, v78);
        }
        VidMmRecordLock((VIDMM_GLOBAL *)((char *)v37 + 7176), v16, v41, 0);
        LODWORD(v11) = 0;
        goto LABEL_46;
      }
      v73 = WdLogNewEntry5_WdWarning(v72, v13);
      *(_QWORD *)(v73 + 24) = a2;
      WdLogEvent5_WdWarning(v73);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 336));
    goto LABEL_46;
  }
  if ( (v16 & 2) != 0 )
    goto LABEL_15;
  if ( bTracingEnabled )
  {
    v54 = a2[1];
    if ( v54 )
      v8 = v54[3];
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppqq_EtwWriteTransfer(v20, v13, v15, v8, a2, v16, 2);
  }
  VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7176), v16, 2, 0);
  LODWORD(v11) = -1071775486;
LABEL_46:
  ExReleasePushLockExclusiveEx(v77, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
