/*
 * XREFs of SmmInitializeLogicalPool @ 0x1C006FEB8
 * Callers:
 *     SmmInitializeLogicalAllocator @ 0x1C03C1540 (SmmInitializeLogicalAllocator.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmInitializeLogicalPool(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
}
