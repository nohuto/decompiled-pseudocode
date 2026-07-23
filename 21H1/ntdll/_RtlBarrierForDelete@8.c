/*
 * XREFs of _RtlBarrierForDelete@8 @ 0x4B3502A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlPosixBarrier@8 @ 0x4B35031D (_RtlPosixBarrier@8.c)
 */

BOOLEAN __cdecl RtlBarrierForDelete(PRTL_BARRIER Barrier, ULONG Flags)
{
  return RtlPosixBarrier(Barrier, Flags | 0x10000);
}
