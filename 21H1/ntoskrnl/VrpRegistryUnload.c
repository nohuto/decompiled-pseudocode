/*
 * XREFs of VrpRegistryUnload @ 0x14087E430
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoDeleteDevice @ 0x14033F890 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x14087E354 (TraceLoggingUnregister_EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x140901810 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( (unsigned int)dword_140C02168 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02168, (unsigned __int8 *)byte_140022FEB, 0LL, 0LL, 2u, &v1);
  return TraceLoggingUnregister_EtwUnregister((__int64)&dword_140C02168);
}
