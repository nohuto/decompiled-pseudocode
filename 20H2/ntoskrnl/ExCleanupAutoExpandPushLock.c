/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x140262F60
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x140392090 (ExFreeAutoExpandPushLock.c)
 *     MmDeleteProcessAddressSpace @ 0x140660164 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteAweInfo @ 0x1408D8684 (MiDeleteAweInfo.c)
 * Callees:
 *     ExSaFree @ 0x140393E6C (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
