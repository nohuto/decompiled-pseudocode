/*
 * XREFs of McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870
 * Callers:
 *     HUBHTX_Get30PortChangeEvent @ 0x1C0005218 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBPARENT_ResetHubComplete @ 0x1C0007790 (HUBPARENT_ResetHubComplete.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000E168 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0014C20 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00173D0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C00234D0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBMISC_CreateNewDSM @ 0x1C002E6B0 (HUBMISC_CreateNewDSM.c)
 *     HUBIDLE_AddEvent @ 0x1C003C168 (HUBIDLE_AddEvent.c)
 *     HUBDRIVER_EtwRundownHub @ 0x1C0073540 (HUBDRIVER_EtwRundownHub.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0074380 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0075090 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0075A50 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0077014 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlCyclePort @ 0x1C00780D8 (HUBFDO_IoctlCyclePort.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0079110 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C0079DC0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C007ABD4 (HUBPDO_CreatePdoInternal.c)
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C007DC90 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0001250 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 3u, &v4);
}
