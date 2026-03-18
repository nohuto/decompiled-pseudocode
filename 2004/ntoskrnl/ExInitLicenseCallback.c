/*
 * XREFs of ExInitLicenseCallback @ 0x1407C2278
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     ExCreateCallback @ 0x14070B0F0 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  __int64 v0; // rbx
  NTSTATUS result; // eax

  v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  result = ExCreateCallback((PCALLBACK_OBJECT *)(v0 + 37472), (POBJECT_ATTRIBUTES)&stru_140981300, 1u, 1u);
  if ( result < 0 )
    *(_QWORD *)(v0 + 37472) = 0LL;
  return result;
}
