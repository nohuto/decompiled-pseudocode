/*
 * XREFs of ZwSetSystemTime @ 0x1403F6B40
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405C9844 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x140948680 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
