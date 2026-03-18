/*
 * XREFs of ?GetMouseDeviceHardwareId@@YGJPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@PAU_UNICODE_STRING@@@Z @ 0xF419E
 * Callers:
 *     _IsMouseDeviceOnIgnoreList@4 @ 0xE6D1C (_IsMouseDeviceOnIgnoreList@4.c)
 *     ?CheckLegacyPadControlledStatus@@YGXPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z @ 0xF4038 (-CheckLegacyPadControlledStatus@@YGXPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@H@Z @ 0xF4210 (-IsMouseDeviceOnWhiteList@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     _GetPointerDeviceId@8 @ 0xAEACC (_GetPointerDeviceId@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

NTSTATUS __userpurge GetMouseDeviceHardwareId@<eax>(
        struct _DEVICE_OBJECT *a1@<edx>,
        int a2@<ecx>,
        PUNICODE_STRING DestinationString,
        struct _DEVICE_OBJECT *a4,
        struct _UNICODE_STRING *a5)
{
  NTSTATUS PointerDeviceId; // esi
  UNICODE_STRING *v7; // edi
  WCHAR *v8; // eax

  PointerDeviceId = 0;
  if ( *(_BYTE *)(a2 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v7 = (UNICODE_STRING *)(a2 + 704);
  if ( v7->Buffer )
    goto LABEL_7;
  v8 = (WCHAR *)Win32AllocPool(DestinationString->MaximumLength, 1684630869);
  v7->Buffer = v8;
  if ( v8 )
  {
    v7->MaximumLength = DestinationString->MaximumLength;
    PointerDeviceId = GetPointerDeviceId(a1, v7);
    if ( PointerDeviceId < 0 )
      return PointerDeviceId;
LABEL_7:
    RtlCopyUnicodeString(DestinationString, v7);
    return PointerDeviceId;
  }
  return -1073741801;
}
