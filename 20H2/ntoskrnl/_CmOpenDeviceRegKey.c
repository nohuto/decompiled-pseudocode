/*
 * XREFs of _CmOpenDeviceRegKey @ 0x14066D59C
 * Callers:
 *     PiCMOpenDeviceKey @ 0x140645930 (PiCMOpenDeviceKey.c)
 *     _CmGetDeviceRegPropWorker @ 0x14066B8FC (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406702F4 (_CmOpenDeviceRegKeyWorker.c)
 *     IoOpenDeviceRegistryKey @ 0x1406C81C0 (IoOpenDeviceRegistryKey.c)
 *     _PnpDispatchDevice @ 0x1406E9750 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406E9AEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406EB5EC (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmDeleteDeviceWorker @ 0x140729198 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072975C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072C408 (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14072C7B4 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14072FB18 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceCompoundFilters @ 0x140731BE8 (_CmGetDeviceCompoundFilters.c)
 *     _CmSetDeviceRegPropWorker @ 0x1407330D8 (_CmSetDeviceRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14073AACC (PnpDeviceObjectToDeviceInstance.c)
 *     PiDevCfgInitDeviceContext @ 0x14073C888 (PiDevCfgInitDeviceContext.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073E2AC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IopReleaseDeviceResources @ 0x14074164C (IopReleaseDeviceResources.c)
 *     _CmCreateDeviceWorker @ 0x140742E78 (_CmCreateDeviceWorker.c)
 *     PpForEachDeviceInstanceDriver @ 0x140743360 (PpForEachDeviceInstanceDriver.c)
 *     IopGetRootDevices @ 0x140747F2C (IopGetRootDevices.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140748A8C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x1407496CC (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x1407498AC (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140749C64 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x140749FD4 (PiQueryResourceRequirements.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14074C05C (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14074C1BC (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14074C260 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1407644C8 (PiDevCfgEnumDeviceKeys.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407664FC (PnpCheckDeviceIdsChanged.c)
 *     PipMakeGloballyUniqueId @ 0x140767F84 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1407A6018 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407B9B80 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407BCB30 (PipApplyFunctionToServiceInstances.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1408A38C0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A55BC (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1408A94C8 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408AC4BC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14097E328 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406702F4 (_CmOpenDeviceRegKeyWorker.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
