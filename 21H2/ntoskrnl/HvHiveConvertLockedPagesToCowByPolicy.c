/*
 * XREFs of HvHiveConvertLockedPagesToCowByPolicy @ 0x140664438
 * Callers:
 *     CmpDoLocalizeNextHive @ 0x140664500 (CmpDoLocalizeNextHive.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x140608574 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 */

__int64 __fastcall HvHiveConvertLockedPagesToCowByPolicy(__int64 a1)
{
  __int64 v1; // rsi
  signed __int64 *v5; // rdi
  volatile signed __int64 *v6; // rbx
  int locked; // esi

  v1 = a1 + 216;
  if ( (*(_DWORD *)(a1 + 248) & 4) != 0 )
  {
    v5 = (signed __int64 *)(a1 + 72);
    ExAcquirePushLockSharedEx(a1 + 72, 0LL);
    v6 = (volatile signed __int64 *)(a1 + 80);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
    locked = HvpViewMapConvertLockedPagesToCOWByPolicy(v1);
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    if ( locked >= 0 )
      return 0;
    return (unsigned int)locked;
  }
  else
  {
    return 0;
  }
}
