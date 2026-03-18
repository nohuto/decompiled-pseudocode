/*
 * XREFs of GreAcquireSemaphoreSharedInternal @ 0x1C007B920
 * Callers:
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquireSemaphoreSharedInternal(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return ExEnterPriorityRegionAndAcquireResourceShared(a1);
  return result;
}
