/*
 * XREFs of ZwSetSystemTime @ 0x1403FB710
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405CF840 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x14094E440 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemTime(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
