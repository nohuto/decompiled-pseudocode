/*
 * XREFs of CmCleanupServerSiloState @ 0x1408733DC
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140906238 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14035FF90 (PsGetPermanentSiloContext.c)
 *     CmpStopSiloKeyLockTracker @ 0x140872918 (CmpStopSiloKeyLockTracker.c)
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
