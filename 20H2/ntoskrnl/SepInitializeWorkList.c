/*
 * XREFs of SepInitializeWorkList @ 0x140A6664C
 * Callers:
 *     SepInitializationPhase0 @ 0x140A65570 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140C544F0);
  qword_140C54558 = 0LL;
  qword_140C544D8 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140C545A8 = (__int64)ExFreePoolWithTag;
  qword_140C544E8 = (__int64)&qword_140C544E0;
  qword_140C544E0 = (__int64)&qword_140C544E0;
  qword_140C545A0 = (__int64)SepAdtDetermineInsertQueue;
  word_140C545B0 = 3;
  ExInitializeResourceLite(&stru_140C543B0);
  qword_140C54468 = (__int64)ExFreePoolWithTag;
  qword_140C54398 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140C54470 = 1;
  return result;
}
