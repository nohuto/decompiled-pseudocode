/*
 * XREFs of PnpSerializeBoot @ 0x1403CE0A0
 * Callers:
 *     NtSerializeBoot @ 0x1407CE5A0 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140A4899C (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
