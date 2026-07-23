/*
 * XREFs of ZwSetSystemTime @ 0x1403F58B0
 * Callers:
 *     ExpTimeZoneWork @ 0x140947350 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
