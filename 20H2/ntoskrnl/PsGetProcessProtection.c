/*
 * XREFs of PsGetProcessProtection @ 0x1403281A0
 * Callers:
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessProtection(__int64 a1)
{
  return *(_BYTE *)(a1 + 2170);
}
