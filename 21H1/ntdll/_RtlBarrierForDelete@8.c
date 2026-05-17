/*
 * XREFs of _RtlBarrierForDelete@8 @ 0x4B3502A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlPosixBarrier@8 @ 0x4B35031D (_RtlPosixBarrier@8.c)
 */

int __stdcall RtlBarrierForDelete(int a1, int a2)
{
  return RtlPosixBarrier(a1, a2 | 0x10000);
}
