/*
 * XREFs of CmCleanupServerSiloState @ 0x14086FFD8
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140902E78 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1402056B0 (PsGetPermanentSiloContext.c)
 *     CmpStopSiloKeyLockTracker @ 0x14086F578 (CmpStopSiloKeyLockTracker.c)
 */

ULONG_PTR *__fastcall CmCleanupServerSiloState(__int64 a1)
{
  ULONG_PTR *result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
  result = (ULONG_PTR *)PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &BugCheckParameter2);
  if ( BugCheckParameter2 )
    return CmpStopSiloKeyLockTracker(BugCheckParameter2);
  return result;
}
