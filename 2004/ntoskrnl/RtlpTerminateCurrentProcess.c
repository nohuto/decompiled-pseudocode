/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x140911B70
 * Callers:
 *     RtlAssert @ 0x1405834A0 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x14065797C (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
}
