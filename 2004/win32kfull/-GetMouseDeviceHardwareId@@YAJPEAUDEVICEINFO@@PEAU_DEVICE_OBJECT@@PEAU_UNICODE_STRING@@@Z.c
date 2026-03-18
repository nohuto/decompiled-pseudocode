/*
 * XREFs of ?GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0116F08
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C0116C70 (IsMouseDeviceOnIgnoreList.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0221430 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C0221690 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     GetPointerDeviceId @ 0x1C01172E8 (GetPointerDeviceId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetMouseDeviceHardwareId(
        struct DEVICEINFO *a1,
        struct _DEVICE_OBJECT *a2,
        struct _UNICODE_STRING *a3)
{
  int PointerDeviceId; // ebx
  __int64 v8; // rax

  PointerDeviceId = 0;
  if ( *((_BYTE *)a1 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !*((_QWORD *)a1 + 113) )
  {
    v8 = Win32AllocPool(a3->MaximumLength, 1684630869LL);
    *((_QWORD *)a1 + 113) = v8;
    if ( !v8 )
      return (unsigned int)-1073741801;
    *((_WORD *)a1 + 449) = a3->MaximumLength;
    PointerDeviceId = GetPointerDeviceId(a2, (PUNICODE_STRING)a1 + 56);
    if ( PointerDeviceId < 0 )
      return (unsigned int)PointerDeviceId;
  }
  RtlCopyUnicodeString(a3, (PCUNICODE_STRING)a1 + 56);
  return (unsigned int)PointerDeviceId;
}
