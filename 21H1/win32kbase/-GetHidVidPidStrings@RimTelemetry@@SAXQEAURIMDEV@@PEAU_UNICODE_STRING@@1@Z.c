/*
 * XREFs of ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C0158D60
 * Callers:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C0047F70 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C01A8BB0 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A99A8 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RimTelemetry::GetHidVidPidStrings(
        struct RIMDEV *const a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( RtlIntegerToUnicodeString(*(unsigned __int16 *)(*((_QWORD *)a1 + 58) + 110LL), 0x10u, a2) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  if ( RtlIntegerToUnicodeString(*(unsigned __int16 *)(*((_QWORD *)a1 + 58) + 112LL), 0x10u, a3) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
}
