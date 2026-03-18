/*
 * XREFs of ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01B468C
 * Callers:
 *     ?DXGADAPTER_AcquireCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C001FB80 (-DXGADAPTER_AcquireCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01B45E8 (DxgkAcquireAdapterCoreSync.c)
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C02DB1D0 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C016E8D4 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C01B438C (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01F1CA4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::AcquireCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  ADAPTER_RENDER *v6; // rcx
  __int64 v7; // rcx

  v2 = a2;
  if ( DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, a1, 0LL, 0LL);
  if ( !KeReadStateEvent((PRKEVENT)(a1 + 48)) )
  {
    if ( (_DWORD)v2 == 4 )
      return;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (const EVENT_DESCRIPTOR *)"g", v5, 72);
    KeWaitForSingleObject((PVOID)(a1 + 48), Executive, 0, 0, 0LL);
  }
  switch ( (_DWORD)v2 )
  {
    case 1:
      DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)a1, 0LL);
      break;
    case 2:
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2u, 0);
      v7 = *(_QWORD *)(a1 + 2800);
      if ( v7 )
        ADAPTER_RENDER::FlushScheduler(v7, 6LL, 0xFFFFFFFFLL);
      break;
    case 3:
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2u, 0);
      break;
    case 4:
      DXGADAPTER::AcquireLocksForPowerStateD3transition((DXGADAPTER *)a1);
      break;
    case 6:
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2u, 0);
      *(_BYTE *)(a1 + 205) = 1;
      break;
    default:
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
      break;
  }
  v6 = *(ADAPTER_RENDER **)(a1 + 2800);
  if ( v6 )
  {
    if ( (((_DWORD)v2 - 4) & 0xFFFFFFFD) == 0 )
      ADAPTER_RENDER::EnableClockCalibration(v6, 0);
  }
}
