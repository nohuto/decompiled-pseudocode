/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x14088A6F0
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x1405BC980 (WheaPersistBadPageToBcd.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistBadPageToBcd((UNICODE_STRING *)(unsigned int)EmpBadS3Page);
}
