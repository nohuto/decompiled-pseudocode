/*
 * XREFs of RaidNormalizeDeviceQueue @ 0x1C0007968
 * Callers:
 *     RaidRestartIoQueue @ 0x1C00078AC (RaidRestartIoQueue.c)
 *     RaidUnitCompleteRequest @ 0x1C00079D0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RiNormalizeDeviceQueue @ 0x1C000ACFC (RiNormalizeDeviceQueue.c)
 */

__int64 __fastcall RaidNormalizeDeviceQueue(__int64 a1)
{
  volatile LONG *v1; // rsi
  KIRQL v3; // di
  __int64 v4; // rbx

  v1 = (volatile LONG *)(a1 + 72);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v4 = RiNormalizeDeviceQueue(a1, 0LL);
  ExReleaseSpinLockExclusive(v1, v3);
  return v4;
}
