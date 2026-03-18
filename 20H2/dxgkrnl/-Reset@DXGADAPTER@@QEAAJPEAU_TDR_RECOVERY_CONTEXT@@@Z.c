/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020E160
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0264C70 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C00219A8 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0021A30 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0039020 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C00399F4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00E75A4 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     W32kStub_DCompositionNotifyCompositionTokenPresent @ 0x1C00FBEB0 (W32kStub_DCompositionNotifyCompositionTokenPresent.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0138B18 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C0138E50 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020D478 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C021386C (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0214FD8 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0215990 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02642C0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, ULONG_PTR BugCheckParameter1)
{
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // r14
  struct _KEVENT *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r8
  ADAPTER_RENDER *v21; // rcx
  struct _TDR_RECOVERY_CONTEXT *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  ADAPTER_DISPLAY *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v31; // [rsp+20h] [rbp-58h]
  char v32; // [rsp+80h] [rbp+8h] BYREF
  char v33; // [rsp+81h] [rbp+9h]
  struct _KEVENT *v34; // [rsp+88h] [rbp+10h]
  union _LARGE_INTEGER Interval; // [rsp+90h] [rbp+18h] BYREF
  union _LARGE_INTEGER v36; // [rsp+98h] [rbp+20h] BYREF

  if ( !BugCheckParameter1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v4 + 24) = 8193LL;
    WdLogEvent5_WdAssertion(v4);
  }
  CurrentThread = KeGetCurrentThread();
  v6 = (struct _KEVENT *)((char *)this + 2672);
  v34 = (struct _KEVENT *)((char *)this + 2672);
  if ( DXGADAPTER::IsDxgmms2(this) )
    v34 = (struct _KEVENT *)((char *)this + 2672);
  else
    KeSetEvent((PRKEVENT)((char *)this + 2672), 0, 0);
  if ( !*((_QWORD *)this + 338) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 8209LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v33 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v32, v7);
  if ( !DXGADAPTER::IsDxgmms2(this) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 136, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 338), 4, 0xFFFFFFFF, 0);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    *((_QWORD *)this + 18) = KeGetCurrentThread();
    if ( !KeResetEvent((PRKEVENT)this + 2) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v18 + 24) = 8330LL;
      WdLogEvent5_WdAssertion(v18);
    }
    W32kStub_DCompositionNotifyCompositionTokenPresent();
    if ( bTracingEnabled
      && (qword_1C00AF9B0 & 0x1000000) != 0
      && (qword_1C00AF9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v19, this, 1);
    }
    while ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 21), 0) )
    {
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 338), 4, 0xFFFFFFFF, 0);
      v36.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v36);
    }
    if ( bTracingEnabled
      && (qword_1C00AF9B0 & 0x1000000) != 0
      && (qword_1C00AF9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      LODWORD(v31) = 1;
      McTemplateK0pt_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v20,
        this,
        v31);
    }
    *((_DWORD *)this + 44) = 2;
    goto LABEL_44;
  }
  *((_QWORD *)this + 339) = CurrentThread;
  if ( CurrentThread == *(struct _KTHREAD **)(BugCheckParameter1 + 2896) )
  {
LABEL_26:
    KeSetEvent((PRKEVENT)((char *)this + 2672), 0, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 338) + 616LL) + 8LL) + 592LL))(
      *(_QWORD *)(*((_QWORD *)this + 338) + 624LL),
      *((_QWORD *)this + 339));
    DXGADAPTER::PrepareToReset(this, (struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 338), 4, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::FlushDeferredDestructions(*((ADAPTER_RENDER **)this + 338));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 338) + 640LL) + 8LL) + 1144LL))(*(_QWORD *)(*((_QWORD *)this + 338) + 648LL));
    ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 338), 0, 0);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 338), 4, 0xFFFFFFFF, 0);
LABEL_44:
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 338), 4, 0xFFFFFFFF, 0);
    TdrCollectDbgInfoStage2((struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    v21 = (ADAPTER_RENDER *)*((_QWORD *)this + 338);
    *((_BYTE *)this + 2646) = 0;
    if ( (int)ADAPTER_RENDER::Reset(v21, BugCheckParameter1) < 0 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v24 + 24) = 8371LL;
      WdLogEvent5_WdAssertion(v24);
    }
    v25 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 337);
    if ( v25 && (int)ADAPTER_DISPLAY::Reset(v25, v22) < 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v28 + 24) = 8379LL;
      WdLogEvent5_WdAssertion(v28);
    }
    *((_QWORD *)this + 339) = 0LL;
    KeResetEvent(v6);
    goto LABEL_50;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 50) != 1 )
  {
    *((_QWORD *)this + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_58;
  }
  if ( !KeResetEvent((PRKEVENT)this + 2) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 8244LL;
    WdLogEvent5_WdAssertion(v13);
  }
  W32kStub_DCompositionNotifyCompositionTokenPresent();
  if ( bTracingEnabled
    && (qword_1C00AF9B0 & 0x1000000) != 0
    && (qword_1C00AF9B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v14, this, 1);
  }
  DXGADAPTER::AcquireCoreResourceExclusiveWithTracking((__int64)this, 2);
  if ( bTracingEnabled
    && (qword_1C00AF9B0 & 0x1000000) != 0
    && (qword_1C00AF9B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    LODWORD(v31) = 1;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v15, this, v31);
  }
  *((_DWORD *)this + 44) = 2;
  if ( !*(_QWORD *)(BugCheckParameter1 + 2896) )
  {
    v6 = v34;
    goto LABEL_26;
  }
LABEL_50:
  if ( !DXGADAPTER::IsDxgmms2(this) || *(struct _KTHREAD **)(BugCheckParameter1 + 2896) != CurrentThread )
  {
    *((_QWORD *)this + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled
      && (qword_1C00AF9B0 & 0x1000000) != 0
      && (qword_1C00AF9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v29, this);
    }
    W32kStub_DCompositionNotifyCompositionTokenPresent();
    ExReleaseResourceLite(*((PERESOURCE *)this + 21));
    KeSetEvent((PRKEVENT)this + 2, 0, 0);
  }
LABEL_58:
  if ( v33 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v32, v10);
  return 0LL;
}
