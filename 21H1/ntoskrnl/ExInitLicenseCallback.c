/*
 * XREFs of ExInitLicenseCallback @ 0x1407BED78
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ExCreateCallback @ 0x1406E71C0 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  __int64 v0; // rbx
  NTSTATUS result; // eax

  v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  result = ExCreateCallback((PCALLBACK_OBJECT *)(v0 + 37472), (POBJECT_ATTRIBUTES)&stru_14097FF90, 1u, 1u);
  if ( result < 0 )
    *(_QWORD *)(v0 + 37472) = 0LL;
  return result;
}
