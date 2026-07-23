/*
 * XREFs of RtlContinue @ 0x140589E68
 * Callers:
 *     <none>
 * Callees:
 *     NtContinueEx @ 0x1403F6580 (NtContinueEx.c)
 */

NTSTATUS __fastcall RtlContinue(_CONTEXT *a1, void *a2)
{
  return NtContinueEx(a1, a2);
}
