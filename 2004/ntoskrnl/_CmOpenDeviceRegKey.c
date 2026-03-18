/*
 * XREFs of _CmOpenDeviceRegKey @ 0x1405E180C
 * Callers:
 *     PiCMOpenDeviceKey @ 0x1405D3300 (PiCMOpenDeviceKey.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405E05EC (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405E2D68 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpDispatchDevice @ 0x1406BEE10 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406BF1AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406C0CAC (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     IoOpenDeviceRegistryKey @ 0x1406F4F50 (IoOpenDeviceRegistryKey.c)
 *     _CmDeleteDeviceWorker @ 0x14071B1A8 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14071B76C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071E56C (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14071E918 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140721A08 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceCompoundFilters @ 0x140723158 (_CmGetDeviceCompoundFilters.c)
 *     _CmSetDeviceRegPropWorker @ 0x140724648 (_CmSetDeviceRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14072C03C (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14072FAF4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgInitDeviceContext @ 0x14072FFD0 (PiDevCfgInitDeviceContext.c)
 *     IopReleaseDeviceResources @ 0x1407322A4 (IopReleaseDeviceResources.c)
 *     _CmCreateDeviceWorker @ 0x1407339E8 (_CmCreateDeviceWorker.c)
 *     PpForEachDeviceInstanceDriver @ 0x140733ED0 (PpForEachDeviceInstanceDriver.c)
 *     IopGetRootDevices @ 0x14073901C (IopGetRootDevices.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140739B7C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x14073A7BC (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x14073A99C (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14073AD54 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x14073B0C4 (PiQueryResourceRequirements.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14073D14C (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14073D2AC (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14073D350 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140755888 (PiDevCfgEnumDeviceKeys.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407578BC (PnpCheckDeviceIdsChanged.c)
 *     PipMakeGloballyUniqueId @ 0x1407597C8 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x140796CE8 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407ABC40 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407AEBF0 (PipApplyFunctionToServiceInstances.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14089DD90 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14089FA8C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1408A3998 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A698C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140978558 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405E2D68 (_CmOpenDeviceRegKeyWorker.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6, __int64 a7, _DWORD *a8)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rsi
  PVOID PoolWithTag; // rax
  void *v14; // rdi
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v19; // eax
  int v20; // ecx
  int v21; // eax

  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x52504E50u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, 0x58uLL);
  *((_DWORD *)v14 + 6) = a5;
  *((_BYTE *)v14 + 28) = a6;
  *((_DWORD *)v14 + 4) = a3;
  *((_QWORD *)v14 + 4) = a7;
  *((_DWORD *)v14 + 5) = a4;
  if ( !v8 )
    goto LABEL_5;
  v15 = v8(a1, a2, 1LL);
  switch ( v15 )
  {
    case -1073741822:
      v8 = 0LL;
      goto LABEL_5;
    case -1073741536:
      goto LABEL_15;
    case 0:
LABEL_5:
      v16 = CmOpenDeviceRegKeyWorker(
              a1,
              a2,
              *((_DWORD *)v14 + 4),
              *((_DWORD *)v14 + 5),
              *((_DWORD *)v14 + 6),
              *((_BYTE *)v14 + 28),
              *((_QWORD *)v14 + 4),
              (__int64)v14 + 40);
      v17 = v16;
      if ( !v8 || (*(_DWORD *)v14 = v16, v19 = v8(a1, a2, 1LL), v20 = v19, v19 == -1073741822) )
      {
LABEL_6:
        if ( v17 >= 0 && a8 )
          *a8 = *((_DWORD *)v14 + 10);
        goto LABEL_9;
      }
      if ( v19 != -1073741536 )
      {
        v21 = v17;
        if ( v20 )
          v21 = -1073741595;
        v17 = v21;
        goto LABEL_6;
      }
LABEL_15:
      v17 = *(_DWORD *)v14;
      goto LABEL_6;
  }
  v17 = -1073741595;
LABEL_9:
  ExFreePoolWithTag(v14, 0);
  return (unsigned int)v17;
}
