/*
 * XREFs of _RtlBarrier@8 @ 0x4B350280
 * Callers:
 *     <none>
 * Callees:
 *     _RtlPosixBarrier@8 @ 0x4B35031D (_RtlPosixBarrier@8.c)
 */

int __stdcall RtlBarrier(int a1, int a2)
{
  return RtlPosixBarrier(a1, a2);
}
