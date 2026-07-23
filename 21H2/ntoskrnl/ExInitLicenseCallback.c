/*
 * XREFs of ExInitLicenseCallback @ 0x1407D5018
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExCreateCallback @ 0x14061C450 (ExCreateCallback.c)
 */

NTSTATUS __fastcall ExInitLicenseCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS result; // eax

  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 113);
  result = ExCreateCallback((PCALLBACK_OBJECT *)(v2 + 46848), (POBJECT_ATTRIBUTES)&stru_1409849D0, 1u, 1u);
  if ( result < 0 )
    *(_QWORD *)(v2 + 46848) = 0LL;
  return result;
}
