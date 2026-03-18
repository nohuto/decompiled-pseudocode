/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x140351204
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406B57DC (PspDisablePrimaryTokenExchange.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14076AA90 (PspSetProcessAffinityUpdateMode.c)
 *     NtGetNextProcess @ 0x1407784D0 (NtGetNextProcess.c)
 *     PspAssignPrimaryToken @ 0x1407A5D14 (PspAssignPrimaryToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140351244 (ExfAcquireReleasePushLockExclusive.c)
 */

_QWORD *__fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (_QWORD *)(a1 + 1080);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread(a2);
}
