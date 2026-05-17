/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x180107A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlpNtMakeTemporaryKey()
{
  return NtDeleteKey();
}
