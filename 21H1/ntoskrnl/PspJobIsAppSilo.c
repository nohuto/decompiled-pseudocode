/*
 * XREFs of PspJobIsAppSilo @ 0x14057B55C
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x1402D9650 (PsIsServerSilo.c)
 */

bool __fastcall PspJobIsAppSilo(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1320) & 0x40000000) != 0 )
    return !PsIsServerSilo(a1);
  return v1;
}
