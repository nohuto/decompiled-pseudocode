/*
 * XREFs of PnpSerializeBoot @ 0x1403CA6A0
 * Callers:
 *     NtSerializeBoot @ 0x1407BCBA0 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140A5F46C (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
