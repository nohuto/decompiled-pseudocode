/*
 * XREFs of IopInitializePlugPlayServices @ 0x140A53280
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     KeInitializeGuardedMutex @ 0x1402F92C0 (KeInitializeGuardedMutex.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     KeInitializeSemaphore @ 0x140361350 (KeInitializeSemaphore.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 *     PnpDiagnosticTrace @ 0x14037BF28 (PnpDiagnosticTrace.c)
 *     PiDmaGuardInitialize @ 0x1403B7498 (PiDmaGuardInitialize.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     IoCreateDevice @ 0x1406C9950 (IoCreateDevice.c)
 *     IopCreateRegistryKeyEx @ 0x14073FF04 (IopCreateRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     _CmSetDeviceRegProp @ 0x1407441D0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14074B564 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PipSetDevNodeUserFlags @ 0x14074C4EC (PipSetDevNodeUserFlags.c)
 *     _CmCreateDevice @ 0x14074CD88 (_CmCreateDevice.c)
 *     PipAllocateDeviceNode @ 0x14074EAA0 (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140752D80 (PnpMapDeviceObjectToDeviceInstance.c)
 *     _CmAddDeviceToContainer @ 0x1407592E4 (_CmAddDeviceToContainer.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x1407A1D10 (CmRegisterSystemHiveLimitCallback.c)
 *     IopPortInitialize @ 0x1407A1D9C (IopPortInitialize.c)
 *     IopMemInitialize @ 0x1407A1E34 (IopMemInitialize.c)
 *     IopDmaInitialize @ 0x1407A1F18 (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x1407A1F90 (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x1407A1FF8 (IopBusNumberInitialize.c)
 *     PipUpdateSetupInProgress @ 0x1407A31D0 (PipUpdateSetupInProgress.c)
 *     PiPnpRtlInit @ 0x1407A3550 (PiPnpRtlInit.c)
 *     IoCreateDriver @ 0x1407A5100 (IoCreateDriver.c)
 *     PnpCopyDeviceInstancePath @ 0x1407A53E4 (PnpCopyDeviceInstancePath.c)
 *     PnpAllocateDeviceInstancePath @ 0x1407A5400 (PnpAllocateDeviceInstancePath.c)
 *     IopOpenRegistryKeyEx @ 0x1407AC850 (IopOpenRegistryKeyEx.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x140882890 (TraceLoggingUnregister_EtwUnregister.c)
 *     IoDeleteDriver @ 0x140893C90 (IoDeleteDriver.c)
 *     PipUpdateSetupInProgressNotify @ 0x14089B9B8 (PipUpdateSetupInProgressNotify.c)
 *     PnpLogEvent @ 0x1408A205C (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x1408A37B0 (PiDcHandleSystemFirmwareUpdate.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     IopInitializeResourceMap @ 0x140A3B34C (IopInitializeResourceMap.c)
 *     PnpDeviceCompletionQueueInitialize @ 0x140A51DD0 (PnpDeviceCompletionQueueInitialize.c)
 *     PiInitFirmwareResources @ 0x140A51E48 (PiInitFirmwareResources.c)
 *     PnpInitializeLegacyBusInformationTable @ 0x140A51E9C (PnpInitializeLegacyBusInformationTable.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140A51EC4 (ArbInitializeOsInaccessibleRange.c)
 *     PipMigratePnpState @ 0x140A52084 (PipMigratePnpState.c)
 *     PiDmInit @ 0x140A52170 (PiDmInit.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140A52260 (IopQueryDeviceResetRegistrySettings.c)
 *     PipHardwareConfigInit @ 0x140A522F4 (PipHardwareConfigInit.c)
 *     PiAuCreateSecurityObjects @ 0x140A526E8 (PiAuCreateSecurityObjects.c)
 *     PiDqInit @ 0x140A52FA0 (PiDqInit.c)
 *     PpDevCfgInit @ 0x140A53024 (PpDevCfgInit.c)
 *     PiUEventInit @ 0x140A53E88 (PiUEventInit.c)
 *     PiDcInit @ 0x140A54024 (PiDcInit.c)
 *     PpInitializeBootDDB @ 0x140A54088 (PpInitializeBootDDB.c)
 *     PiKsrInitialize @ 0x140A541E8 (PiKsrInitialize.c)
 *     PiCslInitialize @ 0x140A54224 (PiCslInitialize.c)
 *     PnpTraceInitialize @ 0x140A542C8 (PnpTraceInitialize.c)
 *     PnpDiagInitialize @ 0x140A54304 (PnpDiagInitialize.c)
 *     PipProcessPendingOperations @ 0x140A54368 (PipProcessPendingOperations.c)
 *     PiSwInit @ 0x140A544A0 (PiSwInit.c)
 *     PiDaInit @ 0x140A54550 (PiDaInit.c)
 *     PnpBusTypeGuidInitialize @ 0x140A5458C (PnpBusTypeGuidInitialize.c)
 *     PnpInitializeNotification @ 0x140A54618 (PnpInitializeNotification.c)
 *     PnpInitializeDeviceEvents @ 0x140A5475C (PnpInitializeDeviceEvents.c)
 *     PnpInitializePnpWatchdogs @ 0x140A54858 (PnpInitializePnpWatchdogs.c)
 *     PiDmaGuardProcessRegistry @ 0x140A548C4 (PiDmaGuardProcessRegistry.c)
 *     PpProfileInit @ 0x140A549E4 (PpProfileInit.c)
 *     PnpInitializeDeviceActions @ 0x140A54A7C (PnpInitializeDeviceActions.c)
 *     PiDeviceDependencyInit @ 0x140A54ADC (PiDeviceDependencyInit.c)
 *     PipResetDevices @ 0x140A54B50 (PipResetDevices.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5DA78 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitDeviceOverrideCache @ 0x140A5DBAC (PipInitDeviceOverrideCache.c)
 *     PiInitCacheGroupInformation @ 0x140A5DE20 (PiInitCacheGroupInformation.c)
 */

