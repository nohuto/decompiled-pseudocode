/*
 * XREFs of _RtlInitializeGenericTable@20 @ 0x4B2EB660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlInitializeGenericTable(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  *a1 = 0;
  a1[2] = a1 + 1;
  a1[1] = a1 + 1;
  a1[3] = a1 + 1;
  a1[6] = a2;
  a1[7] = a3;
  a1[8] = a4;
  result = a5;
  a1[5] = 0;
  a1[4] = 0;
  a1[9] = a5;
  return result;
}
