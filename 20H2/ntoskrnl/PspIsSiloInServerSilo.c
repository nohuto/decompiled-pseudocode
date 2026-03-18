/*
 * XREFs of PspIsSiloInServerSilo @ 0x14057F5B0
 * Callers:
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14023CDA0 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall PspIsSiloInServerSilo(__int64 a1)
{
  return PsGetEffectiveServerSilo(a1) != 0;
}
