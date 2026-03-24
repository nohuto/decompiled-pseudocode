/*
 * XREFs of MiSetIdealProcessorThread @ 0x1402ECE20
 * Callers:
 *     MiZeroLargePages @ 0x140232520 (MiZeroLargePages.c)
 *     MiZeroInParallelWorker @ 0x1402E6010 (MiZeroInParallelWorker.c)
 *     MiGetPagesToZero @ 0x14054FD4C (MiGetPagesToZero.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140257AE0 (KeSetPriorityThread.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x14027B530 (KeFindFirstSetRightGroupAffinity.c)
 *     KeQueryPriorityThread @ 0x1402DA450 (KeQueryPriorityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402EAD48 (KeSetIdealProcessorThreadEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402EB390 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402EB4F0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

__int64 __fastcall MiSetIdealProcessorThread(PGROUP_AFFINITY Affinity)
{
  bool v1; // zf
  struct _KTHREAD *CurrentThread; // rbx
  KPRIORITY v4; // edi
  unsigned int FirstSetRightGroupAffinity; // eax
  _DWORD *v6; // r9
  int v7; // esi
  unsigned int v9; // [rsp+20h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+28h] [rbp-20h] BYREF

  v9 = 0;
  v1 = Affinity->Mask == 0;
  PreviousAffinity = 0LL;
  if ( v1 )
    return 0xFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  v4 = KeQueryPriorityThread(CurrentThread) >= 16 ? -1 : KeSetPriorityThread(CurrentThread, 16);
  KeSetSystemGroupAffinityThread(Affinity, &PreviousAffinity);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)Affinity);
  v7 = KeSetIdealProcessorThreadEx((__int64)CurrentThread, FirstSetRightGroupAffinity, (__int64)&v9, v6);
  if ( v4 != -1 )
    KeSetPriorityThread(CurrentThread, v4);
  if ( v7 < 0 )
    return 0xFFFFFFFFLL;
  else
    return v9;
}
