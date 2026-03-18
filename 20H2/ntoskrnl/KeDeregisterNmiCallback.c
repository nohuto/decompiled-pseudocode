/*
 * XREFs of KeDeregisterNmiCallback @ 0x1405126D0
 * Callers:
 *     <none>
 * Callees:
 *     KiDeregisterNmiSxCallback @ 0x140512E24 (KiDeregisterNmiSxCallback.c)
 */

NTSTATUS __stdcall KeDeregisterNmiCallback(PVOID Handle)
{
  return KiDeregisterNmiSxCallback(Handle);
}
