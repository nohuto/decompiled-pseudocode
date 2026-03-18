/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0127D28
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000F3C0 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0127674 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0207318 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C0207520 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0211DD4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0038C64 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 *     W32kStub_DCompositionNotifyCompositionTokenPresent @ 0x1C00FD5C0 (W32kStub_DCompositionNotifyCompositionTokenPresent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0127E9C (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z @ 0x1C0127F48 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C012BBD0 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0152430 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C027F7D8 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C0280780 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0281398 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _EPROCESS *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGGLOBAL *v13; // rax
  unsigned __int8 v14; // r12
  __int64 v15; // r8
  unsigned int v16; // r13d
  __int64 v17; // r8
  DXGDODPRESENT *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _EPROCESS *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  DXGGLOBAL *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  DXGPROCESS *v33; // r15
  int v34; // r12d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _EPROCESS *CurrentProcess; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  DXGGLOBAL *Global; // rax
  unsigned __int8 v43; // r13
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  DXGDODPRESENT *v53; // rcx
  __int64 v54; // [rsp+20h] [rbp-38h]

  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    v19 = WdLogNewEntry5_WdCriticalError(v7, v6);
    *(_QWORD *)(v19 + 24) = 275LL;
    *(_QWORD *)(v19 + 32) = 4LL;
    *(_QWORD *)(v19 + 40) = a1;
    *(_OWORD *)(v19 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( a2 == 3 )
  {
    KeEnterCriticalRegion();
    Current = DXGPROCESS::GetCurrent(v29, v28);
    v33 = Current;
    v34 = a3 & 2;
    if ( v34 )
    {
      if ( !Current )
      {
        v35 = WdLogNewEntry5_WdAssertion(v32, v31);
        *(_QWORD *)(v35 + 24) = 4095LL;
        WdLogEvent5_WdAssertion(v35);
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v33 + 176, 0LL);
      *((_QWORD *)v33 + 23) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v33, (struct DXGADAPTER *)a1);
      v36 = *(_QWORD *)(a1 + 2680);
      if ( v36 && *(_QWORD *)(v36 + 624) )
        DXGPROCESS::FlushAllDevice(v33, (const struct DXGADAPTER *)a1);
    }
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 104));
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v38, v37);
    Global = DXGGLOBAL::GetGlobal(v41, v40);
    DXGGLOBAL::StartCoreDripsBlockerTracking(Global, *(_QWORD *)(a1 + 224), 0LL, CurrentProcess);
    v43 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    W32kStub_DCompositionNotifyCompositionTokenPresent();
    if ( bTracingEnabled
      && (qword_1C00AE9B0 & 0x1000000) != 0
      && (qword_1C00AE9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v44, a1, 1);
    }
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, 3LL);
    if ( bTracingEnabled
      && (qword_1C00AE9B0 & 0x1000000) != 0
      && (qword_1C00AE9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    {
      LODWORD(v54) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v45, a1, v54);
    }
    if ( v43 && *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
    ExReleasePushLockSharedEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
    v48 = *(_QWORD *)(a1 + 2680);
    if ( !v48 )
      goto LABEL_68;
    if ( *(_QWORD *)(v48 + 624) )
    {
      if ( *(_BYTE *)(v48 + 632) )
      {
        v49 = WdLogNewEntry5_WdAssertion(v47, v46);
        *(_QWORD *)(v49 + 24) = 4146LL;
        WdLogEvent5_WdAssertion(v49);
        v48 = *(_QWORD *)(a1 + 2680);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)v48, 0, 0) < 0 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v51, v50);
        *(_QWORD *)(v52 + 24) = 4148LL;
        WdLogEvent5_WdAssertion(v52);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2680) + 632LL) = 1;
      v48 = *(_QWORD *)(a1 + 2680);
    }
    if ( !v48 )
    {
LABEL_68:
      v53 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2672) + 384LL);
      if ( v53 )
        DXGDODPRESENT::Flush(v53);
    }
    if ( v34 )
    {
      DXGPROCESS::ReleaseDeviceLockForAllDevices(v33, (struct DXGADAPTER *)a1);
      *((_QWORD *)v33 + 23) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v33 + 176, 0LL);
      KeLeaveCriticalRegion();
    }
    v16 = a2;
    goto LABEL_12;
  }
  if ( (a3 & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 104));
    v10 = (struct _EPROCESS *)PsGetCurrentProcess(v9, v8);
    v13 = DXGGLOBAL::GetGlobal(v12, v11);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v13, *(_QWORD *)(a1 + 224), 0LL, v10);
    v14 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    KeEnterCriticalRegion();
    W32kStub_DCompositionNotifyCompositionTokenPresent();
    if ( bTracingEnabled
      && (qword_1C00AE9B0 & 0x1000000) != 0
      && (qword_1C00AE9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v15, a1, 1);
    }
    v16 = a2;
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, a2);
    if ( bTracingEnabled
      && (qword_1C00AE9B0 & 0x1000000) != 0
      && (qword_1C00AE9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    {
      LODWORD(v54) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v17, a1, v54);
    }
    if ( v14 && *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
    ExReleasePushLockSharedEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
LABEL_11:
    if ( !*(_QWORD *)(a1 + 2680) )
    {
      v18 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2672) + 384LL);
      if ( v18 )
        DXGDODPRESENT::Flush(v18);
    }
LABEL_12:
    *(_DWORD *)(a1 + 176) = v16;
    return;
  }
  KeEnterCriticalRegion();
  W32kStub_DCompositionNotifyCompositionTokenPresent();
  if ( bTracingEnabled
    && (qword_1C00AE9B0 & 0x1000000) != 0
    && (qword_1C00AE9B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v20, a1, 1);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    if ( bTracingEnabled
      && (qword_1C00AE9B0 & 0x1000000) != 0
      && (qword_1C00AE9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    {
      LODWORD(v54) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v23, a1, v54);
    }
    v24 = (struct _EPROCESS *)PsGetCurrentProcess(v22, v21);
    v27 = DXGGLOBAL::GetGlobal(v26, v25);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v27, *(_QWORD *)(a1 + 224), 0LL, v24);
    v16 = a2;
    goto LABEL_11;
  }
  if ( bTracingEnabled
    && (qword_1C00AE9B0 & 0x1000000) != 0
    && (qword_1C00AE9B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
  {
    LODWORD(v54) = 0;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v23, a1, v54);
  }
  W32kStub_DCompositionNotifyCompositionTokenPresent();
  KeLeaveCriticalRegion();
}
