/*
 * XREFs of SeQueryTokenIntegrity @ 0x1402D799C
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x1405D879C (EtwpPsProvTraceProcess.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x1402D7648 (SepCopyTokenIntegrity.c)
 */

void __stdcall SeQueryTokenIntegrity(PACCESS_TOKEN Token, PSID_AND_ATTRIBUTES IntegritySA)
{
  SepCopyTokenIntegrity((__int64)Token);
}
