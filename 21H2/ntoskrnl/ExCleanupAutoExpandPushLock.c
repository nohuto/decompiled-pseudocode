/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x140273E60
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x140392650 (ExFreeAutoExpandPushLock.c)
 *     MmDeleteProcessAddressSpace @ 0x14067C848 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteAweInfo @ 0x1408D5FA4 (MiDeleteAweInfo.c)
 * Callees:
 *     ExSaFree @ 0x14039442C (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
