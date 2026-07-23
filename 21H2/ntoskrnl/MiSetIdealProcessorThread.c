/*
 * XREFs of MiSetIdealProcessorThread @ 0x14029E170
 * Callers:
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     MiGetPagesToZero @ 0x14054FF8C (MiGetPagesToZero.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402694D0 (KeFindFirstSetRightGroupAffinity.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x14028B7A0 (KeQueryPriorityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14029C098 (KeSetIdealProcessorThreadEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiSetIdealProcessorThread(PGROUP_AFFINITY Affinity)
{
  bool v1; // zf
  struct _KTHREAD *CurrentThread; // rbx
  KPRIORITY v4; // edi
  int FirstSetRightGroupAffinity; // eax
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
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)Affinity);
  v6 = KeSetIdealProcessorThreadEx((__int64)CurrentThread, FirstSetRightGroupAffinity, &v8);
  if ( v4 != -1 )
    KeSetPriorityThread(CurrentThread, v4);
  if ( v6 < 0 )
    return 0xFFFFFFFFLL;
  else
    return v8;
}
