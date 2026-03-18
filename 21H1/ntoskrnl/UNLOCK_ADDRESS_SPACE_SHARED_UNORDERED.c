/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x14054FB60
 * Callers:
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  v3 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 1224));
  KeAbPostRelease(v3);
  *(_BYTE *)(a1 + 1304) &= ~2u;
  return KiLeaveGuardedRegionUnsafe(a1, v4, v5, v6);
}
