/*
 * XREFs of ZwSetSystemTime @ 0x1403FB710
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405CF840 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x14094E440 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
