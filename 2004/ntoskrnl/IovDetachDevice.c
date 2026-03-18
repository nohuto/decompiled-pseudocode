/*
 * XREFs of IovDetachDevice @ 0x1409C21A0
 * Callers:
 *     IoDetachDevice @ 0x14026F670 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x1409D3214 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
