/*
 * XREFs of ?MemoryAlloc@@YAPEAX_K@Z @ 0x180454244
 * Callers:
 *     ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x1801D72F0 (-IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall MemoryAlloc(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