__int64 __fastcall IopInitializePlugPlayServices(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // rdi
  __int64 result; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rcx
  int CachedContextBaseKey; // ebx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  HANDLE v17; // rbx
  struct _DEVICE_OBJECT *v18; // rsi
  PDEVICE_OBJECT v19; // rcx
  ULONGLONG v20; // rax
  __int64 v21; // rcx
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v25; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  PVOID v27; // [rsp+78h] [rbp-90h] BYREF
  void *v28; // [rsp+80h] [rbp-88h] BYREF
  PVOID v29; // [rsp+88h] [rbp-80h] BYREF
  PVOID v30; // [rsp+90h] [rbp-78h] BYREF
  PVOID v31; // [rsp+98h] [rbp-70h] BYREF
  HANDLE v32; // [rsp+A0h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A8h] [rbp-60h] BYREF
  ULONG Disposition; // [rsp+B0h] [rbp-58h] BYREF
  int v35; // [rsp+B4h] [rbp-54h] BYREF
  UNICODE_STRING v36; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING GuidString; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING v38; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F8h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+138h] [rbp+30h] BYREF
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+158h] [rbp+50h]
  __int64 v44; // [rsp+160h] [rbp+58h]
  HANDLE *v45; // [rsp+168h] [rbp+60h]
  __int64 v46; // [rsp+170h] [rbp+68h]
  PVOID *v47; // [rsp+178h] [rbp+70h]
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
  UNICODE_STRING *v59; // [rsp+1D8h] [rbp+D0h]
  __int64 v60; // [rsp+1E0h] [rbp+D8h]

  v32 = 0LL;
  Handle = 0LL;
  v28 = 0LL;
  *(_DWORD *)(&v25.MaximumLength + 1) = 0;
  DeviceObject = 0LL;
  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v27 = 0LL;
  P = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)(&v36.MaximumLength + 1) = 0;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  LOBYTE(v22) = 0;
  DestinationString = 0LL;
  v38 = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return (unsigned int)-1073741584;
    result = PnpDiagInitialize();
    if ( (int)result >= 0 )
    {
      PnpTraceInitialize();
      result = PiDcInit(1LL);
      if ( (int)result >= 0 )
      {
        result = PiUEventInit(1LL);
        if ( (int)result >= 0 )
        {
          v20 = *(_QWORD *)(a1 + 240) + 136LL;
          *(_QWORD *)&UserData.Size = 80LL;
          UserData.Ptr = v20;
          PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 1u, &UserData);
          if ( (unsigned int)dword_140C02E70 > 4 && tlgKeywordOn((__int64)&dword_140C02E70, 0x400000000000LL) )
          {
            v21 = *(_QWORD *)(a1 + 240);
            DeviceObject = *(PDEVICE_OBJECT *)(v21 + 136);
            p_DeviceObject = &DeviceObject;
            v44 = 8LL;
            v32 = *(HANDLE *)(v21 + 144);
            v45 = &v32;
            v46 = 8LL;
            v31 = *(PVOID *)(v21 + 152);
            v47 = &v31;
            v48 = 8LL;
            v30 = *(PVOID *)(v21 + 160);
            v49 = &v30;
            v50 = 8LL;
            v29 = *(PVOID *)(v21 + 184);
            v51 = &v29;
            v52 = 8LL;
            v28 = *(void **)(v21 + 192);
            v53 = &v28;
            v54 = 8LL;
            v27 = *(PVOID *)(v21 + 168);
            v55 = &v27;
            v56 = 8LL;
            P = *(PVOID *)(v21 + 176);
            p_P = &P;
            v58 = 8LL;
            *(_QWORD *)&v36.Length = *(_QWORD *)(v21 + 2496);
            v59 = &v36;
            v60 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C02E70,
              (unsigned __int8 *)byte_1400250FF,
              0LL,
              0LL,
              0xBu,
              &v42);
          }
          TraceLoggingUnregister_EtwUnregister((__int64)&dword_140C02E70);
          result = PiPnpRtlInit(1u);
          if ( (int)result >= 0 )
          {
            result = PiCslInitialize();
            if ( (int)result >= 0 )
            {
              CachedContextBaseKey = PiDmaGuardInitialize(1);
              if ( CachedContextBaseKey >= 0 )
              {
                result = PiKsrInitialize();
                if ( (int)result < 0 )
                  return result;
                PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 10, 0, 0LL, 0LL, 0LL, 0LL);
                KeInitializeEvent(&PnpShutdownEvent, NotificationEvent, 0);
                if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
                  PpInitializeBootDDB(a1, 1LL);
                return 0;
              }
              return (unsigned int)CachedContextBaseKey;
            }
          }
        }
      }
    }
  }
  else
  {
    PnPInitialized = 0;
    PnpSystemHiveLimits = 80;
    dword_140C50D5C = 90;
    CmRegisterSystemHiveLimitCallback(a1, a2, (__int64)&PnpSystemHiveLimits);
    PnpSystemHiveTooLarge = 0;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"OldSystemBiosDate", 0, &v27) >= 0 )
      {
        v3 = (unsigned int *)v27;
        if ( v27 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v4 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v3 + v3[2]));
              RtlInitUnicodeString(&v38, (PCWSTR)((char *)v4 + v4[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v38, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v4, 0);
            }
          }
          ExFreePoolWithTag(v3, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    result = PnpDeviceCompletionQueueInitialize();
    if ( (int)result >= 0 )
    {
      PiInitFirmwareResources(a1);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
        PpInitializeBootDDB(a1, 0LL);
      PipInitDeviceOverrideCache();
      KeInitializeEvent(&PnpSystemDeviceEnumerationComplete, NotificationEvent, 0);
      result = PiInitCacheGroupInformation();
      if ( (int)result >= 0 )
      {
        KeInitializeSemaphore(&PpRegistrySemaphore, 1, 1);
        result = PnpInitializeLegacyBusInformationTable();
        if ( (int)result >= 0 )
        {
          IopInitializeResourceMap(a1);
          IopAllocateBootResourcesRoutine = (__int64)&IopReportBootResources;
          IopInitReservedResourceList = 0LL;
          PnpDefaultInterfaceType = 1;
          ArbInitializeOsInaccessibleRange(dword_140C4DF20);
          CachedContextBaseKey = IopPortInitialize(v7, v6);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopMemInitialize(v9, v8);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopDmaInitialize(v12, v11);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopIrqInitialize(v14, v13);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopBusNumberInitialize(v16, v15);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = PiPnpRtlInit(0);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          PipMigratePnpState();
          CachedContextBaseKey = PiDmInit();
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v28);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          v25.Buffer = L"Control\\Pnp";
          *(_DWORD *)&v25.Length = 1572886;
          if ( (int)IopCreateRegistryKeyEx(&Handle, v28, &v25, 0xF003Fu, 0, 0LL) >= 0 )
          {
            if ( IopGetRegistryValue(Handle, L"AsynchronousOptions", 0, &v29) >= 0 )
            {
              if ( *((_DWORD *)v29 + 1) == 4 && *((_DWORD *)v29 + 3) == 4 )
                PnpAsyncOptions = *(_DWORD *)((char *)v29 + *((unsigned int *)v29 + 2));
              ExFreePoolWithTag(v29, 0);
            }
            if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v30) >= 0 )
            {
              if ( *((_DWORD *)v30 + 1) == 4 && *((_DWORD *)v30 + 3) == 4 )
                PnpBootOptions = *(_DWORD *)((char *)v30 + *((unsigned int *)v30 + 2));
              ExFreePoolWithTag(v30, 0);
            }
            if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v31) >= 0 )
            {
              if ( *((_DWORD *)v31 + 1) == 4 && *((_DWORD *)v31 + 3) == 4 )
                PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v31 + *((unsigned int *)v31 + 2));
              ExFreePoolWithTag(v31, 0);
            }
            PiDmaGuardProcessRegistry(Handle);
            IopQueryDeviceResetRegistrySettings(Handle);
            ZwClose(Handle);
          }
          *(_DWORD *)&v25.Length = 4063292;
          v25.Buffer = L"\\Registry\\Machine\\System\\Setup";
          if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v25, 0x20019u) >= 0 )
          {
            PipUpdateSetupInProgress(Handle);
            if ( IopGetRegistryValue(Handle, L"Upgrade", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupUpgradeInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            if ( IopGetRegistryValue(Handle, L"RollbackActive", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupRollbackActiveInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            if ( PnpSetupInProgress || PnpSetupOOBEInProgress )
            {
              qword_140C45790 = (__int64)PipUpdateSetupInProgressCallback;
              qword_140C45798 = (__int64)Handle;
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
          PipCheckSystemFirmwareUpdated(&v22);
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
                                   &v32,
                                   0LL,
                                   0);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          v17 = v32;
          CmSetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)L"HTREE\\ROOT\\0",
            (__int64)v32,
            0x25u,
            1u,
            (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
            0x4Eu,
            0);
          v35 = 0;
          CmSetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)L"HTREE\\ROOT\\0",
            (__int64)v17,
            0xBu,
            4u,
            (__int64)&v35,
            4u,
            0);
          ZwClose(v17);
          qword_140C44C28 = (__int64)&IopPendingEjects;
          IopPendingEjects = (__int64)&IopPendingEjects;
          qword_140C44C38 = (__int64)&IopPendingSurpriseRemovals;
          IopPendingSurpriseRemovals = &IopPendingSurpriseRemovals;
          ExInitializeResourceLite(&IopDeviceTreeLock);
          ExInitializeResourceLite(&IopSurpriseRemoveListLock);
          ExInitializeResourceLite(&PnpDevicePropertyLock);
          ExInitializeResourceLite(&PiEngineLock);
          PnpSpinLock = 0LL;
          KeInitializeGuardedMutex(&PiResourceListLock);
          PnpRebuildPowerRelationsQueueLock.Count = 1;
          PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead.Blink = &PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead;
          PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead.Flink = &PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead;
          PnpRebuildPowerRelationsQueueLock.Owner = 0LL;
          PnpRebuildPowerRelationsQueueLock.Contention = 0;
          LOWORD(PnpRebuildPowerRelationsQueueLock.Event.Header.Lock) = 1;
          PnpRebuildPowerRelationsQueueLock.Event.Header.Size = 6;
          PnpRebuildPowerRelationsQueueLock.Event.Header.SignalState = 0;
          CachedContextBaseKey = PiDeviceDependencyInit();
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = PnpInitializeDeviceActions();
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          PpProfileInit();
          IopWarmEjectPdo = 0LL;
          KeInitializeEvent(&IopWarmEjectLock, SynchronizationEvent, 1u);
          *(_DWORD *)&v25.Length = 2490404;
          v25.Buffer = L"\\Driver\\PnpManager";
          CachedContextBaseKey = IoCreateDriver(&v25, (_DMA_OPERATIONS *)PipPnPDriverEntry);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, &DeviceObject);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          v18 = DeviceObject;
          v19 = DeviceObject;
          DeviceObject->Flags |= 0x1000u;
          CachedContextBaseKey = PipAllocateDeviceNode((__int64)v19, &IopRootDeviceNode);
          if ( !IopRootDeviceNode )
          {
            IoDeleteDevice(v18);
            IoDeleteDriver((PADAPTER_OBJECT)PnpDriverObject);
LABEL_73:
            if ( CachedContextBaseKey >= 0 )
            {
              CachedContextBaseKey = CmAddDeviceToContainer(
                                       *(__int64 *)&PiPnpRtlCtx,
                                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                       (__int64)L"HTREE\\ROOT\\0",
                                       0LL);
              if ( CachedContextBaseKey >= 0 )
              {
                if ( (_BYTE)v22 )
                  PiDcHandleSystemFirmwareUpdate();
                PnpInitializePnpWatchdogs();
                CachedContextBaseKey = PnpInitializeDeviceEvents();
                if ( CachedContextBaseKey >= 0 )
                {
                  PnpInitializeNotification();
                  CachedContextBaseKey = PnpBusTypeGuidInitialize();
                  if ( CachedContextBaseKey >= 0 )
                  {
                    KeInitializeEvent(&PnpReplaceEvent, SynchronizationEvent, 1u);
                    CachedContextBaseKey = PiSwInit();
                    if ( CachedContextBaseKey >= 0 )
                    {
                      CachedContextBaseKey = PiUEventInit(0LL);
                      if ( CachedContextBaseKey >= 0 )
                      {
                        CachedContextBaseKey = PiDaInit();
                        if ( CachedContextBaseKey >= 0 )
                        {
                          CachedContextBaseKey = PiDmaGuardInitialize(0);
                          if ( CachedContextBaseKey >= 0 )
                          {
                            PipProcessPendingOperations();
                            PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 10, 0, 0LL, 0LL, 0LL, 0LL);
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
              PipSetDevNodeState((__int64)IopRootDeviceNode, 776);
              goto LABEL_73;
            }
          }
          return (unsigned int)CachedContextBaseKey;
        }
      }
    }
  }
  return result;
}
