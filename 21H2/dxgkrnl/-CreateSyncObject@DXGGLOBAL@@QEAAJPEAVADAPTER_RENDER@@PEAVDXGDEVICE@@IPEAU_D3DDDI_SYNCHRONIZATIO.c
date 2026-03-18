/*
 * XREFs of ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0199294
 * Callers:
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C016A628 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01996EC (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1C0223396 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C0224DC6 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C030EDA0 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01988F8 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z @ 0x1C0198FA0 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0199600 (--0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@@Z @ 0x1C0199624 (--0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJE.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C019A330 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateSyncObject(
        __int64 a1,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        bool a7,
        struct DXGPAGINGQUEUE *a8,
        __int64 *a9,
        struct DXGDEVICESYNCOBJECT **a10,
        unsigned int *a11,
        struct DXGADAPTERSYNCOBJECT **a12)
{
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v23; // r9
  __int64 v24; // rbp
  __int64 v25; // rsi
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  int v29; // esi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  int v37; // eax
  int v38; // eax
  __int64 v40; // rax
  _QWORD *v41; // rcx
  struct DXGTHREAD *Current; // rax
  int v43; // eax
  __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  int v47; // r9d
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v48; // [rsp+50h] [rbp-48h]
  unsigned int v51; // [rsp+B8h] [rbp+20h]

  v51 = a4;
  if ( !a5 )
  {
    WdLogSingleEntry1(1LL, 2600LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObjectInfo != NULL", 2600LL, 0LL, 0LL, 0LL, 0LL);
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
  WdLogSingleEntry1(1LL, 2601LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"ppSyncObject != NULL || ppDeviceSyncObject != NULL",
    2601LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_6:
  if ( a11 )
    *a11 = 0;
  if ( (*(_DWORD *)(a5 + 4) & 4) != 0 )
  {
    v40 = operator new[](0x140uLL, 0x4B677844u, 64LL, a4);
    v15 = v40;
    if ( v40 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v40, a1, a5, a6);
      v41[39] = 0LL;
      v41[38] = v41 + 37;
      v41[37] = v41 + 37;
    }
    else
    {
      v15 = 0LL;
    }
    if ( v15 )
    {
LABEL_11:
      v20 = (*(_DWORD *)(v15 + 284) ^ (2 * *(unsigned __int8 *)(*((_QWORD *)a2 + 2) + 209LL))) & 2;
      *(_DWORD *)(v15 + 284) ^= v20;
      CurrentProcess = PsGetCurrentProcess(v20, v17, v18, v19);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v24 = ProcessDxgProcess;
      if ( ((!ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0)
         && (Current = DXGTHREAD::GetCurrent()) != 0LL
         && (v25 = *((_QWORD *)Current + 3)) != 0
         || (v25 = v24) != 0)
        && (*(_DWORD *)(v25 + 424) & 0x180) != 0 )
      {
        v26 = 16;
      }
      else
      {
        v26 = 0;
      }
      v27 = v26 | *(_DWORD *)(v15 + 284) & 0xFFFFFFEF;
      *(_DWORD *)(v15 + 284) = v27;
      if ( (v27 & 0x10) != 0 )
      {
        v43 = *(_DWORD *)(v25 + 424);
        if ( (v43 & 0x100) != 0 )
          v44 = *(_QWORD *)(v25 + 608);
        else
          v44 = v25 & -(__int64)((v43 & 0x80u) != 0);
        *(_QWORD *)(v15 + 288) = v44;
        if ( !v44 )
        {
          WdLogSingleEntry1(1LL, 5797LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVmwpProcess", 5797LL, 0LL, 0LL, 0LL, 0LL);
          v27 = *(_DWORD *)(v15 + 284);
        }
      }
      else
      {
        *(_QWORD *)(v15 + 288) = 0LL;
      }
      if ( v25
        && (*(_DWORD *)(v25 + 424) & 0x104) == 0x104
        && ((v45 = (2 * *(_DWORD *)(v15 + 280)) >> 1, v45 == 5) || v45 == 18) )
      {
        v28 = 32;
      }
      else
      {
        v28 = 0;
      }
      *(_DWORD *)(v15 + 284) = v28 | v27 & 0xFFFFFFDF;
      v29 = DXGSYNCOBJECT::Initialize((DXGSYNCOBJECT *)v15, a8, a3, v23);
      if ( v29 >= 0 )
      {
        if ( !a11 && (unsigned int)(*(_DWORD *)(v15 + 200) - 5) > 1 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 24));
LABEL_26:
          KeEnterCriticalRegion();
          if ( *(struct _KTHREAD **)(a1 + 592) == KeGetCurrentThread() )
          {
            v46 = *(_DWORD *)(a1 + 600);
            if ( v46 <= 0 )
            {
              WdLogSingleEntry1(1LL, 472LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_OwnerAcquireCount > 0",
                472LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v46 = *(_DWORD *)(a1 + 600);
            }
            v33 = v46 + 1;
          }
          else
          {
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + 576, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v47 = *(_DWORD *)(a1 + 604);
                if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v31, (const EVENT_DESCRIPTOR *)"g", v32, v47);
              }
              _InterlockedIncrement64((volatile signed __int64 *)(a1 + 584));
              ExAcquirePushLockExclusiveEx(a1 + 576, 0LL);
            }
            if ( *(_QWORD *)(a1 + 592) )
            {
              WdLogSingleEntry1(1LL, 496LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( *(_DWORD *)(a1 + 600) )
            {
              WdLogSingleEntry1(1LL, 497LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"0 == m_OwnerAcquireCount",
                497LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_QWORD *)(a1 + 592) = KeGetCurrentThread();
            v33 = 1;
          }
          *(_DWORD *)(a1 + 600) = v33;
          v34 = (__int64 *)(a1 + 616);
          v35 = *(_QWORD *)(a1 + 616);
          if ( *(_QWORD *)(v35 + 8) != a1 + 616 )
            __fastfail(3u);
          *(_QWORD *)v15 = v35;
          v36 = a1 + 568;
          *(_QWORD *)(v15 + 8) = v34;
          *(_QWORD *)(v35 + 8) = v15;
          *v34 = v15;
          if ( *(struct _KTHREAD **)(v36 + 24) != KeGetCurrentThread() )
            WdLogSingleEntry5(0LL, 275LL, 4LL, v36, 0LL, 0LL);
          v37 = *(_DWORD *)(v36 + 32);
          if ( v37 <= 0 )
          {
            WdLogSingleEntry1(1LL, 516LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
            v37 = *(_DWORD *)(v36 + 32);
          }
          v38 = v37 - 1;
          *(_DWORD *)(v36 + 32) = v38;
          if ( !v38 )
          {
            *(_QWORD *)(v36 + 24) = 0LL;
            ExReleasePushLockExclusiveEx(v36 + 8, 0LL);
          }
          KeLeaveCriticalRegion();
          if ( a9 )
            *a9 = v15;
          return (unsigned int)v29;
        }
        v48.0 = *(struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E *)(a5 + 4);
        if ( *(_DWORD *)(v15 + 200) == 6 )
          v30 = DXGSYNCOBJECT::Open(
                  (DXGSYNCOBJECT *)v15,
                  a2,
                  a3,
                  a10,
                  a11,
                  (void **)(a5 + 24),
                  (unsigned __int64 *)(a5 + 32),
                  v51,
                  a12,
                  a7,
                  v48);
        else
          v30 = DXGSYNCOBJECT::Open(
                  (DXGSYNCOBJECT *)v15,
                  a2,
                  a3,
                  a10,
                  a11,
                  (void **)(a5 + 16),
                  (unsigned __int64 *)(a5 + 24),
                  v51,
                  a12,
                  a7,
                  v48);
        v29 = v30;
        if ( v30 >= 0 )
          goto LABEL_26;
      }
      DXGSYNCOBJECT::Destroy((DXGSYNCOBJECT *)v15);
      return (unsigned int)v29;
    }
  }
  else
  {
    v14 = operator new[](0x158uLL, 0x4B677844u, 64LL, a4);
    v15 = v14;
    if ( v14 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v14, a1, a5, a6);
      DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)(v16 + 296), a2);
      goto LABEL_11;
    }
  }
  WdLogSingleEntry1(6LL, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Out of memory allocating DXGSYNCOBJECT class, returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
