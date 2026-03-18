/*
 * XREFs of AcpiPccSyncCompletionCallback @ 0x1C005A1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall AcpiPccSyncCompletionCallback(int a1, __int64 a2)
{
  *(_DWORD *)(a2 + 40) = a1;
  return KeSetEvent((PRKEVENT)(a2 + 16), 0, 0);
}
