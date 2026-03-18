/*
 * XREFs of ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0215990
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020E160 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00DEBE0 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0138B18 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C0138EB0 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0171DEC (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C017356C (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C021C6D0 (-DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C02555A4 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C0265460 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall ADAPTER_RENDER::Reset(ADAPTER_RENDER *this, ULONG_PTR BugCheckParameter1)
{
  _QWORD *i; // rdx
  __int64 v5; // rdx
  _BYTE *j; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rax
  DXGDEVICE *k; // rdi
  DXGDEVICE *v16; // rdi
  DXGDEVICE *m; // rbx

  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  ADAPTER_RENDER::DisablePinnedHardware((PERESOURCE **)this);
  ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 248, 0LL);
  *((_QWORD *)this + 32) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 34); i != (_QWORD *)((char *)this + 272); i = (_QWORD *)*i )
    *(_DWORD *)(i[2] + 12LL) |= 0x10u;
  *((_QWORD *)this + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 192));
  for ( j = (_BYTE *)*((_QWORD *)this + 29); j != (char *)this + 232 && j; j = *(_BYTE **)j )
    j[25] = 1;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 24, v5);
  v8 = *((_QWORD *)this + 78);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, v7);
    *(_QWORD *)(v9 + 24) = 2506LL;
    WdLogEvent5_WdAssertion(v9);
    v8 = *((_QWORD *)this + 78);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 77) + 8LL) + 744LL))(v8, 1LL);
  if ( (int)ADAPTER_RENDER::DdiRestartFromTimeout(this) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 96) = *(_QWORD *)(*((_QWORD *)this + 2) + 488LL);
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  v11 = *((_QWORD *)this + 78);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, v10);
    *(_QWORD *)(v12 + 24) = 2523LL;
    WdLogEvent5_WdAssertion(v12);
    v11 = *((_QWORD *)this + 78);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 77) + 8LL) + 752LL))(v11, 1LL);
  v14 = *(_QWORD *)(*((_QWORD *)this + 77) + 8LL);
  if ( v13 < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 96) = *(_QWORD *)(v14 + 752);
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(v14 + 592))(*((_QWORD *)this + 78), 0LL);
  ADAPTER_RENDER::RestoreFromPurgeSegments((PERESOURCE **)this);
  ADAPTER_RENDER::ResumeVidMmWorkerThread((PERESOURCE **)this, 1, 0);
  *(_OWORD *)((char *)this + 696) = 0LL;
  *(_OWORD *)((char *)this + 712) = 0LL;
  *((_OWORD *)this + 68) = 0LL;
  for ( k = (DXGDEVICE *)*((_QWORD *)this + 18); k != (ADAPTER_RENDER *)((char *)this + 144) && k; k = *(DXGDEVICE **)k )
  {
    if ( *((_DWORD *)k + 108) != 3 )
      DXGDEVICE::Reset(k);
  }
  v16 = (ADAPTER_RENDER *)((char *)this + 160);
  for ( m = (DXGDEVICE *)*((_QWORD *)this + 20); m != v16 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Reset(m);
  return (unsigned int)v13;
}
