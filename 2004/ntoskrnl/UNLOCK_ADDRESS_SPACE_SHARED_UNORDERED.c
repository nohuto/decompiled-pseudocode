/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1405501B0
 * Callers:
 *     MiLockVadRange @ 0x1406022F8 (MiLockVadRange.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 1224));
  KeAbPostRelease(v3);
  *(_BYTE *)(a1 + 1304) &= ~2u;
  return KiLeaveGuardedRegionUnsafe(a1);
}
