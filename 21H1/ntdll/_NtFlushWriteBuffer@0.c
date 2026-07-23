/*
 * XREFs of _NtFlushWriteBuffer@0 @ 0x4B2F3840
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS NtFlushWriteBuffer(void)
{
  return Wow64SystemServiceCall();
}
