/*
 * XREFs of RtlULongLongSub @ 0x140246F90
 * Callers:
 *     PopFxScheduleDeviceIdleTimer @ 0x140246FB8 (PopFxScheduleDeviceIdleTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x14039E7B0 (KiAdjustTimer2DueTimes.c)
 *     IopFillTriageDumpDataBlocks @ 0x140502420 (IopFillTriageDumpDataBlocks.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406AE854 (LdrpResSearchResourceInsideDirectory.c)
 *     RtlCalculateUserShadowStackSizes @ 0x140912754 (RtlCalculateUserShadowStackSizes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongSub(ULONGLONG ullMinuend, ULONGLONG ullSubtrahend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // r9

  if ( ullMinuend < ullSubtrahend )
    v3 = -1LL;
  else
    v3 = ullMinuend - ullSubtrahend;
  *pullResult = v3;
  return ullMinuend < ullSubtrahend ? 0xC0000095 : 0;
}
