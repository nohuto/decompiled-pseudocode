/*
 * XREFs of PspReadProcessSecurityDomain @ 0x14057BEC4
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspReadProcessSecurityDomain(__int64 a1)
{
  return *(_QWORD *)(a1 + 2528);
}
