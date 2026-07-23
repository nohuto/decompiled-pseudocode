/*
 * XREFs of MiSetIdealProcessorThread @ 0x140333A84
 * Callers:
 *     MiZeroLargePages @ 0x1402C0D40 (MiZeroLargePages.c)
 *     MiZeroInParallelWorker @ 0x140333530 (MiZeroInParallelWorker.c)
 *     MiGetPagesToZero @ 0x14054E27C (MiGetPagesToZero.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x140257CA0 (KeQueryPriorityThread.c)
 *     KeSetPriorityThread @ 0x1402DAB40 (KeSetPriorityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140333B58 (KeSetIdealProcessorThreadEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033CF00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14033D060 (KeSetSystemGroupAffinityThread.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x14033EC20 (KeFindFirstSetRightGroupAffinity.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 __fastcall MiSetIdealProcessorThread(PGROUP_AFFINITY Affinity)
{
  bool v1; // zf
  struct _KTHREAD *CurrentThread; // rbx
  KPRIORITY v4; // edi
  unsigned int FirstSetRightGroupAffinity; // eax
  int v6; // esi
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+28h] [rbp-20h] BYREF

  v8 = 0;
  v1 = Affinity->Mask == 0;
  PreviousAffinity = 0LL;
  if ( v1 )
    return 0xFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  v4 = KeQueryPriorityThread(CurrentThread) >= 16 ? -1 : KeSetPriorityThread(CurrentThread, 16);
  KeSetSystemGroupAffinityThread(Affinity, &PreviousAffinity);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(Affinity);
  v6 = KeSetIdealProcessorThreadEx(CurrentThread, FirstSetRightGroupAffinity, &v8);
  if ( v4 != -1 )
    KeSetPriorityThread(CurrentThread, v4);
  if ( v6 < 0 )
    return 0xFFFFFFFFLL;
  else
    return v8;
}
