/*
 * XREFs of VrpRegistryUnload @ 0x140885270
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x140885198 (TraceLoggingUnregister_EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x140908280 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( (unsigned int)dword_140C02168 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02168, (unsigned __int8 *)byte_14002324B, 0LL, 0LL, 2u, &v1);
  return TraceLoggingUnregister_EtwUnregister((__int64)&dword_140C02168);
}
