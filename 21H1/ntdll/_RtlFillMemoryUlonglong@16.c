/*
 * XREFs of _RtlFillMemoryUlonglong@16 @ 0x4B307FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlFillMemoryUlonglong(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  int result; // eax

  *a1 = a3;
  result = a4;
  a1[1] = a4;
  qmemcpy(a1 + 2, a1, 4 * ((a2 >> 2) - 2));
  return result;
}
