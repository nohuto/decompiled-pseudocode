/*
 * XREFs of PspJobIsAppSilo @ 0x14057F5CC
 * Callers:
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x14023CE40 (PsIsServerSilo.c)
 */

bool __fastcall PspJobIsAppSilo(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1320) & 0x40000000) != 0 )
    return !PsIsServerSilo(a1);
  return v1;
}
