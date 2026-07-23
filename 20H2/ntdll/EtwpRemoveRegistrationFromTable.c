/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x180050528
 * Callers:
 *     EtwNotificationUnregister @ 0x1800503E0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 */

void __fastcall EtwpRemoveRegistrationFromTable(PRTL_BALANCED_NODE Node)
{
  __m128i si128; // xmm0

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode(&EtwpRegistrationTable, Node);
  si128 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  Node->0 = ($2FC0ACC38DFBCDBC97F9A16F2176FBF3)si128;
  Node->ParentValue = si128.m128i_i64[0];
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
