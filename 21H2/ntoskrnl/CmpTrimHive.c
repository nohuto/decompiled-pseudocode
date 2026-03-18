/*
 * XREFs of CmpTrimHive @ 0x1406D58E0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpUpdatePhaseAccessBit @ 0x14085ED9C (CmpUpdatePhaseAccessBit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HvTrimHive @ 0x1406D59B8 (HvTrimHive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpTrimHive(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax

  if ( CmpAccessBitForPhase == 2 )
  {
    v2 = *(_DWORD *)(a1 + 4752);
    if ( v2 || (v2 = *(_DWORD *)(a1 + 4756)) != 0 )
    {
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(a1 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
      *(_DWORD *)(a1 + 4760) = *(_DWORD *)(a1 + 280);
      *(_DWORD *)(a1 + 4756) = v2;
      HvTrimHive(a1, v2);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 80);
      KeAbPostRelease(a1 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      KeAbPostRelease(a1 + 72);
      return CmpUnlockRegistry(v4, v3, v5, v6);
    }
  }
  return result;
}
