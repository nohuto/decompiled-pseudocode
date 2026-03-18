/*
 * XREFs of PnpSerializeBoot @ 0x1403CB480
 * Callers:
 *     NtSerializeBoot @ 0x1407BFD10 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140A426FC (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
