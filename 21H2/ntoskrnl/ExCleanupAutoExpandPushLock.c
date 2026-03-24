/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x140296D80
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x140392500 (ExFreeAutoExpandPushLock.c)
 *     MmDeleteProcessAddressSpace @ 0x140682D54 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteAweInfo @ 0x1408D5E44 (MiDeleteAweInfo.c)
 * Callees:
 *     ExSaFree @ 0x1403942DC (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
