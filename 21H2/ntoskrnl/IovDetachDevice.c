/*
 * XREFs of IovDetachDevice @ 0x1409C61B0
 * Callers:
 *     IoDetachDevice @ 0x1402A5D60 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x1409D7224 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
