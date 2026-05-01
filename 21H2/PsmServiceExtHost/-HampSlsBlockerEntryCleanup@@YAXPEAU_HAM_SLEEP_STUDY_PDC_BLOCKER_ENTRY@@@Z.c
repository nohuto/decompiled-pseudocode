/*
 * XREFs of ?HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x1800833AC
 * Callers:
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180083474 (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 *     ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18008395C (-HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x180083B88 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall HampSlsBlockerEntryCleanup(struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *a1)
{
  __int64 v1; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx

  v1 = *((unsigned __int8 *)a1 + 32);
  if ( (_BYTE)v1 != 5 && (_BYTE)v1 )
    SleepstudyHelperBlockerActiveDereference(*((_QWORD *)a1 + v1 + 8));
  v3 = (_QWORD *)((char *)a1 + 72);
  v4 = 4LL;
  do
  {
    if ( *v3 )
    {
      SleepstudyHelperDestroyBlocker();
      *v3 = 0LL;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( *((_QWORD *)a1 + 7) )
  {
    SleepstudyHelperDestroyBlocker();
    *((_QWORD *)a1 + 7) = 0LL;
  }
  v5 = *((_QWORD *)a1 + 3);
  if ( v5 )
  {
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v5 + 592))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v5 - 64), v6);
    RmpReleaseGlobalLock();
  }
}
