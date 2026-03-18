/*
 * XREFs of CiSystemUpdateMediaBufferingState @ 0x1C0002A30
 * Callers:
 *     CiSchedulerTaskIndexYield @ 0x1C0001170 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0001F40 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002A80 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0002B50 (CiSchedulerCancelTaskIndexYield.c)
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
