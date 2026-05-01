/*
 * XREFs of CrmGlobalsRegistrationsDeleteRoutine @ 0x1800851AC
 * Callers:
 *     CrmGlobalsRegistrationRemoveAll @ 0x18008508C (CrmGlobalsRegistrationRemoveAll.c)
 * Callees:
 *     CrmRegistrationCleanup @ 0x180036274 (CrmRegistrationCleanup.c)
 */

BOOLEAN __fastcall CrmGlobalsRegistrationsDeleteRoutine(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 32);
  CrmRegistrationCleanup((_QWORD *)(a1 - 32), 0);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
}
