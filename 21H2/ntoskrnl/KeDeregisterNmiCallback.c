/*
 * XREFs of KeDeregisterNmiCallback @ 0x14056A170
 * Callers:
 *     <none>
 * Callees:
 *     KiDeregisterNmiSxCallback @ 0x14056A8C4 (KiDeregisterNmiSxCallback.c)
 */

NTSTATUS __stdcall KeDeregisterNmiCallback(PVOID Handle)
{
  return KiDeregisterNmiSxCallback(Handle);
}
