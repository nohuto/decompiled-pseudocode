/*
 * XREFs of CiSchedulerRemoveDeadline @ 0x1C0002E70
 * Callers:
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002CB0 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0002D80 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerThreadFunction @ 0x1C0002F80 (CiSchedulerThreadFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiSchedulerRemoveDeadline(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
  {
    v2 = *(_BYTE *)(a1 + 36) == 0;
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( !v2 )
      *(_BYTE *)(a1 + 36) = 0;
    result = RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1);
    if ( CiSchedulerTimerNode == a1 )
      CiSchedulerTimerNode = 2LL;
  }
  return result;
}
