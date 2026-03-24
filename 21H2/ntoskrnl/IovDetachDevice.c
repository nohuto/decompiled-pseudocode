/*
 * XREFs of IovDetachDevice @ 0x1409C51B0
 * Callers:
 *     IoDetachDevice @ 0x140360D00 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x1409D6224 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
