/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x140313354
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x14064C7FC (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407686B0 (PspSetProcessAffinityUpdateMode.c)
 *     NtGetNextProcess @ 0x1407760C0 (NtGetNextProcess.c)
 *     PspAssignPrimaryToken @ 0x1407A34C4 (PspAssignPrimaryToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 */

_QWORD *__fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v5 = (_QWORD *)(a1 + 1080);
  _InterlockedOr(v7, 0);
  if ( (*v5 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v5);
  return KeLeaveCriticalRegionThread(a2, a2, a3, a4);
}
