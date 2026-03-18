/*
 * XREFs of ?PlatformAllocate@NSInstrumentation@@YGPAXW4_POOL_TYPE@@II@Z @ 0x92026
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall NSInstrumentation::PlatformAllocate(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
