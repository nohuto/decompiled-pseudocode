/*
 * XREFs of SepInitializeWorkList @ 0x140A61E38
 * Callers:
 *     SepInitializationPhase0 @ 0x140A60D5C (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140C54570);
  qword_140C545D8 = 0LL;
  qword_140C54558 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140C54628 = (__int64)ExFreePoolWithTag;
  qword_140C54568 = (__int64)&qword_140C54560;
  qword_140C54560 = (__int64)&qword_140C54560;
  qword_140C54620 = (__int64)SepAdtDetermineInsertQueue;
  word_140C54630 = 3;
  ExInitializeResourceLite(&stru_140C54440);
  qword_140C544F8 = (__int64)ExFreePoolWithTag;
  qword_140C54428 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140C54500 = 1;
  return result;
}
