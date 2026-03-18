/*
 * XREFs of IopInitializePlugPlayServices @ 0x140A505F8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 *     KeInitializeGuardedMutex @ 0x140273520 (KeInitializeGuardedMutex.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     KeInitializeSemaphore @ 0x1402F9530 (KeInitializeSemaphore.c)
 *     PipSetDevNodeState @ 0x14036B438 (PipSetDevNodeState.c)
 *     PnpRequestDeviceAction @ 0x14036DAE4 (PnpRequestDeviceAction.c)
 *     PnpDiagnosticTrace @ 0x14037A540 (PnpDiagnosticTrace.c)
 *     PiDmaGuardInitialize @ 0x1403B4328 (PiDmaGuardInitialize.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F3960 (ZwCreateKey.c)
 *     RtlGUIDFromString @ 0x1405DD3D0 (RtlGUIDFromString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405E13D4 (_PnpCtxGetCachedContextBaseKey.c)
 *     IoCreateDevice @ 0x140634290 (IoCreateDevice.c)
 *     _CmSetDeviceRegProp @ 0x1407244E0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x140725AEC (PipSetDevNodeFlags.c)
 *     IopGetRegistryValue @ 0x140728854 (IopGetRegistryValue.c)
 *     IopCreateRegistryKeyEx @ 0x14072A500 (IopCreateRegistryKeyEx.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14072C13C (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     _CmCreateDevice @ 0x14073387C (_CmCreateDevice.c)
 *     PipAllocateDeviceNode @ 0x140738E14 (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14073D0F0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     _CmAddDeviceToContainer @ 0x140743774 (_CmAddDeviceToContainer.c)
 *     PipSetDevNodeUserFlags @ 0x14075F5CC (PipSetDevNodeUserFlags.c)
 *     IopOpenRegistryKeyEx @ 0x14078C2D0 (IopOpenRegistryKeyEx.c)
 *     PipUpdateSetupInProgress @ 0x14078C370 (PipUpdateSetupInProgress.c)
 *     PiPnpRtlInit @ 0x14078C6F0 (PiPnpRtlInit.c)
 *     IoCreateDriver @ 0x14078E2A0 (IoCreateDriver.c)
 *     PnpCopyDeviceInstancePath @ 0x14078E584 (PnpCopyDeviceInstancePath.c)
 *     PnpAllocateDeviceInstancePath @ 0x14078E5A0 (PnpAllocateDeviceInstancePath.c)
 *     IopPortInitialize @ 0x1407A8DBC (IopPortInitialize.c)
 *     IopMemInitialize @ 0x1407A8E54 (IopMemInitialize.c)
 *     IopDmaInitialize @ 0x1407A8F38 (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x1407A8FB0 (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x1407A9018 (IopBusNumberInitialize.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x1407C1408 (CmRegisterSystemHiveLimitCallback.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x14087F644 (TraceLoggingUnregister_EtwUnregister.c)
 *     IoDeleteDriver @ 0x140890A70 (IoDeleteDriver.c)
 *     PipUpdateSetupInProgressNotify @ 0x140898758 (PipUpdateSetupInProgressNotify.c)
 *     PnpLogEvent @ 0x14089EDFC (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x1408A0550 (PiDcHandleSystemFirmwareUpdate.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     IopInitializeResourceMap @ 0x140A367C0 (IopInitializeResourceMap.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A4CF70 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitDeviceOverrideCache @ 0x140A4D0A4 (PipInitDeviceOverrideCache.c)
 *     PiInitCacheGroupInformation @ 0x140A4D318 (PiInitCacheGroupInformation.c)
 *     PipHardwareConfigInit @ 0x140A4F66C (PipHardwareConfigInit.c)
 *     PiAuCreateSecurityObjects @ 0x140A4FA60 (PiAuCreateSecurityObjects.c)
 *     PiDqInit @ 0x140A50318 (PiDqInit.c)
 *     PpDevCfgInit @ 0x140A5039C (PpDevCfgInit.c)
 *     PiUEventInit @ 0x140A51200 (PiUEventInit.c)
 *     PiDcInit @ 0x140A5139C (PiDcInit.c)
 *     PpInitializeBootDDB @ 0x140A51400 (PpInitializeBootDDB.c)
 *     PiKsrInitialize @ 0x140A51560 (PiKsrInitialize.c)
 *     PiCslInitialize @ 0x140A5159C (PiCslInitialize.c)
 *     PnpTraceInitialize @ 0x140A51640 (PnpTraceInitialize.c)
 *     PnpDiagInitialize @ 0x140A5167C (PnpDiagInitialize.c)
 *     PipProcessPendingOperations @ 0x140A516E0 (PipProcessPendingOperations.c)
 *     PiSwInit @ 0x140A51818 (PiSwInit.c)
 *     PiDaInit @ 0x140A518C8 (PiDaInit.c)
 *     PnpBusTypeGuidInitialize @ 0x140A51904 (PnpBusTypeGuidInitialize.c)
 *     PnpInitializeNotification @ 0x140A51990 (PnpInitializeNotification.c)
 *     PnpInitializeDeviceEvents @ 0x140A51AD4 (PnpInitializeDeviceEvents.c)
 *     PnpInitializePnpWatchdogs @ 0x140A51BD0 (PnpInitializePnpWatchdogs.c)
 *     PiDmaGuardProcessRegistry @ 0x140A51C3C (PiDmaGuardProcessRegistry.c)
 *     PpProfileInit @ 0x140A51D5C (PpProfileInit.c)
 *     PnpInitializeDeviceActions @ 0x140A51DF4 (PnpInitializeDeviceActions.c)
 *     PiDeviceDependencyInit @ 0x140A51E54 (PiDeviceDependencyInit.c)
 *     PipResetDevices @ 0x140A51EC8 (PipResetDevices.c)
 *     PiDmInit @ 0x140A630A0 (PiDmInit.c)
 *     PnpInitializeLegacyBusInformationTable @ 0x140A6B6C8 (PnpInitializeLegacyBusInformationTable.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140A6D554 (ArbInitializeOsInaccessibleRange.c)
 *     PipMigratePnpState @ 0x140A6EFD4 (PipMigratePnpState.c)
 *     PnpDeviceCompletionQueueInitialize @ 0x140A70348 (PnpDeviceCompletionQueueInitialize.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140A70824 (IopQueryDeviceResetRegistrySettings.c)
 *     PiInitFirmwareResources @ 0x140A70B20 (PiInitFirmwareResources.c)
 */

