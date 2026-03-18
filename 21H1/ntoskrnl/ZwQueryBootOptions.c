/*
 * XREFs of ZwQueryBootOptions @ 0x1403F4B30
 * Callers:
 *     BiQueryBootOptions @ 0x14096E0AC (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x14096F720 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
