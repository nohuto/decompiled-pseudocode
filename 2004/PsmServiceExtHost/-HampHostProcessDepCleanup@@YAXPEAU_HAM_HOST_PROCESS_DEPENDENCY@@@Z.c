/*
 * XREFs of ?HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x180035B9C
 * Callers:
 *     ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180035AE4 (-HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall HampHostProcessDepCleanup(struct _HAM_HOST_PROCESS_DEPENDENCY *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // rdx

  if ( *((_QWORD *)a1 + 10) )
    TpReleaseWait();
  if ( *((_QWORD *)a1 + 11) )
    TpReleaseWait();
  v2 = (void *)*((_QWORD *)a1 + 8);
  if ( v2 )
    NtClose(v2);
  v3 = (void *)*((_QWORD *)a1 + 9);
  if ( v3 )
    NtClose(v3);
  v4 = *((_QWORD *)a1 + 6);
  if ( v4 )
  {
    RmpAcquireGlobalLock();
    v6 = (*(_QWORD *)(v4 + 592))-- == 1LL;
    if ( v6 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v4 - 64), v5);
    RmpReleaseGlobalLock();
  }
  v7 = *((_QWORD *)a1 + 7);
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    v6 = (*(_QWORD *)(v7 + 592))-- == 1LL;
    if ( v6 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v7 - 64), v8);
    RmpReleaseGlobalLock();
  }
}
