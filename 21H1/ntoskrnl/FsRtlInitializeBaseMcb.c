/*
 * XREFs of FsRtlInitializeBaseMcb @ 0x1402C1200
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInitializeBaseMcbEx @ 0x1402C1220 (FsRtlInitializeBaseMcbEx.c)
 */

void __stdcall FsRtlInitializeBaseMcb(PBASE_MCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeBaseMcbEx(Mcb, PoolType, 1u);
}
