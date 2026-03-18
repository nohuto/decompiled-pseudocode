/*
 * XREFs of PnpSerializeBoot @ 0x1403DCD34
 * Callers:
 *     NtSerializeBoot @ 0x140861890 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140B21B40 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
