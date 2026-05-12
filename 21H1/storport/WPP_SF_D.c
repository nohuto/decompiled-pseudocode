/*
 * XREFs of WPP_SF_D @ 0x1C0031E78
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000FA2C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidStallDeviceQueue @ 0x1C001190C (RaidStallDeviceQueue.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C0011F48 (RaidLunQueueWaitForQuiescence.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001267C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0014600 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0014E8C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidAdapterHack @ 0x1C002B77C (RaidAdapterHack.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x1C003F590 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     RaWmiDispatchIrp @ 0x1C0073E64 (RaWmiDispatchIrp.c)
 *     StorpRegisterShim @ 0x1C007AD0C (StorpRegisterShim.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_D(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
