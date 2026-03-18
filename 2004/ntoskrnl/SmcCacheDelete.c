/*
 * XREFs of SmcCacheDelete @ 0x140929E74
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409271E8 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140927448 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x14092AFD0 (SmcVolumePnpNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     SmcCacheCleanup @ 0x140929DF0 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x14092A180 (SmcCacheRemove.c)
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
