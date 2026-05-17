/*
 * XREFs of _AlpcAdjustCompletionListConcurrencyCount@8 @ 0x4B33E980
 * Callers:
 *     <none>
 * Callees:
 *     _NtAlpcSetInformation@16 @ 0x4B2F3250 (_NtAlpcSetInformation@16.c)
 */

int __stdcall AlpcAdjustCompletionListConcurrencyCount(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = a2;
  return NtAlpcSetInformation(a1, 8, (int)&v3, 4);
}
