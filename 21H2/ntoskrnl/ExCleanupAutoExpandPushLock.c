/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1402A3D50
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x14039EB60 (ExFreeAutoExpandPushLock.c)
 *     FsRtlFreeAePushLock @ 0x1405417A0 (FsRtlFreeAePushLock.c)
 *     MmDeleteProcessAddressSpace @ 0x140693C24 (MmDeleteProcessAddressSpace.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406B41F0 (FsRtlTeardownPerFileContexts.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x14071CD2C (FsRtlPTeardownPerFileObjectContexts.c)
 *     MiDeleteAweInfo @ 0x14097CFDC (MiDeleteAweInfo.c)
 * Callees:
 *     ExSaFree @ 0x140360F40 (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
