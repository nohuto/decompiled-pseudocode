/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C016E8D4
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A780 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01B468C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01F1CA4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C02B9A0C (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?IommuBeginExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C02C3FB0 (-IommuBeginExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C016037C (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z @ 0x1C016EC7C (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1C016ECD8 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C016ED6C (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C01BADA4 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C021B3CC (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C021B4DC (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C021B5B0 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v5; // r13d
  __int64 v6; // r8
  DXGGLOBAL *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _EPROCESS *v12; // rax
  __int64 v13; // r8
  unsigned __int8 v14; // r12
  __int64 v15; // r8
  DXGDODPRESENT *v16; // rcx
  struct DXGPROCESS *Current; // rax
  DXGPROCESS *v18; // r13
  int v19; // r12d
  __int64 v20; // rax
  DXGGLOBAL *Global; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _EPROCESS *CurrentProcess; // rax
  unsigned __int8 v27; // dl
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  int FirstProfilerInterface; // eax
  __int64 v33; // r8
  bool v34; // zf
  DXGGLOBAL *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  struct _EPROCESS *v40; // rax
  DXGDODPRESENT *v41; // rcx
  __int64 v42; // [rsp+20h] [rbp-58h]
  unsigned __int8 v44; // [rsp+98h] [rbp+20h]

  v5 = a2;
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, a1, 0LL, 0LL);
  if ( v5 == 3 )
  {
    KeEnterCriticalRegion();
    Current = DXGPROCESS::GetCurrent();
    v18 = Current;
    v19 = a3 & 2;
    if ( v19 )
    {
      if ( !Current )
      {
        WdLogSingleEntry1(1LL, 4173LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess", 4173LL, 0LL, 0LL, 0LL, 0LL);
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v18 + 216, 0LL);
      *((_QWORD *)v18 + 28) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v18, (struct DXGADAPTER *)a1);
      v20 = *(_QWORD *)(a1 + 2800);
      if ( v20 && *(_QWORD *)(v20 + 632) )
        DXGPROCESS::FlushAllDevice(v18, (const struct DXGADAPTER *)a1);
    }
    Global = DXGGLOBAL_GetGlobal();
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v23, v22, v24, v25);
    DXGGLOBAL::StartCoreDripsBlockerTracking(Global, *(_QWORD *)(a1 + 232), 0LL, CurrentProcess);
    v27 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    v44 = v27;
    if ( bTracingEnabled
      && (qword_1C012F870 & 0x1000000) != 0
      && (qword_1C012F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    {
      LODWORD(v42) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v28, a1, v42);
      v27 = v44;
    }
    LOBYTE(v28) = v27 != 0;
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, 3LL, v28);
    if ( bTracingEnabled
      && (qword_1C012F870 & 0x1000000) != 0
      && (qword_1C012F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    {
      LODWORD(v42) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v29, a1, v42);
    }
    if ( *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
    v30 = *(_QWORD *)(a1 + 2800);
    if ( !v30 )
      goto LABEL_67;
    if ( *(_QWORD *)(v30 + 632) )
    {
      if ( *(_BYTE *)(v30 + 640) )
      {
        WdLogSingleEntry1(1LL, 4216LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"this->GetRenderCore()->m_bSchedulerSuspendedByAcquireCoreResource == FALSE",
          4216LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v30 = *(_QWORD *)(a1 + 2800);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)v30, 0, 0) < 0 )
      {
        WdLogSingleEntry1(1LL, 4218LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(SchedulerStatus)", 4218LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2800) + 640LL) = 1;
      if ( !*(_QWORD *)(a1 + 2800) )
      {
LABEL_67:
        v41 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2792) + 448LL);
        if ( v41 )
          DXGDODPRESENT::Flush(v41);
      }
    }
    if ( v19 )
    {
      DXGPROCESS::ReleaseDeviceLockForAllDevices(v18, (struct DXGADAPTER *)a1);
      *((_QWORD *)v18 + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v18 + 216, 0LL);
      KeLeaveCriticalRegion();
    }
    v5 = a2;
    goto LABEL_12;
  }
  KeEnterCriticalRegion();
  if ( (a3 & 1) == 0 )
  {
    v7 = DXGGLOBAL_GetGlobal();
    v12 = (struct _EPROCESS *)PsGetCurrentProcess(v9, v8, v10, v11);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v7, *(_QWORD *)(a1 + 232), 0LL, v12);
    v14 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    if ( bTracingEnabled
      && (qword_1C012F870 & 0x1000000) != 0
      && (qword_1C012F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    {
      LODWORD(v42) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v13, a1, v42);
    }
    LOBYTE(v13) = v14 != 0;
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, v5, v13);
    if ( bTracingEnabled
      && (qword_1C012F870 & 0x1000000) != 0
      && (qword_1C012F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    {
      LODWORD(v42) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v15, a1, v42);
    }
    if ( *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
LABEL_11:
    if ( !*(_QWORD *)(a1 + 2800) )
    {
      v16 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2792) + 448LL);
      if ( v16 )
        DXGDODPRESENT::Flush(v16);
    }
LABEL_12:
    *(_DWORD *)(a1 + 176) = v5;
    return;
  }
  if ( bTracingEnabled
    && (qword_1C012F870 & 0x1000000) != 0
    && (qword_1C012F870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
  {
    LODWORD(v42) = 1;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v6, a1, v42);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    *(_DWORD *)(a1 + 4588) = v5;
    FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
    v34 = bTracingEnabled == 0;
    *(_DWORD *)(a1 + 4592) = FirstProfilerInterface;
    if ( !v34
      && (qword_1C012F870 & 0x1000000) != 0
      && (qword_1C012F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    {
      LODWORD(v42) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v33, a1, v42);
    }
    v35 = DXGGLOBAL_GetGlobal();
    v40 = (struct _EPROCESS *)PsGetCurrentProcess(v37, v36, v38, v39);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v35, *(_QWORD *)(a1 + 232), 0LL, v40);
    goto LABEL_11;
  }
  if ( bTracingEnabled
    && (qword_1C012F870 & 0x1000000) != 0
    && (qword_1C012F870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
  {
    LODWORD(v42) = 0;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v31, a1, v42);
  }
  KeLeaveCriticalRegion();
}
