/*
 * XREFs of CmpRecoverFlushProtocolStateFromFiles @ 0x140919A88
 * Callers:
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 * Callees:
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14068C0C4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x14091A344 (HvRecoverFlushProtocolStateFromFiles.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpRecoverFlushProtocolStateFromFiles(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  signed int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  signed int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v4 = HvRecoverFlushProtocolStateFromFiles();
  v8 = v4;
  if ( v4 >= 0 )
  {
    CmpLockRegistry(v6, v5, v7);
    ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
    v8 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 + 80);
    KeAbPostRelease(BugCheckParameter2 + 80);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
    KeAbPostRelease(BugCheckParameter2 + 72);
    CmpUnlockRegistry(v10, v9, v11, v12);
    if ( v8 >= 0 )
      return 0;
    else
      SetFailureLocation(a2, 0, 37, v8, 0x20u);
  }
  else
  {
    SetFailureLocation(a2, 0, 37, v4, 0x10u);
  }
  return (unsigned int)v8;
}
