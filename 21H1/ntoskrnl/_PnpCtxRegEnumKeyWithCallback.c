/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x1407995F8
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406AE73C (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCreateDriverSwDevices @ 0x140730B28 (PiCreateDriverSwDevices.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14079810C (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x1407982F0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1407985B8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _PnpGetGenericObjectList @ 0x140798804 (_PnpGetGenericObjectList.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1407989C4 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140798B20 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140798E80 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140799170 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1408971AC (PipHardwareConfigClearStartOverrides.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140979870 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbGetObjectSubKeyList @ 0x140979BB0 (DrvDbGetObjectSubKeyList.c)
 *     PipMigratePnpState @ 0x140A49980 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x140799650 (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpCtxRegEnumKeyWithCallback(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *(_QWORD *)(a1 + 224);
  v6[3] = v4;
  v6[4] = PnpCtxInternalEnumKeyCallback;
  v6[0] = a1;
  v6[1] = a3;
  v6[5] = v6;
  v6[2] = a4;
  return RegRtlEnumKeyWithCallback(a2);
}
