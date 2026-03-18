/*
 * XREFs of PsGetProcessProtection @ 0x140357A00
 * Callers:
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessProtection(__int64 a1)
{
  return *(_BYTE *)(a1 + 2170);
}
