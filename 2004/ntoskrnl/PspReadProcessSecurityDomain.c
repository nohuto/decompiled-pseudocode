/*
 * XREFs of PspReadProcessSecurityDomain @ 0x14057C504
 * Callers:
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspReadProcessSecurityDomain(__int64 a1)
{
  return *(_QWORD *)(a1 + 2528);
}
