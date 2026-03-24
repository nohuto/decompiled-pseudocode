/*
 * XREFs of ExInitLicenseCallback @ 0x1407D4EA8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     ExCreateCallback @ 0x1406BD240 (ExCreateCallback.c)
 */

NTSTATUS __fastcall ExInitLicenseCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS result; // eax

  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 113);
  result = ExCreateCallback((PCALLBACK_OBJECT *)(v2 + 46848), (POBJECT_ATTRIBUTES)&stru_140984820, 1u, 1u);
  if ( result < 0 )
    *(_QWORD *)(v2 + 46848) = 0LL;
  return result;
}
