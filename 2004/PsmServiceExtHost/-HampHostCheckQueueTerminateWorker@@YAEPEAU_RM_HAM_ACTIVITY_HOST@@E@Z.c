/*
 * XREFs of ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x1800061B8
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180005204 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 * Callees:
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800062F8 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006850 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006990 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

unsigned __int8 __fastcall HampHostCheckQueueTerminateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  unsigned int v4; // edx
  char v5; // di
  unsigned int IsSuspendWaiter; // eax
  unsigned int v7; // ebp
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  if ( HampHostShouldTerminate(a1) )
  {
    if ( (*((_QWORD *)a1 + 81) & 0x800000000LL) == 0 )
    {
      IsSuspendWaiter = HampHostIsSuspendWaiter(a1, v4);
      *((_QWORD *)a1 + 81) |= 0x800000000uLL;
      v7 = IsSuspendWaiter;
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*((_QWORD *)a1 + 78));
      HampHostCheckUpdateSuspendWaitState(a1, v7);
    }
    if ( a2 && (*((_DWORD *)a1 + 162) & 0x30000LL) != 0 )
    {
      do
      {
        v9 = *((_QWORD *)a1 + 100);
        HampHostReleaseLockExclusiveEx(a1, v4);
        RmpReleaseGlobalLock();
        RtlWaitOnAddress((char *)a1 + 800, &v9, 8LL);
        RmpAcquireGlobalLock();
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
      while ( (*((_DWORD *)a1 + 162) & 0x30000LL) != 0 );
    }
    return 1;
  }
  return v5;
}
