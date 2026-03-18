/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1409107D0
 * Callers:
 *     RtlAssert @ 0x140582D70 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x1406E666C (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
}
