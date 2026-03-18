/*
 * XREFs of PspAdjustKeepAliveCountProcess @ 0x14090A420
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x14020B5C0 (IopDeleteFileObjectExtension.c)
 *     IoIncrementKeepAliveCount @ 0x140505490 (IoIncrementKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x140505AE0 (IopKeepAliveWorker.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1405EE0B0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PspAdjustKeepAliveCountProcess(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v5) = 0;
  PspChargeProcessWakeCounter(a1, a4 == 0 ? 2 : 0, 1u, a3, a2, 0, (int *)&v5);
  return (unsigned int)v5;
}
