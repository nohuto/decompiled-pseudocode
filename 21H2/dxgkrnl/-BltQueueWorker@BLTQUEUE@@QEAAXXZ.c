/*
 * XREFs of ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CE5C0
 * Callers:
 *     ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C01CE570 (-BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01606B8 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01CE464 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01CEBF4 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C01CEF0C (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C01CEF58 (-StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 *     ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C030651C (-TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03BC05C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C03BC160 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ @ 0x1C03BC518 (-LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C03BDE68 (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C03BE150 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03BE198 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C03BF230 (-StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  char v2; // r12
  char *v3; // rbx
  __int64 v4; // rsi
  struct _KEVENT *v5; // rax
  ULONG v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rcx
  ULONG v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  LARGE_INTEGER v18; // rax
  __int64 v19; // r10
  __int64 v20; // r9
  LONGLONG v21; // r8
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 i; // rbx
  unsigned __int64 v29; // rcx
  int v30; // r8d
  __int128 v31; // xmm1
  __int64 v32; // xmm0_8
  LARGE_INTEGER PerformanceCounter; // rax
  bool v34; // zf
  int v35; // eax
  int v36; // r9d
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // r9d
  int v45; // r9d
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // r9d
  int v51; // r8d
  int v52; // r8d
  int v53; // r8d
  const wchar_t *v54; // r9
  PVOID v55; // rsi
  __int64 v56; // r14
  unsigned __int64 v57; // rbx
  __int64 v58; // rax
  unsigned __int64 v59; // rsi
  struct DXGADAPTER *v60; // r14
  __int64 v61; // rdx
  int v62; // eax
  BLTQUEUE *v63; // rcx
  KPROCESSOR_MODE WaitMode[8]; // [rsp+20h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-D8h]
  __int128 v66; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68[3]; // [rsp+78h] [rbp-88h] BYREF
  int v69; // [rsp+90h] [rbp-70h]
  int v70; // [rsp+A8h] [rbp-58h]
  int v71; // [rsp+C0h] [rbp-40h]
  char v72[8]; // [rsp+C8h] [rbp-38h] BYREF
  DXGPUSHLOCK *v73; // [rsp+D0h] [rbp-30h]
  int v74; // [rsp+D8h] [rbp-28h]
  struct _KEVENT v75; // [rsp+E0h] [rbp-20h] BYREF
  struct _KEVENT Event; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v77[144]; // [rsp+110h] [rbp+10h] BYREF
  PVOID Object[12]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+200h] [rbp+100h] BYREF

  memset(&Event, 0, sizeof(Event));
  memset(&v75, 0, sizeof(v75));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeEvent(&v75, SynchronizationEvent, 0);
  *((_QWORD *)this + 77) = KeGetCurrentThread();
  KeSetEvent((PRKEVENT)((char *)this + 496), 0, 0);
  v2 = 0;
  v66 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = (char *)this + 520;
      v4 = 0LL;
LABEL_3:
      memset(Object, 0, sizeof(Object));
      if ( _InterlockedExchange((volatile __int32 *)this + 145, 0) )
        BLTQUEUE::DisableHwVSyncWorker(this);
      Object[0] = v3;
      if ( (v66 & 1) != 0 )
        v5 = (struct _KEVENT *)*((_QWORD *)&v66 + 1);
      else
        v5 = &v75;
      Object[1] = v5;
      if ( (v66 & 3) != 0 )
        BLTQUEUE::StartVSync(this, 0LL, (unsigned int)((v66 & 2) == 0) + 1);
      v6 = 2;
      if ( (*((_DWORD *)this + 238) & 2) != 0 )
      {
        if ( this != (BLTQUEUE *)-2864LL && *((struct _KTHREAD **)this + 359) == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 1425LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
            1425LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 2864, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v36 = *((_DWORD *)this + 722);
            if ( v36 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v7, (const EVENT_DESCRIPTOR *)"g", v8, v36);
          }
          ExAcquirePushLockSharedEx((char *)this + 2864, 0LL);
        }
        v9 = *((_QWORD *)this + 364);
        if ( *(_QWORD *)(v9 + 48) && !*(_BYTE *)(v9 + 56) && *(_BYTE *)(v9 + 57) == 1 )
        {
          v6 = 3;
          Object[2] = *(PVOID *)v9;
        }
        if ( *(_QWORD *)(v9 + 112) && !*(_BYTE *)(v9 + 120) && *(_BYTE *)(v9 + 121) == 1 )
        {
          v37 = v6++;
          Object[v37] = *(PVOID *)(v9 + 64);
        }
        if ( *(_QWORD *)(v9 + 176) && !*(_BYTE *)(v9 + 184) && *(_BYTE *)(v9 + 185) == 1 )
        {
          v38 = v6++;
          Object[v38] = *(PVOID *)(v9 + 128);
        }
        if ( *(_QWORD *)(v9 + 240) && !*(_BYTE *)(v9 + 248) && *(_BYTE *)(v9 + 249) == 1 )
        {
          v39 = v6++;
          Object[v39] = *(PVOID *)(v9 + 192);
        }
        if ( *(_QWORD *)(v9 + 304) && !*(_BYTE *)(v9 + 312) && *(_BYTE *)(v9 + 313) == 1 )
        {
          v40 = v6++;
          Object[v40] = *(PVOID *)(v9 + 256);
        }
        if ( *(_QWORD *)(v9 + 368) && !*(_BYTE *)(v9 + 376) && *(_BYTE *)(v9 + 377) == 1 )
        {
          v41 = v6++;
          Object[v41] = *(PVOID *)(v9 + 320);
        }
        if ( *(_QWORD *)(v9 + 432) && !*(_BYTE *)(v9 + 440) && *(_BYTE *)(v9 + 441) == 1 )
        {
          v42 = v6++;
          Object[v42] = *(PVOID *)(v9 + 384);
        }
        if ( *(_QWORD *)(v9 + 496) && !*(_BYTE *)(v9 + 504) && *(_BYTE *)(v9 + 505) == 1 )
        {
          v43 = v6++;
          Object[v43] = *(PVOID *)(v9 + 448);
        }
        ExReleasePushLockSharedEx((char *)this + 2864, 0LL);
        KeLeaveCriticalRegion();
        if ( v6 > 2 )
        {
          v2 = 0;
        }
        else
        {
          v2 = 1;
          v10 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 16LL))(*((_QWORD *)this + 16));
          v11 = v6;
          v12 = v6 + 1;
          Object[v11] = v10;
          Object[v12] = (PVOID)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
          v6 = v12 + 1;
        }
        if ( v6 > 0xC )
        {
          WdLogSingleEntry1(1LL, 2102LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"nObjects <= NumWaitBlocks", 2102LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( this != (BLTQUEUE *)-408LL && *((struct _KTHREAD **)this + 52) == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 1425LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
            1425LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 408, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v44 = *((_DWORD *)this + 108);
            if ( v44 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v13, (const EVENT_DESCRIPTOR *)"g", v14, v44);
          }
          ExAcquirePushLockExclusiveEx((char *)this + 408, 0LL);
        }
        *((_QWORD *)this + 52) = KeGetCurrentThread();
        v69 = 2;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 2864, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v45 = *((_DWORD *)this + 722);
            if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v15, (const EVENT_DESCRIPTOR *)"g", v16, v45);
          }
          ExAcquirePushLockSharedEx((char *)this + 2864, 0LL);
        }
        v17 = 0LL;
        v70 = 1;
        PerformanceFrequency.QuadPart = 0LL;
        v18 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v19 = *((_QWORD *)this + 58);
        if ( v19 > 0 )
        {
          v20 = *((_QWORD *)this + 57);
          if ( v20 > 0 && v18.QuadPart > v20 )
          {
            v21 = 10000000 * ((v18.QuadPart - v20) % v19 - v19);
            if ( PerformanceFrequency.QuadPart == 10000000 )
              v4 = v21 / 10000000;
            else
              v4 = v21 / PerformanceFrequency.QuadPart;
          }
        }
        do
        {
          v22 = *((_QWORD *)this + 364);
          if ( *(_QWORD *)(v17 + v22 + 48) && !*(_BYTE *)(v17 + v22 + 56) && *(_BYTE *)(v17 + v22 + 57) == 1 )
          {
            v46 = *(_QWORD *)(v17 + v22 + 32);
            v47 = 0LL;
            v48 = *(_QWORD *)(v17 + v22);
            v49 = v4 + v46;
            if ( v49 <= 0 )
              v47 = v49;
            ExSetTimer(v48, v47, 0LL, 0LL, *(_QWORD *)WaitMode, *(_QWORD *)Alertable);
          }
          v17 += 64LL;
        }
        while ( v17 < 0x200 );
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 56LL))(*((_QWORD *)this + 16), v4);
        v4 = 0LL;
        ExReleasePushLockSharedEx((char *)this + 2864, 0LL);
        KeLeaveCriticalRegion();
        *((_QWORD *)this + 52) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 408, 0LL);
        KeLeaveCriticalRegion();
        v3 = (char *)this + 520;
      }
      v23 = KeWaitForMultipleObjects(v6, Object, WaitAny, Executive, 0, 1u, 0LL, &WaitBlockArray);
      v24 = 0LL;
      v66 = 0LL;
      if ( !v23 )
      {
        v30 = 0;
        goto LABEL_54;
      }
      if ( v23 == 1 )
      {
        v30 = 1;
        goto LABEL_54;
      }
      if ( !v2 )
        break;
      if ( v23 != 2 )
      {
        if ( v23 == 3 )
        {
          v30 = 3;
          goto LABEL_54;
        }
        goto LABEL_131;
      }
      if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
      {
        BLTQUEUE::ProcessVSyncTdrWorker(this, 1u);
      }
      else
      {
        BLTQUEUE::ProcessBltQueue(this, 1LL, &v66);
        if ( !*((_DWORD *)this + 99) && (v66 & 3) == 0 && ++*((_DWORD *)this + 100) > 0xAu )
          BLTQUEUE::StopVSync(this, 0LL, 8LL);
      }
      if ( this != (BLTQUEUE *)-2864LL && *((struct _KTHREAD **)this + 359) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 1425LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1425LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 2864, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v50 = *((_DWORD *)this + 722);
          if ( v50 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, (const EVENT_DESCRIPTOR *)"g", v27, v50);
        }
        ExAcquirePushLockSharedEx((char *)this + 2864, 0LL);
      }
      v71 = 1;
      for ( i = 0LL; i < 0x200; i += 64LL )
      {
        v29 = i + *((_QWORD *)this + 364);
        if ( *(_QWORD *)(v29 + 48) )
        {
          if ( *(_BYTE *)(v29 + 56) == 1 )
          {
            *(_QWORD *)(v29 + 48) = 0LL;
            LOBYTE(v25) = 1;
            *(_BYTE *)(i + *((_QWORD *)this + 364) + 56) = 0;
            ExDeleteTimer(*(_QWORD *)(i + *((_QWORD *)this + 364)), v25, 0LL, 0LL);
          }
          else
          {
            *(_BYTE *)(v29 + 57) = 1;
          }
        }
      }
      ExReleasePushLockSharedEx((char *)this + 2864, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (unsigned int)(v23 - 2) <= 8 )
    {
      v30 = 4;
      v24 = v23;
      goto LABEL_54;
    }
LABEL_131:
    v30 = (v23 != 257) + 5;
LABEL_54:
    if ( !v30 )
    {
      v31 = *(_OWORD *)((char *)this + 584);
      *(_OWORD *)((char *)this + 792) = *(_OWORD *)((char *)this + 568);
      v32 = *((_QWORD *)this + 75);
      *(_OWORD *)((char *)this + 808) = v31;
      *((_QWORD *)this + 103) = v32;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v34 = *((_BYTE *)this + 568) == 0;
      *((LARGE_INTEGER *)this + 98) = PerformanceCounter;
      if ( !v34 )
      {
        KeAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(*((_QWORD *)this + 73) + 40LL) + 56LL));
        *((_DWORD *)this + 238) |= 1u;
        *((_BYTE *)this + 568) = 0;
LABEL_161:
        BLTQUEUE::FinishCommand(this, 0);
        goto LABEL_62;
      }
      if ( *((_BYTE *)this + 569) )
      {
        BLTQUEUE::ResetWorker(this);
      }
      else if ( *((_BYTE *)this + 572) )
      {
        BLTQUEUE::ResetInternal(this);
        *((_BYTE *)this + 572) = 0;
        BLTQUEUE::FinishCommand(this, 0);
        PsTerminateSystemThread(0);
      }
      else if ( *((_BYTE *)this + 570) )
      {
        BLTQUEUE::UpdateDisplayModeInfoWorker(this);
      }
      else if ( *((_BYTE *)this + 571) )
      {
        v35 = *((_DWORD *)this + 99) + 1;
        *((_DWORD *)this + 100) = 0;
        *((_DWORD *)this + 99) = v35;
        BLTQUEUE::StartVSync(this, 0LL, 5LL);
        *((_BYTE *)this + 571) = 0;
      }
      else
      {
        if ( *((_BYTE *)this + 576) )
        {
          BLTQUEUE::StopVSync(this, 0LL, 9LL);
          BLTQUEUE::RecreateVsyncSource((__int64)this, 0, 9);
          *((_BYTE *)this + 576) = 0;
          goto LABEL_161;
        }
        if ( *((_BYTE *)this + 577) )
        {
          BLTQUEUE::StopVSync(this, 0LL, 15LL);
          BLTQUEUE::RecreateVsyncSource((__int64)this, 0, 15);
          *((_BYTE *)this + 577) = 0;
          goto LABEL_161;
        }
      }
LABEL_62:
      if ( *((_BYTE *)this + 575) )
      {
        BLTQUEUE::DiscardPendingPresent(this);
        *(_QWORD *)((char *)this + 484) = 0LL;
        *((_BYTE *)this + 575) = 0;
        BLTQUEUE::FinishCommand(this, 0);
      }
      else
      {
        BLTQUEUE::ProcessBltQueue(this, 0LL, &v66);
      }
      goto LABEL_3;
    }
    v51 = v30 - 1;
    if ( !v51 )
    {
      BLTQUEUE::ProcessBltQueue(this, 2LL, &v66);
      goto LABEL_3;
    }
    v52 = v51 - 2;
    if ( !v52 )
    {
      v62 = *((_DWORD *)this + 34);
      if ( v62 == 1 )
      {
        BLTQUEUE::ProcessVSyncTdrWorker(this, 0);
      }
      else if ( v62 == 3 )
      {
        BLTQUEUE::StopVSync(this, 0LL, 3LL);
        BLTQUEUE::RecreateVsyncSource((__int64)this, 1, 3);
        BLTQUEUE::StartVSync(this, 0LL, 3LL);
        BLTQUEUE::LogRemoteVsyncTimeout(v63);
      }
      else
      {
        WdLogSingleEntry1(1LL, *((int *)this + 34));
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Not expecting Vsync TDR for type 0x%I64x",
          *((int *)this + 34),
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_3;
    }
    v53 = v52 - 1;
    if ( v53 )
    {
      if ( v53 == 1 )
      {
        WdLogSingleEntry1(2LL, this);
        v54 = L"BLTQUEUE 0x%I64x : worker thread alerted";
      }
      else
      {
        WdLogSingleEntry1(2LL, this);
        v54 = L"BLTQUEUE 0x%I64x : Received invalid WaitStatus";
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v54, (__int64)this, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_3;
    }
    v55 = Object[v24];
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v72, (struct _KTHREAD **)this + 358, 0);
    DXGPUSHLOCK::AcquireShared(v73);
    v56 = *((_QWORD *)this + 364);
    v57 = 0LL;
    v74 = 1;
    v58 = v56;
    while ( *(PVOID *)v58 != v55 || *(_BYTE *)(v58 + 57) != 1 )
    {
      ++v57;
      v58 += 64LL;
      if ( v57 >= 8 )
        goto LABEL_149;
    }
    v59 = v57 << 6;
    v60 = *(struct DXGADAPTER **)((v57 << 6) + v56 + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v77, v60, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v77, 0LL) >= 0 )
    {
      v61 = *((_QWORD *)this + 364);
      v68[0] = (unsigned int)(*((_DWORD *)this + 714) + 1);
      if ( (*(int (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v60 + 350) + 624LL)
                                                                                           + 8LL)
                                                                               + 656LL))(
             1LL,
             v59 + v61 + 8,
             0LL,
             v68) < 0 )
      {
        WdLogSingleEntry1(2LL, v57);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to signal pending dod periodic frame notification id: %lu",
          v57,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        *(_QWORD *)(v59 + *((_QWORD *)this + 364) + 40) = v68[0];
      }
    }
    *(_BYTE *)(v59 + *((_QWORD *)this + 364) + 57) = 0;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77);
LABEL_149:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v72);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v72);
  }
}
