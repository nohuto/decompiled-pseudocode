/*
 * XREFs of IovDetachDevice @ 0x1409C2190
 * Callers:
 *     IoDetachDevice @ 0x14033F800 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x1409D31B4 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
