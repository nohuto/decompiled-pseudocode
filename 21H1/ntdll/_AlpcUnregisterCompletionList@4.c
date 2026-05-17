/*
 * XREFs of _AlpcUnregisterCompletionList@4 @ 0x4B33ED70
 * Callers:
 *     <none>
 * Callees:
 *     _NtAlpcSetInformation@16 @ 0x4B2F3250 (_NtAlpcSetInformation@16.c)
 */

int __stdcall AlpcUnregisterCompletionList(int a1)
{
  return NtAlpcSetInformation(a1, 7, 0, 0);
}
