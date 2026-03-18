/*
 * XREFs of ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C452C
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BDA44 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C01BAF24 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C01E9A2C (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01EFC0C (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01F2E10 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?ResetSchedulerFromTDR@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C4750 (-ResetSchedulerFromTDR@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?RestartSchedulerFromTDR@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02C47E4 (-RestartSchedulerFromTDR@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02CB4DC (-DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C02E73F8 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C0306F50 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall ADAPTER_RENDER::Reset(ADAPTER_RENDER *this, ULONG_PTR BugCheckParameter1)
{
  _QWORD *i; // rdx
  _BYTE *j; // rax
  int restarted; // esi
  __int64 v7; // rax
  DXGDEVICE *k; // rdi
  DXGDEVICE *v9; // rdi
  DXGDEVICE *m; // rbx

  ADAPTER_RENDER::FlushScheduler((__int64)this, 4u, 0xFFFFFFFF, 0);
  ADAPTER_RENDER::DisablePinnedHardware((PERESOURCE **)this);
  ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
  ADAPTER_RENDER::FlushScheduler((__int64)this, 4u, 0xFFFFFFFF, 0);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 256, 0LL);
  *((_QWORD *)this + 33) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 35); i != (_QWORD *)((char *)this + 280); i = (_QWORD *)*i )
    *(_DWORD *)(i[2] + 12LL) |= 0x10u;
  *((_QWORD *)this + 33) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 256, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 192));
  for ( j = (_BYTE *)*((_QWORD *)this + 30); j != (char *)this + 240 && j; j = *(_BYTE **)j )
    j[25] = 1;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 24);
  ADAPTER_RENDER::ResetSchedulerFromTDR(this);
  if ( (int)ADAPTER_RENDER::DdiRestartFromTimeout(this) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = *(_QWORD *)(*((_QWORD *)this + 2) + 576LL);
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  restarted = ADAPTER_RENDER::RestartSchedulerFromTDR(this);
  v7 = *((_QWORD *)this + 78);
  if ( restarted < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 752LL);
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v7 + 8) + 592LL))(*((_QWORD *)this + 79), 0LL);
  ADAPTER_RENDER::RestoreFromPurgeSegments((PERESOURCE **)this);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(BugCheckParameter1 + 2904) )
    ADAPTER_RENDER::ResumeVidMmWorkerThread((PERESOURCE **)this, 1, 0);
  *(_OWORD *)((char *)this + 712) = 0LL;
  *(_OWORD *)((char *)this + 728) = 0LL;
  *(_OWORD *)((char *)this + 1112) = 0LL;
  for ( k = (DXGDEVICE *)*((_QWORD *)this + 18); k != (ADAPTER_RENDER *)((char *)this + 144) && k; k = *(DXGDEVICE **)k )
  {
    if ( *((_DWORD *)k + 108) != 3 )
      DXGDEVICE::Reset(k);
  }
  v9 = (ADAPTER_RENDER *)((char *)this + 160);
  for ( m = (DXGDEVICE *)*((_QWORD *)this + 20); m != v9 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Reset(m);
  return (unsigned int)restarted;
}
