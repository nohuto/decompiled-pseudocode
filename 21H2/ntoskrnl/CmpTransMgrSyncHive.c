/*
 * XREFs of CmpTransMgrSyncHive @ 0x140742834
 * Callers:
 *     CmpTransMgrPrepare @ 0x1407424F0 (CmpTransMgrPrepare.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x14071F430 (HvpMarkDirty.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  CmpLockRegistry(a1, a2, a3);
  HvLockHiveFlusherExclusive(a1);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 1) == 0 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
    v8 = HvpMarkDirty(a1, 0, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 80);
    KeAbPostRelease(a1 + 80);
    if ( v8 < 0 )
    {
      HvUnlockHiveFlusherExclusive(a1);
      CmpUnlockRegistry(v11, v10, v12, v13);
      return (unsigned int)v8;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) |= 1u;
  }
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v5, v4, v6, v7);
  v8 = 0;
  if ( (int)CmpFlushHive(a1, 0) < 0 )
    return (unsigned int)-1073741670;
  return (unsigned int)v8;
}
