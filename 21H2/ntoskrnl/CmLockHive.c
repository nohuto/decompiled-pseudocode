/*
 * XREFs of CmLockHive @ 0x14071F2B8
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402A4298 (CmpWaitForLateUnloadWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1680, 0LL);
}
