/*
 * XREFs of MiUnloadHotPatchForUserSid @ 0x1408C9FC4
 * Callers:
 *     NtManageHotPatch @ 0x1408CA3F0 (NtManageHotPatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiDeleteHotPatchRecord @ 0x1408C50AC (MiDeleteHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x1408C54FC (MiFindUserSidHotPatchContext.c)
 *     MiHotPatchAllProcesses @ 0x1408C5928 (MiHotPatchAllProcesses.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUnloadHotPatchForUserSid(void *a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v3; // rbp
  unsigned __int64 *UserSidHotPatchContext; // rax
  unsigned __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

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
    ExfTryToWakePushLock(&MiHotPatchListLock);
  KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v8, v9, v10);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  MiHotPatchAllProcesses(*a2, a2[1]);
  return 0LL;
}
