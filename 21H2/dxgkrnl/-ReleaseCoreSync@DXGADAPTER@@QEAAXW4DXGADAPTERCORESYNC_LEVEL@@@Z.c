/*
 * XREFs of ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01B41A0
 * Callers:
 *     ?DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C001FB60 (-DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01B4124 (DxgkReleaseAdapterCoreSync.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C02DB310 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0008F10 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C004457C (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1C01B42C4 (-StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C01B438C (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01F2400 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01F2E10 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi
  ADAPTER_RENDER *v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD *v7; // rdx
  ADAPTER_RENDER *v8; // rcx

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, a1, 0LL, 0LL);
  v4 = 7;
  if ( (unsigned int)(v2 - 1) <= 2 || (_DWORD)v2 == 5 )
    DXGADAPTER::StartDeadlockTrackers((DXGADAPTER *)a1);
  if ( (_DWORD)v2 == 1 )
    goto LABEL_6;
  if ( (_DWORD)v2 == 2 )
    goto LABEL_13;
  if ( (_DWORD)v2 != 3 )
  {
    if ( (_DWORD)v2 != 5 )
    {
      WdLogSingleEntry1(2LL, v2);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid synchronization level 0x%I64x",
        v2,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_9;
    }
    v8 = *(ADAPTER_RENDER **)(a1 + 2800);
    if ( v8 )
    {
      ADAPTER_RENDER::RestoreFromPurgeSegments(v8);
      v4 = 10;
    }
LABEL_13:
    v6 = *(_QWORD *)(a1 + 2800);
    if ( v6 )
      ADAPTER_RENDER::FlushScheduler(v6, v4, 0xFFFFFFFFLL);
    if ( *(_DWORD *)(a1 + 160) == 1 )
    {
      DXGADAPTER::ReleaseLocksForPowerStateD3transition((DXGADAPTER *)a1);
      *(_DWORD *)(a1 + 160) = 0;
      *(_DWORD *)(a1 + 3340) = 0;
      DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)a1);
      if ( *(_QWORD *)(a1 + 3256) )
        DXGADAPTER::ScheduleAdapterActivityCheck((struct _KTHREAD **)a1, v7);
    }
  }
LABEL_6:
  if ( *(_BYTE *)(a1 + 205) )
    *(_BYTE *)(a1 + 205) = 0;
  DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)a1, 0LL);
LABEL_9:
  v5 = *(ADAPTER_RENDER **)(a1 + 2800);
  if ( v5 )
    ADAPTER_RENDER::EnableClockCalibration(v5, 1u);
}
