/*
 * XREFs of PspIsSiloInServerSilo @ 0x14057B540
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405EFAA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1402D95B0 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall PspIsSiloInServerSilo(__int64 a1)
{
  return PsGetEffectiveServerSilo(a1) != 0;
}
