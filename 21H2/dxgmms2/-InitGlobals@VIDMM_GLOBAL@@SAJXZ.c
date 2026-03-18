/*
 * XREFs of ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C00B3A58
 * Callers:
 *     VidMmInitGlobals @ 0x1C001CA60 (VidMmInitGlobals.c)
 * Callees:
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001868 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000188C (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McGenEventRegister_EtwRegister @ 0x1C001CA78 (McGenEventRegister_EtwRegister.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C00B36C4 (TlgRegisterAggregateProviderEx.c)
 *     ?InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x1C00B3FB0 (-InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1C00B4010 (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 *     ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C00B4058 (-InitGlobals@VIDMM_DMA_POOL@@SAJXZ.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C00B41D8 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     __security_init_cookie @ 0x1C00F9044 (__security_init_cookie.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C00F9078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 */

__int64 VIDMM_GLOBAL::InitGlobals(void)
{
  int v0; // eax
  unsigned int v1; // esi
  __int64 v2; // rdx
  __int64 v3; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v5; // rax
  unsigned __int64 MaximumGlobalAdapterCount; // kr00_8
  __int64 v7; // rcx
  int inited; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  int LiveDumpWithWdLogs; // eax
  __int64 v15; // rcx
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+80h] [rbp-80h]
  struct _PCW_REGISTRATION_INFORMATION v18; // [rsp+88h] [rbp-78h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-48h]
  struct _PCW_REGISTRATION_INFORMATION v20; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+F0h] [rbp-10h]
  struct _PCW_REGISTRATION_INFORMATION v22; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v23; // [rsp+128h] [rbp+28h]
  struct _PCW_REGISTRATION_INFORMATION v24; // [rsp+130h] [rbp+30h] BYREF
  __int64 v25; // [rsp+160h] [rbp+60h]

  _security_init_cookie();
  v0 = wil_InitializeFeatureStaging();
  v1 = v0;
  if ( v0 < 0 )
  {
    VIDMM_GLOBAL::KirEnabled = 0;
    WdLogSingleEntry1(1LL, v0);
    goto LABEL_24;
  }
  VIDMM_GLOBAL::KirEnabled = 1;
  KeQueryPerformanceCounter(&VIDMM_GLOBAL::_QpcFrequency);
  bTracingEnabled = 0;
  McGenEventRegister_EtwRegister();
  TlgRegisterAggregateProviderEx(v3, v2);
  VIDMM_GLOBAL::ReadConfiguration();
  VIDMM_GLOBAL::_RotationHistory = (void *)operator new[](98304LL, 0x6D4D6956u, 64LL);
  if ( VIDMM_GLOBAL::_RotationHistory )
    *(&VIDMM_GLOBAL::_RotationHistory + 1) = (void *)2048;
  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v5 = 4 * MaximumGlobalAdapterCount;
  if ( !is_mul_ok(MaximumGlobalAdapterCount, 4uLL) )
    v5 = -1LL;
  VIDMM_PROCESS::_pDxProcessPerAdapterCount = (void *)operator new[](v5, 0x33316956u, 256LL);
  if ( !VIDMM_PROCESS::_pDxProcessPerAdapterCount )
  {
    _InterlockedAdd(&dword_1C006E77C, 1u);
    WdLogSingleEntry1(6LL, 493LL);
    DxgkLogInternalTriageEvent(v7, 262145LL);
    return -1073741801LL;
  }
  inited = VIDMM_DMA_POOL::InitGlobals();
  v1 = inited;
  if ( inited < 0 || (inited = VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage(), v1 = inited, inited < 0) )
  {
    WdLogSingleEntry1(1LL, inited);
LABEL_24:
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    return v1;
  }
  qword_1C006E8B8 = (__int64)&VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  v11 = operator new(32LL, 0x30316956u, 256LL);
  if ( !v11 )
  {
    VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = 0LL;
    WdLogSingleEntry1(1LL, -1073741801LL);
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
    return 3221225495LL;
  }
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_DWORD *)(v11 + 16) = 0;
  *(_DWORD *)(v11 + 20) = 64;
  *(_DWORD *)(v11 + 24) = -1;
  VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = (struct DXGPUSHLOCK *)v11;
  qword_1C006E8F8 = (__int64)&VIDMM_GLOBAL::_AdapterListHead;
  VIDMM_GLOBAL::_AdapterListHead.Flink = &VIDMM_GLOBAL::_AdapterListHead;
  Info.Name = (PCUNICODE_STRING)L"$&";
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetProcessMemory'::`2'::Descriptors;
  VIDMM_PARTITION::_PartitionTree = 0LL;
  *(_QWORD *)&Info.Version = 512LL;
  *(_QWORD *)&Info.CounterCount = 5LL;
  v17 = 0LL;
  Info.Callback = 0LL;
  Info.CallbackContext = 0LL;
  v12 = PcwRegister(&GpuPerformanceCounterSetProcessMemory, &Info);
  v1 = v12;
  if ( v12 < 0 )
    goto LABEL_19;
  VIDMM_GLOBAL::PerfCounterSetEngineRegistered = 1;
  v18.Name = (PCUNICODE_STRING)&`InitRegistrationInformationGpuPerformanceCounterSetEngine'::`2'::Name;
  *(_QWORD *)&v18.Version = 512LL;
  v18.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetEngine'::`2'::Descriptors;
  *(_QWORD *)&v18.CounterCount = 2LL;
  v19 = 0LL;
  v18.Callback = 0LL;
  v18.CallbackContext = 0LL;
  v12 = PcwRegister(&GpuPerformanceCounterSetEngine, &v18);
  v1 = v12;
  if ( v12 < 0 )
    goto LABEL_19;
  VIDMM_GLOBAL::PerfCounterSetProcessMemoryRegistered = 1;
  v20.Name = (PCUNICODE_STRING)L"$&";
  *(_QWORD *)&v20.Version = 512LL;
  v20.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetAdapterMemory'::`2'::Descriptors;
  *(_QWORD *)&v20.CounterCount = 3LL;
  v21 = 0LL;
  v20.Callback = 0LL;
  v20.CallbackContext = 0LL;
  v12 = PcwRegister(&GpuPerformanceCounterSetAdapterMemory, &v20);
  v1 = v12;
  if ( v12 < 0 )
    goto LABEL_19;
  VIDMM_GLOBAL::PerfCounterSetAdapterMemoryRegistered = 1;
  v22.Name = (PCUNICODE_STRING)L"02";
  *(_QWORD *)&v22.Version = 512LL;
  v22.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
  *(_QWORD *)&v22.CounterCount = 1LL;
  v23 = 0LL;
  v22.Callback = 0LL;
  v22.CallbackContext = 0LL;
  v12 = PcwRegister(&GpuPerformanceCounterSetLocalAdapterMemory, &v22);
  v1 = v12;
  if ( v12 < 0 )
    goto LABEL_19;
  VIDMM_GLOBAL::PerfCounterSetLocalAdapterMemoryRegistered = 1;
  v24.Name = (PCUNICODE_STRING)L"8:";
  *(_QWORD *)&v24.Version = 512LL;
  v24.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
  *(_QWORD *)&v24.CounterCount = 1LL;
  v25 = 0LL;
  v24.Callback = 0LL;
  v24.CallbackContext = 0LL;
  v12 = PcwRegister(&GpuPerformanceCounterSetNonLocalAdapterMemory, &v24);
  v1 = v12;
  if ( v12 >= 0 )
  {
    VIDMM_GLOBAL::PerfCounterSetNonLocalAdapterMemoryRegistered = 1;
    VIDMM_GLOBAL::InitPhysicalHeap();
  }
  else
  {
LABEL_19:
    WdLogSingleEntry1(1LL, v12);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(403LL, 2065LL, (int)v1, 0LL, 0LL, 0);
    if ( LiveDumpWithWdLogs < 0 )
    {
      WdLogSingleEntry1(1LL, LiveDumpWithWdLogs);
      goto LABEL_24;
    }
  }
  return v1;
}
