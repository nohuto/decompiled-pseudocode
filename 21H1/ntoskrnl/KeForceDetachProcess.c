/*
 * XREFs of KeForceDetachProcess @ 0x140308594
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1403145B8 (MmQueryCommitReleaseState.c)
 *     MiUnlockStealVm @ 0x14034B18C (MiUnlockStealVm.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526848 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140526A34 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140526BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1405271D4 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x14098F3C0 (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall KeForceDetachProcess(_OWORD *a1, char a2, __int64 a3, _DWORD *a4)
{
  int v5; // edx
  _OWORD *v6; // rcx
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a2 & 1;
  v6 = v8;
  v8[0] = 0LL;
  if ( a1 )
    v6 = a1;
  memset(&v8[1], 0, 32);
  return KiUnstackDetachProcess((__int64)v6, (unsigned int)(2 * v5 + 1), a3, a4);
}
