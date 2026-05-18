/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800064D0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_StagingConfig_Load @ 0x1800027B8 (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_FireNotification @ 0x180002C94 (wil_details_StagingConfig_FireNotification.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800040C4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1800056D8 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180005908 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180005CD4 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180005F7C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ??$EnsureCoalescedTimerSRUM@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVFeatureStateManager@01@@Z @ 0x180007E2C (--$EnsureCoalescedTimerSRUM@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v5; // r14d
  unsigned int v6; // esi
  int v7; // eax
  unsigned __int16 v8; // bx
  FARPROC ProcAddress; // rax
  HMODULE ModuleHandleW; // rax
  __int64 v12; // r8
  int v13; // eax
  void *v14; // rbx
  HANDLE ProcessHeap; // rax
  RTL_SRWLOCK *v16; // [rsp+30h] [rbp-D0h] BYREF
  void (__stdcall *Source)(PSRWLOCK); // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-C0h]
  _BYTE v19[56]; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID lpMem; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+A0h] [rbp-60h]
  _BYTE v22[208]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a2 & 0x7FFFFFFF;
  v5 = (unsigned int)a2 >> 31;
  v6 = (unsigned int)this;
  if ( (_DWORD)this || a3 || v4 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v8 = a2;
      if ( wil::details::g_featureStateManager
        && !wil::details::g_processShutdownInProgress
        && !(wil::details::g_pfnDllShutdownInProgress ? wil::details::g_pfnDllShutdownInProgress() : 0) )
      {
        AcquireSRWLockExclusive(&SRWLock);
        LODWORD(Source) = v6;
        HIDWORD(Source) = v8;
        v18 = a3;
        wil::details_abi::heap_buffer::push_back(
          (wil::details_abi::heap_buffer *)((char *)&xmmword_180014128 + 8),
          &Source,
          0xCuLL);
        wil::details::EnsureCoalescedTimerSRUM<wil::details::FeatureStateManager>(
          &unk_180014070,
          &unk_180014078,
          &wil::details::g_featureStateManager);
        Source = ReleaseSRWLockExclusive;
        v16 = &SRWLock;
        wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&Source, &v16);
      }
    }
    else if ( a3 || v4 == 254 )
    {
      wil::details::FeatureStateManager::RecordFeatureUsage(
        (__int64)&wil::details::g_featureStateManager,
        (unsigned int)this,
        v4,
        a3);
    }
    else
    {
      LODWORD(v16) = (_DWORD)this;
      HIDWORD(v16) = (unsigned __int16)a2;
      if ( a2 < 0 )
        HIWORD(v16) |= 1u;
      ProcAddress = (FARPROC)g_wil_details_pfnRtlNotifyFeatureUsage;
      if ( g_wil_details_pfnRtlNotifyFeatureUsage )
        goto LABEL_28;
      ModuleHandleW = g_wil_details_ntdllModuleHandle;
      if ( !g_wil_details_ntdllModuleHandle )
      {
        ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
        g_wil_details_ntdllModuleHandle = ModuleHandleW;
      }
      ProcAddress = GetProcAddress(ModuleHandleW, "RtlNotifyFeatureUsage");
      g_wil_details_pfnRtlNotifyFeatureUsage = (__int64)ProcAddress;
      if ( ProcAddress )
LABEL_28:
        v13 = ((__int64 (__fastcall *)(RTL_SRWLOCK **))ProcAddress)(&v16);
      else
        v13 = -1073741511;
      if ( v13 )
      {
        if ( !(unsigned int)wil_details_StagingConfig_Load((__int64)v19, 0, v12, (__int64)v22) )
        {
          wil_details_StagingConfig_FireNotification((__int64)v19, v6, (unsigned __int16)v4, v5);
          if ( v21 )
          {
            v14 = lpMem;
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v14);
          }
        }
      }
    }
  }
  else if ( !wil::details::g_processShutdownInProgress )
  {
    if ( wil::details::g_pfnDllShutdownInProgress )
      v7 = wil::details::g_pfnDllShutdownInProgress();
    else
      v7 = 0;
    if ( !v7 && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)&wil::details::g_featureStateManager) )
    {
      wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)&qword_180014050[25], qword_180014050);
      wil::details_abi::FeatureStateData::RecordUsage(qword_180014050);
    }
  }
}
