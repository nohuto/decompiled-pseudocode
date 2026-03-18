/*
 * XREFs of SmcCacheDelete @ 0x14092FC9C
 * Callers:
 *     SmcProcessCreateRequest @ 0x14092D010 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x14092D270 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x140930E00 (SmcVolumePnpNotification.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     SmcCacheCleanup @ 0x14092FC18 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x14092FFA8 (SmcCacheRemove.c)
 */

__int64 __fastcall SmcCacheDelete(__int64 a1)
{
  __int64 v2; // rax
  struct _PRIVILEGE_SET *v3; // rbx

  v2 = SmcCacheRemove();
  v3 = (struct _PRIVILEGE_SET *)v2;
  if ( !v2 )
    return 3221225561LL;
  SmcCacheCleanup(v2);
  CmSiFreeMemory(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
