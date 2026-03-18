/*
 * XREFs of ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C0016550
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C0016490 (DxgNotifyVSyncCB.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C0016698 (-NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0056F04 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyVSync(KSPIN_LOCK *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  KSPIN_LOCK v8; // rcx
  __int64 v9; // rax
  ADAPTER_DISPLAY *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+30h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 8009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 8009LL);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 8009);
  v17 = 0LL;
  v6 = KeQueryInterruptTimePrecise(&v17);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v18 = v6 / 0xA;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 508, &LockHandle);
  v7 = 0LL;
  if ( (this[333] & 0x10) != 0 )
    v7 = a2;
  if ( !*(_DWORD *)(this[498] + 4 * v7) )
  {
    v8 = this[509];
    v9 = *(_QWORD *)(v8 + 8 * v7);
    if ( v9 )
    {
      _InterlockedExchange64((volatile __int64 *)(this[510] + 8 * v7), v17 - v9);
      v8 = this[509];
    }
    *(_QWORD *)(v8 + 8 * v7) = v17;
  }
  v10 = (ADAPTER_DISPLAY *)this[349];
  if ( v10 )
    ADAPTER_DISPLAY::NotifyVSync(v10, a2, &v18);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( *((_DWORD *)this + 1028) )
  {
    do
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync((DXGPOWERSTATISTICSTRANSITIONENGINE *)(this[513]
                                                                                           + 136
                                                                                           + 248LL * v3++));
    while ( v3 < *((_DWORD *)this + 1028) );
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v13);
  }
}
