/*
 * XREFs of IopInitializePlugPlayServices @ 0x140B0046C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     PnpDiagnosticTrace @ 0x1402D21B8 (PnpDiagnosticTrace.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     PnpRequestDeviceAction @ 0x1402DCF44 (PnpRequestDeviceAction.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PiDmaGuardInitialize @ 0x1403C09F8 (PiDmaGuardInitialize.c)
 *     PnpGetRegistryDword @ 0x1403D2D2C (PnpGetRegistryDword.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     IopCreateRegistryKeyEx @ 0x14067A8B0 (IopCreateRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     PipAllocateDeviceNode @ 0x1406CFCE0 (PipAllocateDeviceNode.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     PipSetDevNodeUserFlags @ 0x140767220 (PipSetDevNodeUserFlags.c)
 *     _CmCreateDevice @ 0x140768AF8 (_CmCreateDevice.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14076ACE4 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14076C4E0 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     _CmAddDeviceToContainer @ 0x14076C91C (_CmAddDeviceToContainer.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     _CmSetDeviceRegProp @ 0x14076FE20 (_CmSetDeviceRegProp.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     PipUpdateAsyncOptionsCallback @ 0x140811B60 (PipUpdateAsyncOptionsCallback.c)
 *     PiPnpRtlInit @ 0x140825E70 (PiPnpRtlInit.c)
 *     TlgRegisterAggregateProvider @ 0x140827FE8 (TlgRegisterAggregateProvider.c)
 *     IopOpenRegistryKeyEx @ 0x14082EF44 (IopOpenRegistryKeyEx.c)
 *     IopPortInitialize @ 0x140838F24 (IopPortInitialize.c)
 *     IopMemInitialize @ 0x140838FBC (IopMemInitialize.c)
 *     IopDmaInitialize @ 0x1408390A0 (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x140839118 (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x140839180 (IopBusNumberInitialize.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     PnpAllocateDeviceInstancePath @ 0x14085C93C (PnpAllocateDeviceInstancePath.c)
 *     PipUpdateSetupInProgress @ 0x140862728 (PipUpdateSetupInProgress.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x140863DD8 (CmRegisterSystemHiveLimitCallback.c)
 *     PnpCopyDeviceInstancePath @ 0x140865354 (PnpCopyDeviceInstancePath.c)
 *     IoDeleteDriver @ 0x140936380 (IoDeleteDriver.c)
 *     PipUpdateSetupInProgressNotify @ 0x140940408 (PipUpdateSetupInProgressNotify.c)
 *     PnpLogEvent @ 0x140947068 (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x140949450 (PiDcHandleSystemFirmwareUpdate.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     IopInitializeResourceMap @ 0x140AF7DC8 (IopInitializeResourceMap.c)
 *     PiDcInit @ 0x140B010DC (PiDcInit.c)
 *     PiCslInitialize @ 0x140B01758 (PiCslInitialize.c)
 *     PipMigratePnpState @ 0x140B0EC60 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140B0ED44 (PpDevCfgInit.c)
 *     PipProcessPendingServices @ 0x140B0F0F4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B0F180 (PipProcessPendingOsExtensionResources.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B10490 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevices @ 0x140B105C4 (PipResetDevices.c)
 *     PipInitDeviceOverrideCache @ 0x140B107D8 (PipInitDeviceOverrideCache.c)
 *     PiInitCacheGroupInformation @ 0x140B10A4C (PiInitCacheGroupInformation.c)
 *     PiDeviceDependencyInit @ 0x140B1ADD8 (PiDeviceDependencyInit.c)
 *     PiDmInit @ 0x140B1B1D0 (PiDmInit.c)
 *     PiUEventInit @ 0x140B1BA48 (PiUEventInit.c)
 *     PiAuCreateSecurityObjects @ 0x140B22134 (PiAuCreateSecurityObjects.c)
 *     PnpInitializePnpWatchdogs @ 0x140B23270 (PnpInitializePnpWatchdogs.c)
 *     PiSwInit @ 0x140B235FC (PiSwInit.c)
 *     PipHardwareConfigInit @ 0x140B28AB0 (PipHardwareConfigInit.c)
 *     PnpInitializeNotification @ 0x140B2A970 (PnpInitializeNotification.c)
 *     PiDqInit @ 0x140B2B1C0 (PiDqInit.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140B2D294 (ArbInitializeOsInaccessibleRange.c)
 *     PpInitializeBootDDB @ 0x140B2E474 (PpInitializeBootDDB.c)
 *     PnpInitializeDeviceEvents @ 0x140B2EF10 (PnpInitializeDeviceEvents.c)
 *     PnpDiagInitialize @ 0x140B2F500 (PnpDiagInitialize.c)
 *     PpProfileInit @ 0x140B30110 (PpProfileInit.c)
 *     PnpBusTypeGuidInitialize @ 0x140B30A8C (PnpBusTypeGuidInitialize.c)
 *     PiInitFirmwareResources @ 0x140B30F30 (PiInitFirmwareResources.c)
 *     PiKsrNotifyInitialize @ 0x140B509E0 (PiKsrNotifyInitialize.c)
 */

