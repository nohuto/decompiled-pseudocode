/*
 * XREFs of ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0212D6C
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020B838 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00D9528 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0116AA0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C01197D8 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C01273A0 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C012BCF8 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C012BD58 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0211F38 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02524A0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C028DE44 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::Stop(DXGDEVICE **this, char a2, unsigned __int8 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  DXGDEVICE *i; // rbx
  DXGDEVICE *j; // rbx
  __int64 v11; // rdx
  DXGADAPTERSYNCOBJECT *k; // rbx
  DXGSHAREDRESOURCE **m; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGSYNCOBJECT *v16; // r15
  PERESOURCE *Global; // rax

  ADAPTER_RENDER::EnableClockCalibration((ADAPTER_RENDER *)this, 0);
  *((_BYTE *)this + 889) = a2;
  if ( !a3 )
  {
    if ( !KeReadStateEvent((PRKEVENT)this[2] + 2) )
    {
      v8 = WdLogNewEntry5_WdCriticalError(v7, v6);
      *(_QWORD *)(v8 + 24) = 275LL;
      *(_QWORD *)(v8 + 32) = 6LL;
      *(_QWORD *)(v8 + 40) = this[2];
      *(_OWORD *)(v8 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v8);
    }
    ADAPTER_RENDER::FlushDeferredDestructions((PERESOURCE **)this);
  }
  for ( i = this[18]; i != (DXGDEVICE *)(this + 18) && i; i = *(DXGDEVICE **)i )
    DXGDEVICE::Stop(i, a3);
  for ( j = this[20]; j != (DXGDEVICE *)(this + 20) && j; j = *(DXGDEVICE **)j )
    DXGDEVICE::Stop(j, a3);
  if ( !a3 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 24));
    for ( k = this[29]; k != (DXGADAPTERSYNCOBJECT *)(this + 29) && k; k = *(DXGADAPTERSYNCOBJECT **)k )
      DXGADAPTERSYNCOBJECT::Stop(k);
    DXGFASTMUTEX::Release(this + 24, v11);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 31, 0LL);
  this[32] = KeGetCurrentThread();
  for ( m = (DXGSHAREDRESOURCE **)this[34]; m != this + 34; m = (DXGSHAREDRESOURCE **)*m )
  {
    DXGSHAREDRESOURCE::DestroyCoreAllocations(m[2], 0LL, 0);
    *((_DWORD *)m[2] + 3) |= 0x10u;
    v16 = m[4];
    if ( v16 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v15, v14);
      DXGGLOBAL::DestroySyncObject(Global, v16, 0);
      m[4] = 0LL;
    }
  }
  this[32] = 0LL;
  ExReleasePushLockExclusiveEx(this + 31, 0LL);
  KeLeaveCriticalRegion();
  if ( !a3 && !*((_BYTE *)this[2] + 209) )
  {
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::SuspendVidMmWorkerThread((__int64)this, 1u, 0);
    ADAPTER_RENDER::ResumeVidMmWorkerThread((PERESOURCE **)this, 0, 1);
    ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
  }
}
