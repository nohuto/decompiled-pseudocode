/*
 * XREFs of DxgkAcquireAdapterCoreSync @ 0x1C011E380
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C001FDC0 (DpiEnterSystemDisplay.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011E21C (DpiAcquireCoreSyncAccessSafe.c)
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
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C011E424 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterCoreSync(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  char v15; // [rsp+30h] [rbp-18h]

  v13 = -1;
  v14 = 0LL;
  v4 = a2;
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
  v7 = -1073741811;
  if ( !a1 )
  {
    v12 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
LABEL_15:
    WdLogEvent5_WdError(v12);
    goto LABEL_7;
  }
  if ( (int)v4 <= 0 || (int)v4 > 4 && (_DWORD)v4 != 6 )
  {
    v12 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v12 + 24) = v4;
    goto LABEL_15;
  }
  DXGADAPTER::AcquireCoreSync(a1, (unsigned int)v4);
  v7 = 0;
LABEL_7:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13, v8);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v13);
  return v7;
}
