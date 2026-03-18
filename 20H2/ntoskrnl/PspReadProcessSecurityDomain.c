/*
 * XREFs of PspReadProcessSecurityDomain @ 0x14057FF34
 * Callers:
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspReadProcessSecurityDomain(__int64 a1)
{
  return *(_QWORD *)(a1 + 2528);
}
