/*
 * XREFs of VrpRegistryUnload @ 0x14087F720
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x14087F644 (TraceLoggingUnregister_EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x140902670 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( (unsigned int)dword_140C02168 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02168, (unsigned __int8 *)byte_1400230EB, 0LL, 0LL, 2u, &v1);
  return TraceLoggingUnregister_EtwUnregister((__int64)&dword_140C02168);
}
