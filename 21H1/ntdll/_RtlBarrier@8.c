/*
 * XREFs of _RtlBarrier@8 @ 0x4B350280
 * Callers:
 *     <none>
 * Callees:
 *     _RtlPosixBarrier@8 @ 0x4B35031D (_RtlPosixBarrier@8.c)
 */

BOOLEAN __cdecl RtlBarrier(PRTL_BARRIER Barrier, ULONG Flags)
{
  return RtlPosixBarrier(Barrier, Flags);
}
