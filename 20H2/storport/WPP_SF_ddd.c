/*
 * XREFs of WPP_SF_ddd @ 0x1C003330C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C00028E4 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C0002950 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0002CE0 (StorPortResumeDevice.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0016904 (RaidBusEnumeratorVisitUnit.c)
 *     RaidPnPPassToMiniPort @ 0x1C00192FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterDeviceBusy @ 0x1C002C228 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C002C2FC (RaidAdapterDeviceReady.c)
 *     StorPortCompleteRequest @ 0x1C0038C50 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x1C0039050 (StorPortDeviceReady.c)
 *     StorpLogSystemEvent @ 0x1C003C4C0 (StorpLogSystemEvent.c)
 *     RaidUnitRequestTimeout @ 0x1C004AF08 (RaidUnitRequestTimeout.c)
 *     RaWmiPassToMiniPort @ 0x1C0075334 (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_ddd(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
