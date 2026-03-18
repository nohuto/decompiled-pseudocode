/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00E7428
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0002644 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C011E424 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C020A3B0 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C020A5B8 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0214E74 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026B8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C00399F4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DpiEnableD3Requests @ 0x1C00E103C (DpiEnableD3Requests.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z @ 0x1C00E73CC (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00E75A4 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     W32kStub_DCompositionNotifyCompositionTokenPresent @ 0x1C00FBEB0 (W32kStub_DCompositionNotifyCompositionTokenPresent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C0138D28 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0161920 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0282C7C (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C0283C30 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C028485C (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _EPROCESS *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGGLOBAL *v11; // rax
  unsigned __int8 v12; // r12
  __int64 v13; // r8
  unsigned int v14; // r13d
  __int64 v15; // r8
  DXGDODPRESENT *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r8
  struct _EPROCESS *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  DXGGLOBAL *v23; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  DXGPROCESS *v27; // r15
  int v28; // r12d
  __int64 v29; // rax
  __int64 v30; // rax
  struct _EPROCESS *CurrentProcess; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  DXGGLOBAL *Global; // rax
  unsigned __int8 v35; // r13
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  DXGDODPRESENT *v45; // rcx
  __int64 v46; // [rsp+20h] [rbp-38h]

  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    v17 = WdLogNewEntry5_WdCriticalError(v7, v6);
    *(_QWORD *)(v17 + 24) = 275LL;
    *(_QWORD *)(v17 + 32) = 4LL;
    *(_QWORD *)(v17 + 40) = a1;
    *(_OWORD *)(v17 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( a2 == 3 )
  {
    KeEnterCriticalRegion();
    Current = DXGPROCESS::GetCurrent();
    v27 = Current;
    v28 = a3 & 2;
    if ( v28 )
    {
      if ( !Current )
      {
        v29 = WdLogNewEntry5_WdAssertion(v26, v25);
        *(_QWORD *)(v29 + 24) = 4095LL;
        WdLogEvent5_WdAssertion(v29);
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v27 + 176, 0LL);
      *((_QWORD *)v27 + 23) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v27, (struct DXGADAPTER *)a1);
      v30 = *(_QWORD *)(a1 + 2704);
      if ( v30 && *(_QWORD *)(v30 + 624) )
        DXGPROCESS::FlushAllDevice(v27, (const struct DXGADAPTER *)a1);
    }
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 104));
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
    Global = DXGGLOBAL::GetGlobal(v33, v32);
    DXGGLOBAL::StartCoreDripsBlockerTracking(Global, *(_QWORD *)(a1 + 224), 0LL, CurrentProcess);
    v35 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    W32kStub_DCompositionNotifyCompositionTokenPresent();
    if ( bTracingEnabled
      && (qword_1C00AF9B0 & 0x1000000) != 0
      && (qword_1C00AF9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v36, a1, 1);
    }
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, 3LL);
    if ( bTracingEnabled
      && (qword_1C00AF9B0 & 0x1000000) != 0
      && (qword_1C00AF9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      LODWORD(v46) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v37, a1, v46);
    }
    if ( v35 && *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
    ExReleasePushLockSharedEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
    v40 = *(_QWORD *)(a1 + 2704);
    if ( !v40 )
      goto LABEL_68;
    if ( *(_QWORD *)(v40 + 624) )
    {
      if ( *(_BYTE *)(v40 + 632) )
      {
        v41 = WdLogNewEntry5_WdAssertion(v39, v38);
        *(_QWORD *)(v41 + 24) = 4146LL;
        WdLogEvent5_WdAssertion(v41);
        v40 = *(_QWORD *)(a1 + 2704);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)v40, 0, 0) < 0 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v43, v42);
        *(_QWORD *)(v44 + 24) = 4148LL;
        WdLogEvent5_WdAssertion(v44);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2704) + 632LL) = 1;
      v40 = *(_QWORD *)(a1 + 2704);
    }
    if ( !v40 )
    {
LABEL_68:
      v45 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2696) + 384LL);
      if ( v45 )
        DXGDODPRESENT::Flush(v45);
    }
    if ( v28 )
    {
      DXGPROCESS::ReleaseDeviceLockForAllDevices(v27, (struct DXGADAPTER *)a1);
      *((_QWORD *)v27 + 23) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v27 + 176, 0LL);
      KeLeaveCriticalRegion();
    }
    v14 = a2;
    goto LABEL_12;
  }
  if ( (a3 & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 104));
    v8 = (struct _EPROCESS *)PsGetCurrentProcess();
    v11 = DXGGLOBAL::GetGlobal(v10, v9);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v11, *(_QWORD *)(a1 + 224), 0LL, v8);
    v12 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    KeEnterCriticalRegion();
    W32kStub_DCompositionNotifyCompositionTokenPresent();
    if ( bTracingEnabled
      && (qword_1C00AF9B0 & 0x1000000) != 0
      && (qword_1C00AF9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v13, a1, 1);
    }
    v14 = a2;
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, a2);
    if ( bTracingEnabled
      && (qword_1C00AF9B0 & 0x1000000) != 0
      && (qword_1C00AF9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      LODWORD(v46) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v15, a1, v46);
    }
    if ( v12 && *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
    ExReleasePushLockSharedEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
LABEL_11:
    if ( !*(_QWORD *)(a1 + 2704) )
    {
      v16 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2696) + 384LL);
      if ( v16 )
        DXGDODPRESENT::Flush(v16);
    }
LABEL_12:
    *(_DWORD *)(a1 + 176) = v14;
    return;
  }
  KeEnterCriticalRegion();
  W32kStub_DCompositionNotifyCompositionTokenPresent();
  if ( bTracingEnabled
    && (qword_1C00AF9B0 & 0x1000000) != 0
    && (qword_1C00AF9B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v18, a1, 1);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    if ( bTracingEnabled
      && (qword_1C00AF9B0 & 0x1000000) != 0
      && (qword_1C00AF9B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      LODWORD(v46) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v19, a1, v46);
    }
    v20 = (struct _EPROCESS *)PsGetCurrentProcess();
    v23 = DXGGLOBAL::GetGlobal(v22, v21);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v23, *(_QWORD *)(a1 + 224), 0LL, v20);
    v14 = a2;
    goto LABEL_11;
  }
  if ( bTracingEnabled
    && (qword_1C00AF9B0 & 0x1000000) != 0
    && (qword_1C00AF9B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    LODWORD(v46) = 0;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v19, a1, v46);
  }
  W32kStub_DCompositionNotifyCompositionTokenPresent();
  KeLeaveCriticalRegion();
}
