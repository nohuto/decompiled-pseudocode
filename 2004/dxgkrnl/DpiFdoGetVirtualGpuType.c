/*
 * XREFs of DpiFdoGetVirtualGpuType @ 0x1C02C9DD0
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C0051BBC (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiFdoDispatchIoctl @ 0x1C02C8B70 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02CCAA0 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C02CCEF0 (DpiSriovAttach.c)
 *     DpiSriovNotification @ 0x1C02CD360 (DpiSriovNotification.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DpiFdoGetVirtualGpuType(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\GPUPARAV");
  v2 = *(_QWORD *)(v1 + 48);
  return v2 && !RtlCompareUnicodeString((PCUNICODE_STRING)(v2 + 88), &DestinationString, 0);
}
