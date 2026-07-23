/*
 * XREFs of KeForceDetachProcess @ 0x140238598
 * Callers:
 *     MmQueryCommitReleaseState @ 0x140242448 (MmQueryCommitReleaseState.c)
 *     MiUnlockStealVm @ 0x14025B2B0 (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C5A8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C794 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C948 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CF34 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x1409940D0 (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
  return KiUnstackDetachProcess(v4, (unsigned int)(2 * v3 + 1));
}