__int64 __fastcall IopInitializePlugPlayServices(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rcx
  int CachedContextBaseKey; // ebx
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  void *v16; // rbx
  struct _DEVICE_OBJECT *v17; // rsi
  PDEVICE_OBJECT v18; // rcx
  ULONGLONG v19; // rax
  __int64 v20; // rdx
  REGHANDLE v21; // rcx
  unsigned int *v22; // rbx
  unsigned int *v23; // rdi
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  PVOID v30; // [rsp+80h] [rbp-88h] BYREF
  void *v31; // [rsp+88h] [rbp-80h] BYREF
  PVOID v32; // [rsp+90h] [rbp-78h] BYREF
  PVOID v33; // [rsp+98h] [rbp-70h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING v36; // [rsp+B8h] [rbp-50h] BYREF
  ULONG Disposition; // [rsp+C8h] [rbp-40h] BYREF
  int v38; // [rsp+CCh] [rbp-3Ch] BYREF
  UNICODE_STRING GuidString; // [rsp+D0h] [rbp-38h] BYREF
  UNICODE_STRING v40; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-18h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+148h] [rbp+40h] BYREF
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+168h] [rbp+60h]
  __int64 v46; // [rsp+170h] [rbp+68h]
  __int128 *v47; // [rsp+178h] [rbp+70h]
  __int64 v48; // [rsp+180h] [rbp+78h]
  PVOID *v49; // [rsp+188h] [rbp+80h]
  __int64 v50; // [rsp+190h] [rbp+88h]
  PVOID *v51; // [rsp+198h] [rbp+90h]
  __int64 v52; // [rsp+1A0h] [rbp+98h]
  void **v53; // [rsp+1A8h] [rbp+A0h]
  __int64 v54; // [rsp+1B0h] [rbp+A8h]
  PVOID *v55; // [rsp+1B8h] [rbp+B0h]
  __int64 v56; // [rsp+1C0h] [rbp+B8h]
  PVOID *p_P; // [rsp+1C8h] [rbp+C0h]
  __int64 v58; // [rsp+1D0h] [rbp+C8h]
  __int64 *v59; // [rsp+1D8h] [rbp+D0h]
  __int64 v60; // [rsp+1E0h] [rbp+D8h]
  UNICODE_STRING *v61; // [rsp+1E8h] [rbp+E0h]
  __int64 v62; // [rsp+1F0h] [rbp+E8h]

  *(_QWORD *)&v34 = 0LL;
  Handle = 0LL;
  v31 = 0LL;
  *(_DWORD *)(&v27.MaximumLength + 1) = 0;
  DeviceObject = 0LL;
  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v30 = 0LL;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)(&v36.MaximumLength + 1) = 0;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  LOBYTE(v24) = 0;
  DestinationString = 0LL;
  v40 = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return (unsigned int)-1073741584;
    result = PnpDiagInitialize();
    if ( (int)result >= 0 )
    {
      TlgRegisterAggregateProvider(&dword_140C06550);
      TlgRegisterAggregateProvider(&dword_140C039C8);
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C03990, 0LL, 0LL);
      result = PiDcInit(1LL);
      if ( (int)result >= 0 )
      {
        v19 = *(_QWORD *)(a1 + 240) + 136LL;
        *(_QWORD *)&UserData.Size = 80LL;
        UserData.Ptr = v19;
        PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 1u, &UserData);
        if ( (unsigned int)dword_140C045E0 > 4 && tlgKeywordOn((__int64)&dword_140C045E0, 0x400000000000LL) )
        {
          v20 = *(_QWORD *)(a1 + 240);
          DeviceObject = *(PDEVICE_OBJECT *)(v20 + 136);
          p_DeviceObject = &DeviceObject;
          v46 = 8LL;
          *(_QWORD *)&v34 = *(_QWORD *)(v20 + 144);
          v47 = &v34;
          v48 = 8LL;
          v33 = *(PVOID *)(v20 + 152);
          v49 = &v33;
          v50 = 8LL;
          v32 = *(PVOID *)(v20 + 160);
          v51 = &v32;
          v52 = 8LL;
          v31 = *(void **)(v20 + 184);
          v53 = &v31;
          v54 = 8LL;
          v30 = *(PVOID *)(v20 + 192);
          v55 = &v30;
          v56 = 8LL;
          P = *(PVOID *)(v20 + 168);
          p_P = &P;
          v58 = 8LL;
          v28 = *(_QWORD *)(v20 + 176);
          v59 = &v28;
          v60 = 8LL;
          *(_QWORD *)&v36.Length = *(_QWORD *)(v20 + 2496);
          v61 = &v36;
          v62 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C045E0,
            (unsigned __int8 *)&dword_14002BB04,
            0LL,
            0LL,
            0xBu,
            &v44);
        }
        v21 = qword_140C04600;
        qword_140C04600 = 0LL;
        dword_140C045E0 = 0;
        EtwUnregister(v21);
        result = PiPnpRtlInit(1u);
        if ( (int)result >= 0 )
        {
          result = PiCslInitialize();
          if ( (int)result >= 0 )
          {
            CachedContextBaseKey = PiDmaGuardInitialize(1);
            if ( CachedContextBaseKey < 0 )
              return (unsigned int)CachedContextBaseKey;
            *(_QWORD *)&v36.Length = 0LL;
            if ( (int)KsrGetFirmwareInformation(&v36) >= 0 )
            {
              PnpKsrEnabled = 1;
              result = PiKsrNotifyInitialize();
              if ( (int)result < 0 )
                return result;
            }
            else
            {
              PnpKsrEnabled = 0;
            }
            PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 10, 0, 0LL, 0LL, 0LL, 0LL);
            LOWORD(PnpShutdownEvent.Header.Lock) = 0;
            PnpShutdownEvent.Header.WaitListHead.Blink = &PnpShutdownEvent.Header.WaitListHead;
            CachedContextBaseKey = 0;
            PnpShutdownEvent.Header.WaitListHead.Flink = &PnpShutdownEvent.Header.WaitListHead;
            PnpShutdownEvent.Header.Size = 6;
            PnpShutdownEvent.Header.SignalState = 0;
            return (unsigned int)CachedContextBaseKey;
          }
        }
      }
    }
  }
  else
  {
    PnPInitialized = 0;
    PnpSystemHiveLimits = 80;
    dword_140C54EB4 = 90;
    CmRegisterSystemHiveLimitCallback(a1, a2, (__int64)&PnpSystemHiveLimits);
    PnpSystemHiveTooLarge = 0;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"OldSystemBiosDate", 0, &v30) >= 0 )
      {
        v22 = (unsigned int *)v30;
        if ( v30 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v23 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v22 + v22[2]));
              RtlInitUnicodeString(&v40, (PCWSTR)((char *)v23 + v23[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v40, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v23, 0);
            }
          }
          ExFreePoolWithTag(v22, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_140C46008 = 0LL;
    qword_140C45FC8 = (__int64)&PnpDeviceCompletionQueue;
    PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
    dword_140C45FD0 = 0;
    qword_140C45FF8 = (__int64)&qword_140C45FF0;
    qword_140C45FF0 = (__int64)&qword_140C45FF0;
    qword_140C45FE0 = (__int64)&qword_140C45FD8;
    qword_140C45FD8 = (__int64)&qword_140C45FD8;
    byte_140C45FE8 = 5;
    byte_140C45FEA = 8;
    dword_140C45FEC = 0;
    dword_140C46000 = 0x7FFFFFFF;
    PiInitFirmwareResources(a1);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
      PpInitializeBootDDB(a1, 0LL);
    PipInitDeviceOverrideCache();
    LOWORD(PnpSystemDeviceEnumerationComplete.Header.Lock) = 0;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Blink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Flink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.Size = 6;
    PnpSystemDeviceEnumerationComplete.Header.SignalState = 0;
    result = PiInitCacheGroupInformation();
    if ( (int)result >= 0 )
    {
      PpRegistrySemaphore.Header.Type = 5;
      PpRegistrySemaphore.Header.WaitListHead.Blink = &PpRegistrySemaphore.Header.WaitListHead;
      PpRegistrySemaphore.Header.WaitListHead.Flink = &PpRegistrySemaphore.Header.WaitListHead;
      v4 = &IopLegacyBusInformationTable;
      PpRegistrySemaphore.Header.Size = 8;
      PpRegistrySemaphore.Header.SignalState = 1;
      PpRegistrySemaphore.Limit = 1;
      do
      {
        v4[1] = v4;
        *v4 = v4;
        v4 += 2;
      }
      while ( (__int64)v4 < (__int64)&PiDDBLock );
      IopInitializeResourceMap(a1);
      IopAllocateBootResourcesRoutine = (__int64)IopReportBootResources;
      IopInitReservedResourceList = 0LL;
      PnpDefaultInterfaceType = 1;
      ArbInitializeOsInaccessibleRange((unsigned int)dword_140C50720);
      CachedContextBaseKey = IopPortInitialize(v6, v5);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = IopMemInitialize(v8, v7);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = IopDmaInitialize(v11, v10);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = IopIrqInitialize(v13, v12);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = IopBusNumberInitialize(v15, v14);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = PiPnpRtlInit(0);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      PipMigratePnpState();
      CachedContextBaseKey = PiDmInit();
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v31);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      v27.Buffer = L"Control\\Pnp";
      *(_DWORD *)&v27.Length = 1572886;
      if ( (int)IopCreateRegistryKeyEx(&Handle, v31, &v27, 0xF003Fu, 0, 0LL) >= 0 )
      {
        if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v32) >= 0 )
        {
          if ( *((_DWORD *)v32 + 1) == 4 && *((_DWORD *)v32 + 3) == 4 )
            PnpBootOptions = *(_DWORD *)((char *)v32 + *((unsigned int *)v32 + 2));
          ExFreePoolWithTag(v32, 0);
        }
        if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v33) >= 0 )
        {
          if ( *((_DWORD *)v33 + 1) == 4 && *((_DWORD *)v33 + 3) == 4 )
            PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v33 + *((unsigned int *)v33 + 2));
          ExFreePoolWithTag(v33, 0);
        }
        LODWORD(v28) = 0;
        if ( (int)PnpGetRegistryDword(Handle, (__int64)L"DmaGuardTestMode", &v28) >= 0 && (_DWORD)v28 == 1 )
          PipDmaGuardTestMode = 1;
        qword_140C46BD0 = (__int64)PipUpdateAsyncOptionsCallback;
        qword_140C46BD8 = (__int64)Handle;
        *(_QWORD *)PnpAsyncOptionsWorkItem = 0LL;
        PipUpdateAsyncOptionsCallback(Handle);
        Handle = 0LL;
      }
      *(_DWORD *)&v27.Length = 4063292;
      v27.Buffer = L"\\Registry\\Machine\\System\\Setup";
      if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v27, 0x20019u) >= 0 )
      {
        PipUpdateSetupInProgress(Handle);
        if ( IopGetRegistryValue(Handle, L"Upgrade", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupUpgradeInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"RollbackActive", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupRollbackActiveInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( PnpSetupInProgress || PnpSetupOOBEInProgress )
        {
          qword_140C46B90 = (__int64)PipUpdateSetupInProgressCallback;
          qword_140C46B98 = (__int64)Handle;
          *(_QWORD *)PnpSetupWorkItem = 0LL;
          PipUpdateSetupInProgressNotify(Handle, 0);
        }
        else
        {
          ZwClose(Handle);
        }
        Handle = 0LL;
      }
      CachedContextBaseKey = PipHardwareConfigInit((GUID *)(*(_QWORD *)(a1 + 240) + 2568LL));
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      PipCheckSystemFirmwareUpdated(&v24);
      CachedContextBaseKey = PiDcInit(0LL);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = PiAuCreateSecurityObjects();
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = PiDqInit();
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = PpDevCfgInit();
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      PipResetDevices();
      CachedContextBaseKey = CmCreateDevice(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)L"HTREE\\ROOT\\0",
                               983103,
                               (HANDLE *)&v34,
                               0LL,
                               0);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      v16 = (void *)v34;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        v34,
        0x25u,
        1u,
        (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
        0x4Eu,
        0);
      v38 = 0;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        (__int64)v16,
        0xBu,
        4u,
        (__int64)&v38,
        4u,
        0);
      ZwClose(v16);
      qword_140C46148 = (__int64)&IopPendingEjects;
      IopPendingEjects = (__int64)&IopPendingEjects;
      qword_140C46138 = (__int64)&IopPendingSurpriseRemovals;
      IopPendingSurpriseRemovals = &IopPendingSurpriseRemovals;
      ExInitializeResourceLite(&IopDeviceTreeLock);
      ExInitializeResourceLite(&IopSurpriseRemoveListLock);
      ExInitializeResourceLite(&PiEngineLock);
      PnpSpinLock = 0LL;
      PiResourceListLock.Event.Header.WaitListHead.Blink = &PiResourceListLock.Event.Header.WaitListHead;
      PiResourceListLock.Event.Header.WaitListHead.Flink = &PiResourceListLock.Event.Header.WaitListHead;
      PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead.Blink = &PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead;
      PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead.Flink = &PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead;
      PiResourceListLock.Count = 1;
      PiResourceListLock.Owner = 0LL;
      PiResourceListLock.Contention = 0;
      LOWORD(PiResourceListLock.Event.Header.Lock) = 1;
      PiResourceListLock.Event.Header.Size = 6;
      PiResourceListLock.Event.Header.SignalState = 0;
      PnpRebuildPowerRelationsQueueLock.Count = 1;
      PnpRebuildPowerRelationsQueueLock.Owner = 0LL;
      PnpRebuildPowerRelationsQueueLock.Contention = 0;
      LOWORD(PnpRebuildPowerRelationsQueueLock.Event.Header.Lock) = 1;
      PnpRebuildPowerRelationsQueueLock.Event.Header.Size = 6;
      PnpRebuildPowerRelationsQueueLock.Event.Header.SignalState = 0;
      CachedContextBaseKey = PiDeviceDependencyInit();
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
      PnpEnumerationInProgress = 0;
      PnpEnumerationLock.Header.WaitListHead.Blink = &PnpEnumerationLock.Header.WaitListHead;
      PnpEnumerationLock.Header.WaitListHead.Flink = &PnpEnumerationLock.Header.WaitListHead;
      qword_140C44A48 = (__int64)&PnpEnumerationRequestList;
      PnpEnumerationRequestList = (__int64)&PnpEnumerationRequestList;
      LOWORD(PnpEnumerationLock.Header.Lock) = 0;
      PnpEnumerationLock.Header.Size = 6;
      PnpEnumerationLock.Header.SignalState = 1;
      PpProfileInit();
      IopWarmEjectPdo = 0LL;
      IopWarmEjectLock.Header.WaitListHead.Blink = &IopWarmEjectLock.Header.WaitListHead;
      IopWarmEjectLock.Header.WaitListHead.Flink = &IopWarmEjectLock.Header.WaitListHead;
      LOWORD(IopWarmEjectLock.Header.Lock) = 1;
      v27.Buffer = L"\\Driver\\PnpManager";
      IopWarmEjectLock.Header.Size = 6;
      IopWarmEjectLock.Header.SignalState = 1;
      *(_DWORD *)&v27.Length = 2490404;
      CachedContextBaseKey = IoCreateDriver(&v27, (__int64 (__fastcall *)(void **, _QWORD))PipPnPDriverEntry);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, &DeviceObject);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      v17 = DeviceObject;
      v18 = DeviceObject;
      DeviceObject->Flags |= 0x1000u;
      CachedContextBaseKey = PipAllocateDeviceNode((__int64)v18, (__int64)&IopRootDeviceNode);
      if ( IopRootDeviceNode )
      {
        PipSetDevNodeFlags((__int64)IopRootDeviceNode, 305);
        PipSetDevNodeUserFlags((__int64)IopRootDeviceNode, 10);
        *((_DWORD *)IopRootDeviceNode + 165) = -2;
        CachedContextBaseKey = PnpAllocateDeviceInstancePath((__int64)IopRootDeviceNode, 0x1Au);
        if ( CachedContextBaseKey >= 0 )
        {
          *(_DWORD *)&v36.Length = 1703960;
          v36.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
          PnpCopyDeviceInstancePath((__int64)IopRootDeviceNode, &v36);
          CachedContextBaseKey = PnpMapDeviceObjectToDeviceInstance(
                                   *((_QWORD *)IopRootDeviceNode + 4),
                                   (__int64)IopRootDeviceNode + 40);
          if ( CachedContextBaseKey >= 0 )
          {
            *(_DWORD *)&GuidString.Length = 5111884;
            GuidString.Buffer = L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
            RtlGUIDFromString(&GuidString, (GUID *)((char *)IopRootDeviceNode + 664));
            PnpQueryAndSaveDeviceNodeCapabilities((__int64)IopRootDeviceNode);
            PipSetDevNodeState((__int64)IopRootDeviceNode, 778);
            goto LABEL_43;
          }
        }
      }
      else
      {
        IoDeleteDevice(v17);
        IoDeleteDriver((unsigned __int16 *)PnpDriverObject);
        if ( CachedContextBaseKey >= 0 )
        {
LABEL_43:
          CachedContextBaseKey = CmAddDeviceToContainer(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                   (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                   (__int64)L"HTREE\\ROOT\\0",
                                   0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( (_BYTE)v24 )
              PiDcHandleSystemFirmwareUpdate();
            PnpInitializePnpWatchdogs();
            CachedContextBaseKey = PnpInitializeDeviceEvents();
            if ( CachedContextBaseKey >= 0 )
            {
              PnpInitializeNotification();
              CachedContextBaseKey = PnpBusTypeGuidInitialize();
              if ( CachedContextBaseKey >= 0 )
              {
                LOWORD(PnpReplaceEvent.Header.Lock) = 1;
                PnpReplaceEvent.Header.WaitListHead.Blink = &PnpReplaceEvent.Header.WaitListHead;
                PnpReplaceEvent.Header.WaitListHead.Flink = &PnpReplaceEvent.Header.WaitListHead;
                PnpReplaceEvent.Header.Size = 6;
                PnpReplaceEvent.Header.SignalState = 1;
                CachedContextBaseKey = PiSwInit();
                if ( CachedContextBaseKey >= 0 )
                {
                  CachedContextBaseKey = PiUEventInit(0LL);
                  if ( CachedContextBaseKey >= 0 )
                  {
                    *(_QWORD *)&v34 = 2359330LL;
                    *((_QWORD *)&v34 + 1) = L"\\Driver\\DeviceApi";
                    CachedContextBaseKey = IoCreateDriver(
                                             &v34,
                                             (__int64 (__fastcall *)(void **, _QWORD))PiDaDriverEntry);
                    if ( CachedContextBaseKey >= 0 )
                    {
                      CachedContextBaseKey = PiDmaGuardInitialize(0);
                      if ( CachedContextBaseKey >= 0 )
                      {
                        if ( (int)PipProcessPendingServices() >= 0 )
                          PipProcessPendingOsExtensionResources();
                        PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 10, 0, 0LL, 0LL, 0LL, 0LL);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return (unsigned int)CachedContextBaseKey;
    }
  }
  return result;
}
