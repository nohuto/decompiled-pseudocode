/*
 * XREFs of RaDriverUnload @ 0x1C0034230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0033368 (WPP_SF_q.c)
 *     RaDeleteDriver @ 0x1C007A1A8 (RaDeleteDriver.c)
 *     WppCleanupKm @ 0x1C007A44C (WppCleanupKm.c)
 */

__int64 __fastcall RaDriverUnload(PDRIVER_OBJECT DriverObject)
{
  PVOID DriverObjectExtension; // rax

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_c75ef678420536b919220fd58d40bf93_Traceguids,
      DriverObject);
  }
  WppCleanupKm();
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
  RaDeleteDriver(DriverObjectExtension);
  return 0LL;
}
