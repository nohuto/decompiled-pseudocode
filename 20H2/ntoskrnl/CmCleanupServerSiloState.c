/*
 * XREFs of CmCleanupServerSiloState @ 0x140875B28
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140908A88 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1402F1680 (PsGetPermanentSiloContext.c)
 *     CmpStopSiloKeyLockTracker @ 0x1408750C8 (CmpStopSiloKeyLockTracker.c)
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
