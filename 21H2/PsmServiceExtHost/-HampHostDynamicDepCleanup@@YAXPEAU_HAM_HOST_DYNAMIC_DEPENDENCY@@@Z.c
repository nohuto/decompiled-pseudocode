/*
 * XREFs of ?HampHostDynamicDepCleanup@@YAXPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x180035E54
 * Callers:
 *     ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180035CE4 (-HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall HampHostDynamicDepCleanup(struct _HAM_HOST_DYNAMIC_DEPENDENCY *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rbx
  __int64 v6; // rdx

  v1 = *((_QWORD *)a1 + 6);
  if ( v1 )
  {
    RmpAcquireGlobalLock();
    v4 = (*(_QWORD *)(v1 + 592))-- == 1LL;
    if ( v4 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v1 - 64), v3);
    RmpReleaseGlobalLock();
  }
  v5 = *((_QWORD *)a1 + 7);
  if ( v5 )
  {
    RmpAcquireGlobalLock();
    v4 = (*(_QWORD *)(v5 + 592))-- == 1LL;
    if ( v4 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v5 - 64), v6);
    RmpReleaseGlobalLock();
  }
}
