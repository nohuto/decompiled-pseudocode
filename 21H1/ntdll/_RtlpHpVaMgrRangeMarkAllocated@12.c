/*
 * XREFs of _RtlpHpVaMgrRangeMarkAllocated@12 @ 0x4B37B2A3
 * Callers:
 *     _RtlpHpVaMgrAlloc@12 @ 0x4B37A845 (_RtlpHpVaMgrAlloc@12.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpHpVaMgrRangeMarkAllocated(int a1, int a2, int a3)
{
  char result; // al

  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)a2 = 4 * (a3 != 0) + 1;
  result = *(_BYTE *)(a1 + 24);
  *(_BYTE *)(a2 + 1) = result;
  return result;
}
