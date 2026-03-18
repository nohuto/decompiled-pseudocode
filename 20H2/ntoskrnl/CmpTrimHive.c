/*
 * XREFs of CmpTrimHive @ 0x1405DADF8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpUpdatePhaseAccessBit @ 0x1407CAC7C (CmpUpdatePhaseAccessBit.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     HvTrimHive @ 0x1406DD28C (HvTrimHive.c)
 */

void __fastcall CmpTrimHive(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx

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
      CmpUnlockRegistry(v5, v4);
    }
  }
}
