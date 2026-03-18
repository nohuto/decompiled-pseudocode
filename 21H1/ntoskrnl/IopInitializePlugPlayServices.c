/*
 * XREFs of IopInitializePlugPlayServices @ 0x140A4AB7C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     IoDeleteDevice @ 0x14033F890 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x14036B368 (PipSetDevNodeState.c)
 *     PnpRequestDeviceAction @ 0x14036BAD4 (PnpRequestDeviceAction.c)
 *     PnpDiagnosticTrace @ 0x140379698 (PnpDiagnosticTrace.c)
 *     PiDmaGuardInitialize @ 0x1403B2530 (PiDmaGuardInitialize.c)
 *     PnpGetRegistryDword @ 0x1403B2594 (PnpGetRegistryDword.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14061750C (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlGUIDFromString @ 0x1406AA8D0 (RtlGUIDFromString.c)
 *     IoCreateDevice @ 0x140702940 (IoCreateDevice.c)
 *     IopCreateRegistryKeyEx @ 0x1407253D4 (IopCreateRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x140728128 (IopGetRegistryValue.c)
 *     _CmSetDeviceRegProp @ 0x1407296A0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x14072ACAC (PipSetDevNodeFlags.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x140730C90 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PipSetDevNodeUserFlags @ 0x1407316A8 (PipSetDevNodeUserFlags.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14073B570 (PnpMapDeviceObjectToDeviceInstance.c)
 *     _CmAddDeviceToContainer @ 0x140741BF4 (_CmAddDeviceToContainer.c)
 *     _CmCreateDevice @ 0x14075269C (_CmCreateDevice.c)
 *     PipAllocateDeviceNode @ 0x140757480 (PipAllocateDeviceNode.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407788A4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x140788FD8 (CmRegisterSystemHiveLimitCallback.c)
 *     IopPortInitialize @ 0x140789064 (IopPortInitialize.c)
 *     IopMemInitialize @ 0x1407890FC (IopMemInitialize.c)
 *     IopDmaInitialize @ 0x1407891E0 (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x140789258 (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x1407892C0 (IopBusNumberInitialize.c)
 *     PipUpdateSetupInProgress @ 0x14078A4A0 (PipUpdateSetupInProgress.c)
 *     PiPnpRtlInit @ 0x14078A820 (PiPnpRtlInit.c)
 *     TlgRegisterAggregateProvider @ 0x14078C0A0 (TlgRegisterAggregateProvider.c)
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 *     PnpCopyDeviceInstancePath @ 0x14078C6B4 (PnpCopyDeviceInstancePath.c)
 *     PnpAllocateDeviceInstancePath @ 0x14078C6D0 (PnpAllocateDeviceInstancePath.c)
 *     IopOpenRegistryKeyEx @ 0x1407934A0 (IopOpenRegistryKeyEx.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x14087E354 (TraceLoggingUnregister_EtwUnregister.c)
 *     IoDeleteDriver @ 0x14088F750 (IoDeleteDriver.c)
 *     PipUpdateSetupInProgressNotify @ 0x140897438 (PipUpdateSetupInProgressNotify.c)
 *     PnpLogEvent @ 0x14089DADC (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x14089F230 (PiDcHandleSystemFirmwareUpdate.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     IopInitializeResourceMap @ 0x140A372CC (IopInitializeResourceMap.c)
 *     PiInitFirmwareResources @ 0x140A4976C (PiInitFirmwareResources.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140A497C0 (ArbInitializeOsInaccessibleRange.c)
 *     PipMigratePnpState @ 0x140A49980 (PipMigratePnpState.c)
 *     PiDmInit @ 0x140A49A6C (PiDmInit.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140A49B5C (IopQueryDeviceResetRegistrySettings.c)
 *     PipHardwareConfigInit @ 0x140A49BF0 (PipHardwareConfigInit.c)
 *     PiAuCreateSecurityObjects @ 0x140A49FE4 (PiAuCreateSecurityObjects.c)
 *     PiDqInit @ 0x140A4A89C (PiDqInit.c)
 *     PpDevCfgInit @ 0x140A4A920 (PpDevCfgInit.c)
 *     PiUEventInit @ 0x140A4B668 (PiUEventInit.c)
 *     PiDcInit @ 0x140A4B804 (PiDcInit.c)
 *     PpInitializeBootDDB @ 0x140A4B868 (PpInitializeBootDDB.c)
 *     PiCslInitialize @ 0x140A4B9C8 (PiCslInitialize.c)
 *     PnpDiagInitialize @ 0x140A4BA6C (PnpDiagInitialize.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A4BAD0 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A4BB5C (PipProcessPendingServices.c)
 *     PiSwInit @ 0x140A4BBE8 (PiSwInit.c)
 *     PnpBusTypeGuidInitialize @ 0x140A4BC98 (PnpBusTypeGuidInitialize.c)
 *     PnpInitializeNotification @ 0x140A4BD24 (PnpInitializeNotification.c)
 *     PnpInitializeDeviceEvents @ 0x140A4BE68 (PnpInitializeDeviceEvents.c)
 *     PnpInitializePnpWatchdogs @ 0x140A4BF60 (PnpInitializePnpWatchdogs.c)
 *     PpProfileInit @ 0x140A4C0BC (PpProfileInit.c)
 *     PiDeviceDependencyInit @ 0x140A4C154 (PiDeviceDependencyInit.c)
 *     PipResetDevices @ 0x140A4C1C8 (PipResetDevices.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A55B0C (PipCheckSystemFirmwareUpdated.c)
 *     PipInitDeviceOverrideCache @ 0x140A55C40 (PipInitDeviceOverrideCache.c)
 *     PiInitCacheGroupInformation @ 0x140A55EB4 (PiInitCacheGroupInformation.c)
 *     PiKsrNotifyInitialize @ 0x140A8F200 (PiKsrNotifyInitialize.c)
 */

