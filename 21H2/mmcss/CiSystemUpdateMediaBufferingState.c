/*
 * XREFs of CiSystemUpdateMediaBufferingState @ 0x1C0002F30
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C00013B0 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerTaskIndexYield @ 0x1C00021C0 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002CB0 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0002D80 (CiSchedulerCancelTaskIndexYield.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiSystemUpdateMediaBufferingState(__int64 a1)
{
  __int64 result; // rax

  if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
    && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
  {
    CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
    LOBYTE(a1) = CiTotalTasksBuffering != 0;
    return PoNotifyMediaBuffering(a1);
  }
  return result;
}
