/*
 * XREFs of PspLockProcessSecurityShared @ 0x140396950
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     PspAssignPrimaryToken @ 0x1407A34C4 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessSecurityShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
}