int __fastcall IopInitializePlugPlayServices(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // rdi
  int result; // eax
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
      return -1073741584;
    result = PnpDiagInitialize();
    if ( result >= 0 )
    {
      PnpTraceInitialize();
      result = PiDcInit(1LL);
      if ( result >= 0 )
      {
        result = PiUEventInit(1LL);
        if ( result >= 0 )
        {
          v20 = *(_QWORD *)(a1 + 240) + 136LL;
          *(_QWORD *)&UserData.Size = 80LL;
          UserData.Ptr = v20;
          PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 1u, &UserData);
          if ( (unsigned int)dword_140C02E30 > 4 && tlgKeywordOn((__int64)&dword_140C02E30, 0x400000000000LL) )
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
              (__int64)&dword_140C02E30,
              (unsigned __int8 *)byte_140023F8B,
              0LL,
              0LL,
              0xBu,
              &v42);
          }
          TraceLoggingUnregister_EtwUnregister((__int64)&dword_140C02E30);
          result = PiPnpRtlInit(1u);
          if ( result >= 0 )
          {
            result = PiCslInitialize();
            if ( result >= 0 )
            {
              CachedContextBaseKey = PiDmaGuardInitialize(1);
              if ( CachedContextBaseKey >= 0 )
              {
                result = PiKsrInitialize();
                if ( result < 0 )
                  return result;
                PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 10, 0, 0LL, 0LL, 0LL, 0LL);
                KeInitializeEvent(&PnpShutdownEvent, NotificationEvent, 0);
                if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
                  PpInitializeBootDDB(a1, 1LL);
                return 0;
              }
              return CachedContextBaseKey;
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
    dword_140C50B0C = 90;
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
    if ( result >= 0 )
    {
      PiInitFirmwareResources(a1);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
        PpInitializeBootDDB(a1, 0LL);
      PipInitDeviceOverrideCache();
      KeInitializeEvent(&PnpSystemDeviceEnumerationComplete, NotificationEvent, 0);
      result = PiInitCacheGroupInformation();
      if ( result >= 0 )
      {
        KeInitializeSemaphore(&PpRegistrySemaphore, 1, 1);
        result = PnpInitializeLegacyBusInformationTable();
        if ( result >= 0 )
        {
          IopInitializeResourceMap(a1);
          IopAllocateBootResourcesRoutine = (__int64)&IopReportBootResources;
          IopInitReservedResourceList = 0LL;
          PnpDefaultInterfaceType = 1;
          ArbInitializeOsInaccessibleRange((unsigned int)dword_140C4DCE0);
          CachedContextBaseKey = IopPortInitialize(v7, v6);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = IopMemInitialize(v9, v8);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = IopDmaInitialize(v12, v11);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = IopIrqInitialize(v14, v13);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = IopBusNumberInitialize(v16, v15);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = PiPnpRtlInit(0);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          PipMigratePnpState();
          CachedContextBaseKey = PiDmInit();
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v28);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
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
          v25.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\Setup";
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
              qword_140C455B0 = (__int64)PipUpdateSetupInProgressCallback;
              qword_140C455B8 = (__int64)Handle;
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
            return CachedContextBaseKey;
          PipCheckSystemFirmwareUpdated(&v22);
          CachedContextBaseKey = PiDcInit(0LL);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = PiAuCreateSecurityObjects();
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = PiDqInit();
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = PpDevCfgInit();
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          PipResetDevices();
          CachedContextBaseKey = CmCreateDevice(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)L"HTREE\\ROOT\\0",
                                   983103,
                                   &v32,
                                   0LL,
                                   0);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
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
          qword_140C449E8 = (__int64)&IopPendingEjects;
          IopPendingEjects = (__int64)&IopPendingEjects;
          qword_140C44A78 = (__int64)&IopPendingSurpriseRemovals;
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
            return CachedContextBaseKey;
          CachedContextBaseKey = PnpInitializeDeviceActions();
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          PpProfileInit();
          IopWarmEjectPdo = 0LL;
          KeInitializeEvent(&IopWarmEjectLock, SynchronizationEvent, 1u);
          *(_DWORD *)&v25.Length = 2490404;
          v25.Buffer = L"\\Driver\\PnpManager";
          CachedContextBaseKey = IoCreateDriver(&v25, (_DMA_OPERATIONS *)PipPnPDriverEntry);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, &DeviceObject);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
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
            return CachedContextBaseKey;
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
          return CachedContextBaseKey;
        }
      }
    }
  }
  return result;
}
