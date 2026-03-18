/*
 * XREFs of IovDetachDevice @ 0x140A807FC
 * Callers:
 *     IoDetachDevice @ 0x140256080 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140A919A8 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
