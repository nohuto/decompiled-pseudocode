/*
 * XREFs of CmpTransMgrSyncHive @ 0x14074E110
 * Callers:
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x14074D24C (CmpTransMgrCommit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x140699C70 (HvpMarkDirty.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR BugCheckParameter2)
{
  volatile signed __int64 *v2; // rdi
  char v3; // bl
  int v4; // esi
  char v6; // r14
  char v7; // cl

  CmpLockRegistry();
  v2 = (volatile signed __int64 *)(BugCheckParameter2 + 72);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 72, 0LL);
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0 )
    goto LABEL_2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  v6 = HvpMarkDirty(BugCheckParameter2, 0, 0x20u, 0);
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(BugCheckParameter2 + 80);
  KeAbPostRelease(BugCheckParameter2 + 80);
  if ( v6 )
  {
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
LABEL_2:
    v3 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
      ExfTryToWakePushLock(BugCheckParameter2 + 72);
    KeAbPostRelease(BugCheckParameter2 + 72);
    CmpUnlockRegistry();
    v4 = CmpFlushHive(BugCheckParameter2, 0);
    if ( v4 < 0 )
      return (unsigned int)-1073741670;
    return (unsigned int)v4;
  }
  v4 = -1073741670;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  CmpUnlockRegistry();
  return (unsigned int)v4;
}
