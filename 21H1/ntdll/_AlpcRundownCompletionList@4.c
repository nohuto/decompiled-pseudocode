/*
 * XREFs of _AlpcRundownCompletionList@4 @ 0x4B33ED50
 * Callers:
 *     <none>
 * Callees:
 *     _NtAlpcSetInformation@16 @ 0x4B2F3250 (_NtAlpcSetInformation@16.c)
 */

int __stdcall AlpcRundownCompletionList(int a1)
{
  return NtAlpcSetInformation(a1, 10, 0, 0);
}
