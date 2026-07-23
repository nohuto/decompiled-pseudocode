/*
 * XREFs of RtlCallEnclave @ 0x1800A0DC0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CCC80 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD710 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x18009E020 (ZwCallEnclave.c)
 */

NTSTATUS __fastcall RtlCallEnclave(LPVOID (__cdecl *a1)(LPVOID), void *a2, ULONG a3, PVOID *a4)
{
  return ZwCallEnclave(a1, a2, a3, a4);
}
