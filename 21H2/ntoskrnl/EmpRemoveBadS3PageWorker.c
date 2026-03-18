/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x14092CFC0
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x140644D30 (WheaPersistBadPageToBcd.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistBadPageToBcd((unsigned int)EmpBadS3Page);
}
