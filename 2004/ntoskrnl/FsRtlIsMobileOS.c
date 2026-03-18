/*
 * XREFs of FsRtlIsMobileOS @ 0x140711370
 * Callers:
 *     CcInitializeCacheManager @ 0x140A39658 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

bool FsRtlIsMobileOS()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  return (unsigned int)TmCurrentTransaction(&v1) == -1073741637;
}
