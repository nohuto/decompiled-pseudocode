/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x14026B440
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x14038FBD0 (ExFreeAutoExpandPushLock.c)
 *     MmDeleteProcessAddressSpace @ 0x14061D27C (MmDeleteProcessAddressSpace.c)
 *     MiDeleteAweInfo @ 0x1408D2844 (MiDeleteAweInfo.c)
 * Callees:
 *     ExSaFree @ 0x1403919AC (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
