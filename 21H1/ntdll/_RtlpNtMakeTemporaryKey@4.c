/*
 * XREFs of _RtlpNtMakeTemporaryKey@4 @ 0x4B36D240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlpNtMakeTemporaryKey(HANDLE KeyHandle)
{
  return ZwDeleteKey(KeyHandle);
}
