/*
 * XREFs of _EngFntCacheAlloc@8 @ 0x1E8646
 * Callers:
 *     <none>
 * Callees:
 *     _EngFntCacheAllocInternal@12 @ 0xECBCE (_EngFntCacheAllocInternal@12.c)
 */

PVOID __stdcall EngFntCacheAlloc(ULONG ulFastCheckSum, ULONG cjSize)
{
  int v3; // [esp+0h] [ebp-4h] BYREF

  return (PVOID)EngFntCacheAllocInternal(ulFastCheckSum, cjSize, &v3);
}
