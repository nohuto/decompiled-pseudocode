/*
 * XREFs of ZwQueryBootOptions @ 0x1403FA990
 * Callers:
 *     BiQueryBootOptions @ 0x14097521C (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140976890 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
