/*
 * XREFs of WPP_SF_qD @ 0x1C00333AC
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00112F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C00160FC (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017194 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C002D590 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidAdapterStartDevice @ 0x1C002F830 (RaidAdapterStartDevice.c)
 *     StorPortBusy @ 0x1C0038B30 (StorPortBusy.c)
 *     RaWmiPassToMiniPort @ 0x1C0075334 (RaWmiPassToMiniPort.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00781EC (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           4LL,
           0LL);
}
