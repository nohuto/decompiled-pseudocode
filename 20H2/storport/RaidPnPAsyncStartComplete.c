/*
 * XREFs of RaidPnPAsyncStartComplete @ 0x1C0032620
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaidPnPAsyncStartComplete(__int64 a1, IRP *a2, PIO_WORKITEM *a3)
{
  signed int Status; // r8d

  Status = a2->IoStatus.Status;
  if ( Status < 0 )
    RaidCompleteRequestEx(a2, 0, Status);
  else
    IoQueueWorkItem(*a3, RaidPnPAsyncStartCompleteWorker, HyperCriticalWorkQueue, a3);
  return 3221225494LL;
}
