/*
 * XREFs of KeDeregisterNmiCallback @ 0x14050E750
 * Callers:
 *     <none>
 * Callees:
 *     KiDeregisterNmiSxCallback @ 0x14050EEA4 (KiDeregisterNmiSxCallback.c)
 */

NTSTATUS __stdcall KeDeregisterNmiCallback(PVOID Handle)
{
  return KiDeregisterNmiSxCallback(Handle);
}
