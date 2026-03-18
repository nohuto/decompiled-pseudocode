/*
 * XREFs of ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C0036194
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C0040870 (DxgNotifyVSyncCB.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C0039024 (-NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z.c)
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0045ED4 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyVSync(KSPIN_LOCK *this, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdx
  KSPIN_LOCK v6; // rcx
  __int64 v7; // rax
  ADAPTER_DISPLAY *v8; // rcx
  __int64 v9; // rdx
  unsigned int i; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  char v15; // [rsp+30h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+60h] [rbp+10h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp+20h] BYREF

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 8009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 8009);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 8009LL);
  v17 = 0LL;
  v18 = KeQueryInterruptTimePrecise(&v17) / 0xAuLL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 492, &LockHandle);
  v5 = (this[318] & 0x10) != 0 ? a2 : 0;
  if ( !*(_DWORD *)(this[482] + 4 * v5) )
  {
    v6 = this[493];
    v7 = *(_QWORD *)(v6 + 8 * v5);
    if ( v7 )
    {
      _InterlockedExchange64((volatile __int64 *)(this[494] + 8 * v5), v17 - v7);
      v6 = this[493];
    }
    *(_QWORD *)(v6 + 8 * v5) = v17;
  }
  v8 = (ADAPTER_DISPLAY *)this[334];
  if ( v8 )
    ADAPTER_DISPLAY::NotifyVSync(v8, a2, &v18);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  for ( i = 0; i < *((_DWORD *)this + 994); ++i )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync((DXGPOWERSTATISTICSTRANSITIONENGINE *)(this[496] + 136 + 248LL * i));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13, v9);
  if ( v15 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v13);
  }
}
