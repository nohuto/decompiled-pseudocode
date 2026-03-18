/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x140886180
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x1405B6A80 (WheaPersistBadPageToBcd.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistBadPageToBcd((unsigned int)EmpBadS3Page);
}
