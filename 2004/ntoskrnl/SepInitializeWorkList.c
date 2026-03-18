/*
 * XREFs of SepInitializeWorkList @ 0x140A5F2EC
 * Callers:
 *     SepInitializationPhase0 @ 0x140A5E210 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140C54470);
  qword_140C544D8 = 0LL;
  qword_140C54458 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140C54528 = (__int64)ExFreePoolWithTag;
  qword_140C54468 = (__int64)&qword_140C54460;
  qword_140C54460 = (__int64)&qword_140C54460;
  qword_140C54520 = (__int64)SepAdtDetermineInsertQueue;
  word_140C54530 = 3;
  ExInitializeResourceLite(&stru_140C54360);
  qword_140C54418 = (__int64)ExFreePoolWithTag;
  qword_140C54348 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140C54420 = 1;
  return result;
}
