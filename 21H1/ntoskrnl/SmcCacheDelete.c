/*
 * XREFs of SmcCacheDelete @ 0x140928BC4
 * Callers:
 *     SmcProcessCreateRequest @ 0x140925F38 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140926198 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x140929D20 (SmcVolumePnpNotification.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     SmcCacheCleanup @ 0x140928B40 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x140928ED0 (SmcCacheRemove.c)
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
