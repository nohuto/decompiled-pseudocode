/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x14099C730
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 */

void __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAdaptiveLock(0);
  byte_140C1F3A2 = a3 != 0;
  PopReleaseAdaptiveLock();
}
