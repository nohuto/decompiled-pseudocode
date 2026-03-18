/*
 * XREFs of ExInitLicenseCallback @ 0x1407D0A78
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     ExCreateCallback @ 0x1406DD3F0 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  __int64 v0; // rbx
  NTSTATUS result; // eax

  v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  result = ExCreateCallback((PCALLBACK_OBJECT *)(v0 + 46848), (POBJECT_ATTRIBUTES)&stru_140987100, 1u, 1u);
  if ( result < 0 )
    *(_QWORD *)(v0 + 46848) = 0LL;
  return result;
}
