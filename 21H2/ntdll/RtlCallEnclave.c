/*
 * XREFs of RtlCallEnclave @ 0x1800A1600
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CCDE0 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD870 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x18009E810 (ZwCallEnclave.c)
 */

NTSTATUS __fastcall RtlCallEnclave(LPVOID (__cdecl *a1)(LPVOID), void *a2, ULONG a3, PVOID *a4)
{
  return ZwCallEnclave(a1, a2, a3, a4);
}