__int64 __fastcall IopInitializePlugPlayServices(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rax
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
  HANDLE v16; // rbx
  struct _DEVICE_OBJECT *v17; // rsi
  PDEVICE_OBJECT v18; // rcx
  ULONGLONG v19; // rax
  unsigned int *v20; // rbx
  unsigned int *v21; // rdi
  _QWORD *v22; // rcx
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  ULONG Disposition; // [rsp+80h] [rbp-88h] BYREF
  int v30; // [rsp+84h] [rbp-84h] BYREF
  PVOID v31; // [rsp+88h] [rbp-80h] BYREF
  void *v32; // [rsp+90h] [rbp-78h] BYREF
  PVOID v33; // [rsp+98h] [rbp-70h] BYREF
  PVOID v34; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v35; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE v36; // [rsp+B0h] [rbp-58h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING v38; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING GuidString; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v40; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v43; // [rsp+100h] [rbp-8h] BYREF
  __int64 v44; // [rsp+108h] [rbp+0h] BYREF
  __int64 v45; // [rsp+110h] [rbp+8h] BYREF
  __int64 v46; // [rsp+118h] [rbp+10h] BYREF
  __int64 v47; // [rsp+120h] [rbp+18h] BYREF
  __int64 v48; // [rsp+128h] [rbp+20h] BYREF
  __int64 v49; // [rsp+130h] [rbp+28h] BYREF
  __int64 v50; // [rsp+138h] [rbp+30h] BYREF
  UNICODE_STRING v51; // [rsp+140h] [rbp+38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+150h] [rbp+48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+160h] [rbp+58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+190h] [rbp+88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 *v56; // [rsp+1C8h] [rbp+C0h]
  __int64 v57; // [rsp+1D0h] [rbp+C8h]
  __int64 *v58; // [rsp+1D8h] [rbp+D0h]
  __int64 v59; // [rsp+1E0h] [rbp+D8h]
  __int64 *v60; // [rsp+1E8h] [rbp+E0h]
  __int64 v61; // [rsp+1F0h] [rbp+E8h]
  __int64 *v62; // [rsp+1F8h] [rbp+F0h]
  __int64 v63; // [rsp+200h] [rbp+F8h]
  __int64 *v64; // [rsp+208h] [rbp+100h]
  __int64 v65; // [rsp+210h] [rbp+108h]
  __int64 *v66; // [rsp+218h] [rbp+110h]
  __int64 v67; // [rsp+220h] [rbp+118h]
  __int64 *v68; // [rsp+228h] [rbp+120h]
  __int64 v69; // [rsp+230h] [rbp+128h]
  __int64 *v70; // [rsp+238h] [rbp+130h]
  __int64 v71; // [rsp+240h] [rbp+138h]
  __int64 *v72; // [rsp+248h] [rbp+140h]
  __int64 v73; // [rsp+250h] [rbp+148h]

  v36 = 0LL;
  Handle = 0LL;
  v32 = 0LL;
  *(_DWORD *)(&v26.MaximumLength + 1) = 0;
  DeviceObject = 0LL;
  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v31 = 0LL;
  P = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)(&v38.MaximumLength + 1) = 0;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  LOBYTE(v23) = 0;
  DestinationString = 0LL;
  v51 = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return (unsigned int)-1073741584;
    result = PnpDiagInitialize();
    if ( (int)result >= 0 )
    {
      TlgRegisterAggregateProvider(&dword_140C02D80);
      TlgRegisterAggregateProvider(&dword_140C02D48);
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02D10, 0LL, 0LL);
      result = PiDcInit(1LL);
      if ( (int)result >= 0 )
      {
        result = PiUEventInit(1LL);
        if ( (int)result >= 0 )
        {
          v19 = *(_QWORD *)(a1 + 240) + 136LL;
          *(_QWORD *)&UserData.Size = 80LL;
          UserData.Ptr = v19;
          PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 1u, &UserData);
          if ( (unsigned int)dword_140C02DF0 > 4 && tlgKeywordOn((__int64)&dword_140C02DF0, 0x400000000000LL) )
          {
            v22 = *(_QWORD **)(a1 + 240);
            v47 = v22[17];
            v56 = &v47;
            v57 = 8LL;
            v48 = v22[18];
            v58 = &v48;
            v59 = 8LL;
            v49 = v22[19];
            v60 = &v49;
            v61 = 8LL;
            v50 = v22[20];
            v62 = &v50;
            v63 = 8LL;
            v41 = v22[23];
            v64 = &v41;
            v65 = 8LL;
            v42 = v22[24];
            v66 = &v42;
            v67 = 8LL;
            v43 = v22[21];
            v68 = &v43;
            v69 = 8LL;
            v44 = v22[22];
            v70 = &v44;
            v71 = 8LL;
            v45 = v22[312];
            v72 = &v45;
            v73 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C02DF0,
              (unsigned __int8 *)byte_140023E8B,
              0LL,
              0LL,
              0xBu,
              &v55);
          }
          TraceLoggingUnregister_EtwUnregister((__int64)&dword_140C02DF0);
          result = PiPnpRtlInit(1u);
          if ( (int)result >= 0 )
          {
            result = PiCslInitialize();
            if ( (int)result >= 0 )
            {
              CachedContextBaseKey = PiDmaGuardInitialize(1);
              if ( CachedContextBaseKey < 0 )
                return (unsigned int)CachedContextBaseKey;
              v46 = 0LL;
              if ( (int)KsrGetFirmwareInformation(&v46) >= 0 )
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
              PnpShutdownEvent.Header.WaitListHead.Flink = &PnpShutdownEvent.Header.WaitListHead;
              PnpShutdownEvent.Header.Size = 6;
              PnpShutdownEvent.Header.SignalState = 0;
              if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
                PpInitializeBootDDB(a1, 1LL);
              return 0;
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
    dword_140C50C3C = 90;
    CmRegisterSystemHiveLimitCallback(a1, a2, (__int64)&PnpSystemHiveLimits);
    PnpSystemHiveTooLarge = 0;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"OldSystemBiosDate", 0, &v31) >= 0 )
      {
        v20 = (unsigned int *)v31;
        if ( v31 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v21 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v20 + v20[2]));
              RtlInitUnicodeString(&v51, (PCWSTR)((char *)v21 + v21[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v51, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v21, 0);
            }
          }
          ExFreePoolWithTag(v20, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_140C44B88 = 0LL;
    qword_140C44B48 = (__int64)&PnpDeviceCompletionQueue;
    PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
    dword_140C44B50 = 0;
    qword_140C44B78 = (__int64)&qword_140C44B70;
    qword_140C44B70 = (__int64)&qword_140C44B70;
    qword_140C44B60 = (__int64)&qword_140C44B58;
    qword_140C44B58 = (__int64)&qword_140C44B58;
    byte_140C44B68 = 5;
    byte_140C44B6A = 8;
    dword_140C44B6C = 0;
    dword_140C44B80 = 0x7FFFFFFF;
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
      v4 = (__int64 *)&IopLegacyBusInformationTable;
      PpRegistrySemaphore.Header.Size = 8;
      PpRegistrySemaphore.Header.SignalState = 1;
      PpRegistrySemaphore.Limit = 1;
      do
      {
        v4[1] = (__int64)v4;
        *v4 = (__int64)v4;
        v4 += 2;
      }
      while ( (__int64)v4 < (__int64)&IopLegacyDeviceNode );
      IopInitializeResourceMap(a1);
      IopAllocateBootResourcesRoutine = (__int64)&IopReportBootResources;
      IopInitReservedResourceList = 0LL;
      PnpDefaultInterfaceType = 1;
      ArbInitializeOsInaccessibleRange(dword_140C4DE20);
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
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v32);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      v26.Buffer = L"Control\\Pnp";
      *(_DWORD *)&v26.Length = 1572886;
      if ( (int)IopCreateRegistryKeyEx(&Handle, v32, &v26, 0xF003Fu, 0, 0LL) >= 0 )
      {
        if ( IopGetRegistryValue(Handle, L"AsynchronousOptions", 0, &v33) >= 0 )
        {
          if ( *((_DWORD *)v33 + 1) == 4 && *((_DWORD *)v33 + 3) == 4 )
            PnpAsyncOptions = *(_DWORD *)((char *)v33 + *((unsigned int *)v33 + 2));
          ExFreePoolWithTag(v33, 0);
        }
        if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v34) >= 0 )
        {
          if ( *((_DWORD *)v34 + 1) == 4 && *((_DWORD *)v34 + 3) == 4 )
            PnpBootOptions = *(_DWORD *)((char *)v34 + *((unsigned int *)v34 + 2));
          ExFreePoolWithTag(v34, 0);
        }
        if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v35) >= 0 )
        {
          if ( *((_DWORD *)v35 + 1) == 4 && *((_DWORD *)v35 + 3) == 4 )
            PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v35 + *((unsigned int *)v35 + 2));
          ExFreePoolWithTag(v35, 0);
        }
        LODWORD(v27) = 0;
        if ( (int)PnpGetRegistryDword(Handle, (__int64)L"DmaGuardTestMode", &v27) >= 0 && (_DWORD)v27 == 1 )
          PipDmaGuardTestMode = 1;
        IopQueryDeviceResetRegistrySettings(Handle);
        ZwClose(Handle);
      }
      *(_DWORD *)&v26.Length = 4063292;
      v26.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\Setup";
      if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v26, 0x20019u) >= 0 )
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
          qword_140C45750 = (__int64)PipUpdateSetupInProgressCallback;
          qword_140C45758 = (__int64)Handle;
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
      PipCheckSystemFirmwareUpdated(&v23);
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
      CachedContextBaseKey = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)L"HTREE\\ROOT\\0", 983103, &v36, 0LL, 0);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      v16 = v36;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        (__int64)v36,
        0x25u,
        1u,
        (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
        0x4Eu,
        0);
      v30 = 0;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        (__int64)v16,
        0xBu,
        4u,
        (__int64)&v30,
        4u,
        0);
      ZwClose(v16);
      qword_140C44C58 = (__int64)&IopPendingEjects;
      IopPendingEjects = (__int64)&IopPendingEjects;
      qword_140C44BC8 = (__int64)&IopPendingSurpriseRemovals;
      IopPendingSurpriseRemovals = &IopPendingSurpriseRemovals;
      ExInitializeResourceLite(&IopDeviceTreeLock);
      ExInitializeResourceLite(&IopSurpriseRemoveListLock);
      ExInitializeResourceLite(&PnpDevicePropertyLock);
      ExInitializeResourceLite(&PiEngineLock);
      PnpSpinLock = 0LL;
      PiResourceListLock.Event.Header.WaitListHead.Blink = &PiResourceListLock.Event.Header.WaitListHead;
      PiResourceListLock.Event.Header.WaitListHead.Flink = &PiResourceListLock.Event.Header.WaitListHead;
      PiResourceListLock.Count = 1;
      PiResourceListLock.Owner = 0LL;
      PiResourceListLock.Contention = 0;
      LOWORD(PiResourceListLock.Event.Header.Lock) = 1;
      PiResourceListLock.Event.Header.Size = 6;
      PiResourceListLock.Event.Header.SignalState = 0;
      CachedContextBaseKey = PiDeviceDependencyInit();
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      _InterlockedExchange64((volatile __int64 *)PnpDeviceActionThread, 0LL);
      PnpEnumerationInProgress = 0;
      PnpEnumerationLock.Header.WaitListHead.Blink = &PnpEnumerationLock.Header.WaitListHead;
      PnpEnumerationLock.Header.WaitListHead.Flink = &PnpEnumerationLock.Header.WaitListHead;
      qword_140C43568 = (__int64)&PnpEnumerationRequestList;
      PnpEnumerationRequestList = (__int64)&PnpEnumerationRequestList;
      LOWORD(PnpEnumerationLock.Header.Lock) = 0;
      PnpEnumerationLock.Header.Size = 6;
      PnpEnumerationLock.Header.SignalState = 1;
      PpProfileInit();
      IopWarmEjectPdo = 0LL;
      IopWarmEjectLock.Header.WaitListHead.Blink = &IopWarmEjectLock.Header.WaitListHead;
      IopWarmEjectLock.Header.WaitListHead.Flink = &IopWarmEjectLock.Header.WaitListHead;
      LOWORD(IopWarmEjectLock.Header.Lock) = 1;
      v26.Buffer = L"\\Driver\\PnpManager";
      IopWarmEjectLock.Header.Size = 6;
      IopWarmEjectLock.Header.SignalState = 1;
      *(_DWORD *)&v26.Length = 2490404;
      CachedContextBaseKey = IoCreateDriver(&v26, (_DMA_OPERATIONS *)PipPnPDriverEntry);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, &DeviceObject);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      v17 = DeviceObject;
      v18 = DeviceObject;
      DeviceObject->Flags |= 0x1000u;
      CachedContextBaseKey = PipAllocateDeviceNode((__int64)v18, &IopRootDeviceNode);
      if ( !IopRootDeviceNode )
      {
        IoDeleteDevice(v17);
        IoDeleteDriver((PADAPTER_OBJECT)PnpDriverObject);
        goto LABEL_44;
      }
      PipSetDevNodeFlags((__int64)IopRootDeviceNode, 305);
      PipSetDevNodeUserFlags((__int64)IopRootDeviceNode, 10);
      *((_DWORD *)IopRootDeviceNode + 165) = -2;
      CachedContextBaseKey = PnpAllocateDeviceInstancePath((__int64)IopRootDeviceNode, 0x1Au);
      if ( CachedContextBaseKey >= 0 )
      {
        *(_DWORD *)&v38.Length = 1703960;
        v38.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
        PnpCopyDeviceInstancePath((__int64)IopRootDeviceNode, &v38);
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
LABEL_44:
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
              if ( (_BYTE)v23 )
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
                      *(_QWORD *)&v40 = 2359330LL;
                      *((_QWORD *)&v40 + 1) = L"\\Driver\\DeviceApi";
                      CachedContextBaseKey = IoCreateDriver(&v40, (_DMA_OPERATIONS *)PiDaDriverEntry);
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
      }
      return (unsigned int)CachedContextBaseKey;
    }
  }
  return result;
}
