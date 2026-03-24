/*
 * XREFs of ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010ED88
 * Callers:
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C00E70FC (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00EAD80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010E7F8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C01649D8 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0171324 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C026D82C (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C02825CC (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0026754 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z @ 0x1C00DCD40 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C010F048 (--0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@@Z @ 0x1C010F070 (--0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJE.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010F530 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01147F0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateSyncObject(
        __int64 a1,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        bool a7,
        struct DXGPAGINGQUEUE *a8,
        _QWORD *a9,
        struct DXGDEVICESYNCOBJECT **a10,
        unsigned int *a11,
        struct DXGADAPTERSYNCOBJECT **a12)
{
  _BYTE *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE *v19; // rbx
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdi
  bool v27; // al
  bool v28; // al
  __int64 v29; // rdx
  int v30; // esi
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  _BYTE *v41; // rax
  __int64 v42; // rax
  struct DXGTHREAD *Current; // rax
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v49; // [rsp+50h] [rbp-48h]

  if ( !a5 )
  {
    v39 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v39 + 24) = 2606LL;
    WdLogEvent5_WdAssertion(v39);
  }
  if ( a9 )
  {
    *a9 = 0LL;
    if ( !a10 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( a10 )
  {
LABEL_5:
    *a10 = 0LL;
    goto LABEL_6;
  }
  v40 = WdLogNewEntry5_WdAssertion(a1, a2);
  *(_QWORD *)(v40 + 24) = 2607LL;
  WdLogEvent5_WdAssertion(v40);
LABEL_6:
  if ( a11 )
    *a11 = 0;
  if ( (*(_DWORD *)(a5 + 4) & 4) != 0 )
  {
    v41 = operator new[](0x140uLL, 0x4B677844u, (POOL_TYPE)512);
    v19 = v41;
    if ( v41 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v41, a1, a5, a6);
      v16[39] = 0LL;
      v16[38] = v16 + 37;
      v16[37] = v16 + 37;
      goto LABEL_11;
    }
  }
  else
  {
    v14 = operator new[](0x158uLL, 0x4B677844u, (POOL_TYPE)512);
    v19 = v14;
    if ( v14 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v14, a1, a5, a6);
      DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)(v20 + 296), a2);
      goto LABEL_11;
    }
  }
  v19 = 0LL;
LABEL_11:
  if ( v19 )
  {
    LOBYTE(v16) = *(_BYTE *)(*((_QWORD *)a2 + 2) + 209LL);
    v19[277] = (_BYTE)v16;
    CurrentProcess = PsGetCurrentProcess(v16, v15);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v25 = ProcessDxgProcess;
    v27 = ((!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
        && (Current = DXGTHREAD::GetCurrent(v24, v23)) != 0LL
        && (v26 = *((_QWORD *)Current + 1)) != 0
        || (v26 = v25) != 0)
       && (*(_BYTE *)(v26 + 347) & 0x30) != 0;
    v19[279] = v27;
    if ( v27 )
    {
      v44 = *(_BYTE *)(v26 + 347);
      if ( (v44 & 0x20) != 0 )
        v45 = *(_QWORD *)(v26 + 496);
      else
        v45 = v26 & -(__int64)((v44 & 0x10) != 0);
      *((_QWORD *)v19 + 36) = v45;
      if ( !v45 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v46 + 24) = 5776LL;
        WdLogEvent5_WdAssertion(v46);
      }
    }
    else
    {
      *((_QWORD *)v19 + 36) = 0LL;
    }
    v28 = v26
       && (*(_BYTE *)(v26 + 347) & 0x20) != 0
       && (*(_BYTE *)(v26 + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled);
    v19[280] = v28;
    v30 = DXGSYNCOBJECT::Initialize((DXGSYNCOBJECT *)v19, a8, a3);
    if ( v30 < 0 )
      goto LABEL_59;
    if ( a11 || (unsigned int)(*((_DWORD *)v19 + 48) - 5) <= 1 )
    {
      v49.0 = *(struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E *)(a5 + 4);
      v32 = *((_DWORD *)v19 + 48) == 6
          ? DXGSYNCOBJECT::Open(
              (DXGSYNCOBJECT *)v19,
              a2,
              a3,
              a10,
              a11,
              (void **)(a5 + 24),
              (unsigned __int64 *)(a5 + 32),
              a4,
              a12,
              a7,
              v49)
          : DXGSYNCOBJECT::Open(
              (DXGSYNCOBJECT *)v19,
              a2,
              a3,
              a10,
              a11,
              (void **)(a5 + 16),
              (unsigned __int64 *)(a5 + 24),
              a4,
              a12,
              a7,
              v49);
      v30 = v32;
    }
    else
    {
      DXGSYNCOBJECT::AddReference((DXGSYNCOBJECT *)v19, v29, v31);
    }
    if ( v30 < 0 )
    {
LABEL_59:
      DXGSYNCOBJECT::Destroy((DXGSYNCOBJECT *)v19);
    }
    else
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a1 + 464));
      v34 = (_QWORD *)(a1 + 504);
      v35 = *(_QWORD *)(a1 + 504);
      if ( *(_QWORD *)(v35 + 8) != a1 + 504 )
        __fastfail(3u);
      *(_QWORD *)v19 = v35;
      *((_QWORD *)v19 + 1) = v34;
      *(_QWORD *)(v35 + 8) = v19;
      *v34 = v19;
      if ( *(struct _KTHREAD **)(a1 + 480) != KeGetCurrentThread() )
      {
        v47 = WdLogNewEntry5_WdCriticalError(v35, v33);
        *(_QWORD *)(v47 + 24) = 275LL;
        *(_QWORD *)(v47 + 32) = 4LL;
        *(_QWORD *)(v47 + 40) = a1 + 464;
        *(_OWORD *)(v47 + 48) = 0LL;
        WdLogEvent5_WdCriticalError(v47);
      }
      v36 = *(_DWORD *)(a1 + 488);
      if ( v36 <= 0 )
      {
        v48 = WdLogNewEntry5_WdAssertion(v35, v33);
        *(_QWORD *)(v48 + 24) = 705LL;
        WdLogEvent5_WdAssertion(v48);
        v36 = *(_DWORD *)(a1 + 488);
      }
      v37 = v36 - 1;
      *(_DWORD *)(a1 + 488) = v37;
      if ( !v37 )
      {
        *(_QWORD *)(a1 + 480) = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 464, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( a9 )
        *a9 = v19;
    }
    return (unsigned int)v30;
  }
  else
  {
    v42 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v42 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v42);
    return 3221225495LL;
  }
}
