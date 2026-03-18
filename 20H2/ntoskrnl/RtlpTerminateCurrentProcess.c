/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1409176B0
 * Callers:
 *     RtlAssert @ 0x140586E00 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x1406DC8DC (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
