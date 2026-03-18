/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1402D4DE0
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x14038F060 (ExFreeAutoExpandPushLock.c)
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 *     MiDeleteAweInfo @ 0x1408D14F4 (MiDeleteAweInfo.c)
 * Callees:
 *     ExSaFree @ 0x140390E3C (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
