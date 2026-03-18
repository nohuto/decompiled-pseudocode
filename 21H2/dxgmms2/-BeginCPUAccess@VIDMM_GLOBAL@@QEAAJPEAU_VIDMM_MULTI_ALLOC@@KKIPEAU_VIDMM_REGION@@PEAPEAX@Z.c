/*
 * XREFs of ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C00A0354
 * Callers:
 *     VidMmBeginCPUAccess @ 0x1C0014D20 (VidMmBeginCPUAccess.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0002E80 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0014D54 (-IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x1C002E770 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C009A064 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00D7F90 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00D9C30 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
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
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r12d
  __int64 v17; // rcx
  VIDMM_GLOBAL *v18; // r8
  __int64 v19; // rdx
  int v20; // eax
  void *v21; // rax
  bool v22; // zf
  __int64 *v23; // rax
  __int64 v24; // r9
  char v25; // si
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  VIDMM_GLOBAL *v35; // rcx
  __int64 v36; // rax
  unsigned __int8 v37; // [rsp+20h] [rbp-68h]
  __int64 *v39; // [rsp+98h] [rbp+10h]
  unsigned int v40; // [rsp+A0h] [rbp+18h]

  v7 = 0LL;
  v8 = a4;
  v40 = 0;
  LODWORD(v10) = 0;
  v39 = *a2;
  v11 = **a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v11 + 496, 0LL);
  if ( *((_WORD *)a2[12] + 2) )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      WdLogSingleEntry2(1LL, a2, 2LL);
LABEL_41:
      DxgkLogInternalTriageEvent(v27, 0x40000LL);
LABEL_43:
      LODWORD(v10) = -1073741811;
      goto LABEL_32;
    }
    WdLogSingleEntry2(2LL, a2, 2LL);
  }
  if ( *(_BYTE *)(v11 + 80) )
  {
    WdLogSingleEntry1(1LL, 8181LL);
    DxgkLogInternalTriageEvent(v28, 0x40000LL);
    goto LABEL_32;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v29 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    *(_QWORD *)(v29 + 24) = a2;
    *(_QWORD *)(v29 + 32) = v8;
  }
  v16 = v8 & 0xFFFFFFA7;
  *a7 = 0LL;
  if ( (v16 & 0xFFFFFC58) != 0 )
  {
    WdLogSingleEntry1(1LL, v16);
    goto LABEL_41;
  }
  v17 = **(unsigned int **)(v11 + 528);
  if ( (v17 & 1) == 0 )
  {
    WdLogSingleEntry1(2LL, 8221LL);
    goto LABEL_43;
  }
  if ( (v17 & 8) == 0
    && !VIDMM_PROCESS::IsCurrentProcess((VIDMM_PROCESS *)v39[1])
    && (*(_DWORD *)(v11 + 72) & 0x1000) == 0 )
  {
    WdLogSingleEntry1(1LL, 8236LL);
    goto LABEL_41;
  }
  v18 = this;
  v19 = **(unsigned int **)(v11 + 528);
  if ( (**(_DWORD **)(v11 + 528) & 0x60000000) == 0x20000000 && v39 != *(__int64 **)(v11 + 88) )
  {
    v17 = *(unsigned int *)(*((_QWORD *)this + 3) + 436LL);
    if ( (v17 & 0x10) == 0 && (v17 & 8) == 0 )
    {
      WdLogSingleEntry1(1LL, 8251LL);
      goto LABEL_41;
    }
  }
  if ( (v16 & 0x82) != 0 )
  {
    if ( (*(_DWORD *)(v11 + 68) & 0x40) == 0 && (*(_DWORD *)(v11 + 72) & 0x100000) == 0 )
    {
      WdLogSingleEntry1(1LL, 8277LL);
      goto LABEL_41;
    }
    if ( !*((_BYTE *)this + 7089) && (v19 & 4) != 0 )
    {
      WdLogSingleEntry1(1LL, 8288LL);
      goto LABEL_41;
    }
  }
  if ( (v16 & 0x81) != 0 )
  {
    if ( (v16 & 0x100) != 0 )
    {
      LODWORD(v10) = -1071775484;
      WdLogSingleEntry2(4LL, a2, -1071775484LL);
      goto LABEL_32;
    }
    VIDMM_GLOBAL::WaitOnAllocForceSync((VIDMM_GLOBAL *)v17, (struct VIDMM_ALLOC *)a2);
    v40 = 4;
LABEL_16:
    if ( v39[3] )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v11 + 296));
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v39[1] + 24) + 152LL))(*(_QWORD *)(v39[1] + 24), v39[3]);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 296));
    }
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 360));
    v20 = *(_DWORD *)(v11 + 72);
    if ( (v20 & 0x4000) != 0 )
    {
      v21 = *(void **)(v11 + 560);
      goto LABEL_25;
    }
    if ( (v20 & 0x2000) != 0 )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v11 + 296));
      v10 = (int)LockParavirtualizedAllocationOnHost((struct VIDMM_ALLOC *)a2, a7);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 296));
      if ( (int)v10 >= 0 )
        goto LABEL_26;
      WdLogSingleEntry1(1LL, v10);
      DxgkLogInternalTriageEvent(v31, 0x40000LL);
    }
    else
    {
      v17 = **(unsigned int **)(v11 + 528);
      if ( (v17 & 0x40000000) != 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v17, v19, v18, v15);
        goto LABEL_24;
      }
      if ( (*(_DWORD *)(v11 + 68) & 0x80u) != 0 )
      {
        if ( !g_IsInternalReleaseOrDbg )
          goto LABEL_23;
        WdLogNewEntry5_WdTrace(v17, v19, v18, v15);
LABEL_67:
        v17 = **(unsigned int **)(v11 + 528);
LABEL_23:
        if ( (v17 & 8) != 0 )
        {
          v21 = *(void **)(v11 + 384);
          goto LABEL_25;
        }
LABEL_24:
        v21 = (void *)v39[2];
LABEL_25:
        *a7 = v21;
LABEL_26:
        v22 = bTracingEnabled == 0;
        *(_BYTE *)(v11 + 82) = 1;
        if ( v22 )
        {
          v25 = v40;
        }
        else
        {
          v23 = a2[1];
          v24 = 0LL;
          if ( v23 )
            v24 = v23[3];
          v25 = v40;
          if ( (byte_1C006E941 & 1) != 0 )
            McTemplateK0ppqq_EtwWriteTransfer(v17, v19, (__int64)v18, v24, a2, v16, v40);
        }
        VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7184), v16, v25, 0);
        LODWORD(v10) = 0;
        goto LABEL_32;
      }
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v11 + 296));
      if ( (*(_DWORD *)(v11 + 68) & 0x200000) != 0 )
      {
        WdLogSingleEntry1(3LL, v11);
      }
      else
      {
        v35 = this;
        if ( (*((_DWORD *)this + 1764) & 0x20) != 0 || *((_BYTE *)this + 7088) )
        {
          LODWORD(v10) = -1073741823;
        }
        else
        {
          v36 = *(_QWORD *)(v11 + 120);
          if ( v36 && (*(_DWORD *)(v36 + 80) & 0x1001) == 0 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(this, v32, v33, v34);
              v35 = this;
            }
            LODWORD(v10) = VIDMM_GLOBAL::SetupAllocationForCPUAccess(v35, (struct VIDMM_ALLOC *)a2, v33, v34, v37);
            if ( (int)v10 < 0 )
              WdLogSingleEntry1(3LL, a2);
          }
        }
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 296));
      if ( (int)v10 >= 0 )
        goto LABEL_67;
      WdLogSingleEntry1(3LL, a2);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 360));
    goto LABEL_32;
  }
  if ( (v16 & 2) != 0 )
    goto LABEL_16;
  if ( bTracingEnabled )
  {
    v30 = a2[1];
    if ( v30 )
      v7 = v30[3];
    if ( (byte_1C006E941 & 1) != 0 )
      McTemplateK0ppqq_EtwWriteTransfer(v17, v19, (__int64)this, v7, a2, v16, 2);
  }
  VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7184), v16, 2, 0);
  LODWORD(v10) = -1071775486;
LABEL_32:
  ExReleasePushLockExclusiveEx(v11 + 496, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
