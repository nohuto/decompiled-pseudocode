/*
 * XREFs of IovDetachDevice @ 0x1409C81C0
 * Callers:
 *     IoDetachDevice @ 0x1402032C0 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x1409D9234 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
