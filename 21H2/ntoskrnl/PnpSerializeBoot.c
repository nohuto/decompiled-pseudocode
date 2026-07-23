/*
 * XREFs of PnpSerializeBoot @ 0x1403CEC00
 * Callers:
 *     NtSerializeBoot @ 0x1407D2B00 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140A67E8C (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
