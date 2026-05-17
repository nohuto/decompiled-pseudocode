/*
 * XREFs of _RtlInitializeBitMap@12 @ 0x4B2ED530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlInitializeBitMap(_DWORD *a1, int a2, int a3)
{
  int result; // eax

  *a1 = a3;
  result = a2;
  a1[1] = a2;
  return result;
}
