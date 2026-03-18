/*
 * XREFs of FsRtlInitializeBaseMcb @ 0x140541180
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInitializeBaseMcbEx @ 0x1402021D0 (FsRtlInitializeBaseMcbEx.c)
 */

void __stdcall FsRtlInitializeBaseMcb(PBASE_MCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeBaseMcbEx(Mcb, PoolType, 1u);
}
