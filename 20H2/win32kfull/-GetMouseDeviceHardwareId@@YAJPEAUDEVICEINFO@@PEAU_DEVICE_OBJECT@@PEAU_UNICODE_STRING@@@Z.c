/*
 * XREFs of ?GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0118458
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C01181C0 (IsMouseDeviceOnIgnoreList.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C02205A0 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C0220800 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     GetPointerDeviceId @ 0x1C0118838 (GetPointerDeviceId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetMouseDeviceHardwareId(
        struct DEVICEINFO *a1,
        struct _DEVICE_OBJECT *a2,
        struct _UNICODE_STRING *a3,
        __int64 a4)
{
  int PointerDeviceId; // ebx
  __int64 v9; // rax

  PointerDeviceId = 0;
  if ( *((_BYTE *)a1 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !*((_QWORD *)a1 + 113) )
  {
    v9 = Win32AllocPool(a3->MaximumLength, 1684630869LL);
    *((_QWORD *)a1 + 113) = v9;
    if ( !v9 )
      return (unsigned int)-1073741801;
    *((_WORD *)a1 + 449) = a3->MaximumLength;
    PointerDeviceId = GetPointerDeviceId(a2, (PUNICODE_STRING)a1 + 56);
    if ( PointerDeviceId < 0 )
      return (unsigned int)PointerDeviceId;
  }
  RtlCopyUnicodeString(a3, (PCUNICODE_STRING)a1 + 56);
  return (unsigned int)PointerDeviceId;
}
