/*
 * XREFs of PspLockProcessSecurityShared @ 0x140397560
 * Callers:
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     PspAssignPrimaryToken @ 0x1407A5D14 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessSecurityShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
}
