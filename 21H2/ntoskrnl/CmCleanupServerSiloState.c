/*
 * XREFs of CmCleanupServerSiloState @ 0x14087353C
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140906398 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1402A4EC0 (PsGetPermanentSiloContext.c)
 *     CmpStopSiloKeyLockTracker @ 0x140872A78 (CmpStopSiloKeyLockTracker.c)
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
