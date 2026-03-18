/*
 * XREFs of DxgkReleaseAdapterCoreSync @ 0x1C011E01C
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C001FDC0 (DpiEnterSystemDisplay.c)
 *     DpiLeaveSystemDisplay @ 0x1C0051660 (DpiLeaveSystemDisplay.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011DFA0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C0173B44 (DpiPdoIsChildConnected.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0182350 (DpiFdoCreateRelatedObjects.c)
 *     DpiPowerArbiterThread @ 0x1C01955E0 (DpiPowerArbiterThread.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C02C69C0 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C02C6B6C (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoStopAdapter @ 0x1C02CAB14 (DpiFdoStopAdapter.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02D4BC4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02D51EC (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C011E094 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkReleaseAdapterCoreSync(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  char v15; // [rsp+30h] [rbp-18h]

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 1009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 1009);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 1009LL);
  if ( a1 )
  {
    DXGADAPTER::ReleaseCoreSync(a1, a2);
    v8 = 0;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v6, v5);
    v8 = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13, v7);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v13);
  return v8;
}
