/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0031F10
 * Callers:
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x1C006866C (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C00F8008 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0100188 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C01081C8 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0115458 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0122D9C (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x1C0031F68 (RtlStringVPrintfWorkerW_0.c)
 */

__int64 RtlStringCchPrintfW(wchar_t *a1, size_t a2, wchar_t *a3, ...)
{
  int v3; // r9d
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringVPrintfWorkerW_0(a1, a2, (size_t *)a3, a3, va);
  }
  return (unsigned int)v3;
}
