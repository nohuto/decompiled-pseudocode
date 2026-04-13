/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1800088A0 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x180008D80 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18000B12C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18000B5CC (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18000B970 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000BAD8 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, int a2, unsigned int a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int v6; // eax
  int (*ProcAddress)(struct _RTL_FEATURE_USAGE_REPORT *); // rax
  HMODULE ModuleHandleW; // rax
  __int64 v9; // r8
  int v10; // eax
  void *v11; // rbx
  HANDLE ProcessHeap; // rax
  int v13; // [rsp+30h] [rbp-168h] BYREF
  int v14; // [rsp+34h] [rbp-164h]
  _BYTE v15[56]; // [rsp+40h] [rbp-158h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-120h]
  int v17; // [rsp+90h] [rbp-108h]
  _BYTE v18[208]; // [rsp+A0h] [rbp-F8h] BYREF

  v3 = (unsigned int)a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  v5 = (unsigned int)this;
  if ( (_DWORD)this || a3 || v4 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        (RTL_SRWLOCK *)&wil::details::g_featureStateManager,
        (int)this,
        a2,
        a3);
    }
    else if ( a3 || v4 == 254 )
    {
      wil::details::FeatureStateManager::RecordFeatureUsage(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        v4,
        a3);
    }
    else
    {
      v13 = (int)this;
      v14 = (unsigned __int16)a2;
      if ( a2 < 0 )
        HIWORD(v14) |= 1u;
      ProcAddress = g_wil_details_pfnRtlNotifyFeatureUsage;
      if ( g_wil_details_pfnRtlNotifyFeatureUsage )
        goto LABEL_21;
      ModuleHandleW = g_wil_details_ntdllModuleHandle;
      if ( !g_wil_details_ntdllModuleHandle )
      {
        ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
        g_wil_details_ntdllModuleHandle = ModuleHandleW;
      }
      ProcAddress = (int (*)(struct _RTL_FEATURE_USAGE_REPORT *))GetProcAddress(ModuleHandleW, "RtlNotifyFeatureUsage");
      g_wil_details_pfnRtlNotifyFeatureUsage = ProcAddress;
      if ( ProcAddress )
LABEL_21:
        v10 = ((__int64 (__fastcall *)(int *))ProcAddress)(&v13);
      else
        v10 = -1073741511;
      if ( v10 )
      {
        if ( !(unsigned int)wil_details_StagingConfig_Load((__int64)v15, 0, v9, v18) )
        {
          wil_details_StagingConfig_FireNotification(
            (struct wil_details_StagingConfig *)v15,
            (const struct __WIL__WNF_TYPE_ID *)v5,
            (const void *)(unsigned __int16)v4,
            v3);
          if ( v17 )
          {
            v11 = lpMem;
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v11);
          }
        }
      }
    }
  }
  else if ( !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnDllShutdownInProgress;
    if ( wil::details::g_pfnDllShutdownInProgress )
      v6 = wil::details::g_pfnDllShutdownInProgress();
    if ( !v6 && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)&wil::details::g_featureStateManager) )
      wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)&qword_180192480[25], qword_180192480);
  }
}
