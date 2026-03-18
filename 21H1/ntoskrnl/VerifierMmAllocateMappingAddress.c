/*
 * XREFs of VerifierMmAllocateMappingAddress @ 0x1409E31A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfFaultsInjectResourceFailure @ 0x1409D97BC (VfFaultsInjectResourceFailure.c)
 *     VfAllocPoolNotification @ 0x1409DCF44 (VfAllocPoolNotification.c)
 */

__int64 __fastcall VerifierMmAllocateMappingAddress(__int64 a1, unsigned int a2)
{
  __int64 v5; // rbx

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v5 = ((__int64 (__fastcall *)(__int64, _QWORD))pXdvMmAllocateMappingAddress)(a1, a2);
  VfAllocPoolNotification();
  return v5;
}
