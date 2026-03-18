/*
 * XREFs of MiUnloadHotPatchForUserSid @ 0x1408CB314
 * Callers:
 *     NtManageHotPatch @ 0x1408CB740 (NtManageHotPatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiDeleteHotPatchRecord @ 0x1408C63FC (MiDeleteHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x1408C684C (MiFindUserSidHotPatchContext.c)
 *     MiHotPatchAllProcesses @ 0x1408C6C78 (MiHotPatchAllProcesses.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUnloadHotPatchForUserSid(void *a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v3; // rbp
  unsigned __int64 *UserSidHotPatchContext; // rax
  unsigned __int64 *v7; // r14

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  UserSidHotPatchContext = MiFindUserSidHotPatchContext(a1);
  v7 = UserSidHotPatchContext;
  if ( UserSidHotPatchContext )
  {
    MiDeleteHotPatchRecord(UserSidHotPatchContext + 3, 1uLL, *a2, a2[1]);
    if ( !v7[3] )
    {
      RtlAvlRemoveNode((unsigned __int64 *)&MiUserSidPatchLists, v7);
      v3 = v7;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&MiHotPatchListLock);
  KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  MiHotPatchAllProcesses(*a2, a2[1]);
  return 0LL;
}
