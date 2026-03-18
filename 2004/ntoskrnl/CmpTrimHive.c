/*
 * XREFs of CmpTrimHive @ 0x140709208
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpUpdatePhaseAccessBit @ 0x1407BC3EC (CmpUpdatePhaseAccessBit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     HvTrimHive @ 0x1407092D8 (HvTrimHive.c)
 */

void __fastcall CmpTrimHive(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // al

  if ( CmpAccessBitForPhase == 2 )
  {
    v2 = *(_DWORD *)(a1 + 4792);
    if ( v2 || (v2 = *(_DWORD *)(a1 + 4796)) != 0 )
    {
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(a1 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
      *(_DWORD *)(a1 + 4800) = *(_DWORD *)(a1 + 272);
      *(_DWORD *)(a1 + 4796) = v2;
      HvTrimHive(a1, v2);
      v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
      KeAbPostRelease(a1 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      KeAbPostRelease(a1 + 72);
      CmpUnlockRegistry();
    }
  }
}
