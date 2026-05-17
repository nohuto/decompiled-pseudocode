/*
 * XREFs of _RtlpNtMakeTemporaryKey@4 @ 0x4B36D240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlpNtMakeTemporaryKey(int a1)
{
  return ZwDeleteKey(a1);
}
