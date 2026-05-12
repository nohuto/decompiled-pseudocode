/*
 * XREFs of McTemplateK0pd_EtwWriteTransfer @ 0x1C002A294
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001190 (RaUnitAtaPassThroughIoctl.c)
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaidAdapterPnpIrp @ 0x1C0015DB4 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015F54 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterQueryIdIrp @ 0x1C002D8DC (RaidAdapterQueryIdIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C002D970 (RaidAdapterQueryInterfaceIrp.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C00498C8 (RaUnitStorageSetPropertyIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00724D4 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C0072DF0 (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C00771D8 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00781EC (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C0078D04 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C0078DA4 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0079184 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C007934C (RaidAdapterSurpriseRemovalIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C007B274 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C007B3C0 (RaUnitStorageBreakReservationIoctl.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DC24 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pd_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
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
