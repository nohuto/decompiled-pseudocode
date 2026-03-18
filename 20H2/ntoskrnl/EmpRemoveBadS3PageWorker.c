/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x14088CFF0
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x1405BAD00 (WheaPersistBadPageToBcd.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistBadPageToBcd((unsigned int)EmpBadS3Page);
}
