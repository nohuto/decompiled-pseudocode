/*
 * XREFs of KeForceDetachProcess @ 0x140317684
 * Callers:
 *     MmQueryCommitReleaseState @ 0x140322E58 (MmQueryCommitReleaseState.c)
 *     MiUnlockStealVm @ 0x140353A68 (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052A868 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052AA54 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052AC08 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052B1F4 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x1409960D0 (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 __fastcall KeForceDetachProcess(_OWORD *a1, char a2)
{
  int v3; // edx
  _OWORD *v4; // rcx
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a2 & 1;
  v4 = v6;
  v6[0] = 0LL;
  if ( a1 )
    v4 = a1;
  memset(&v6[1], 0, 32);
  return KiUnstackDetachProcess((__int64)v4, 2 * v3 + 1);
}
