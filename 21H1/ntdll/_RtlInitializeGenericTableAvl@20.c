/*
 * XREFs of _RtlInitializeGenericTableAvl@20 @ 0x4B2ED5D0
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlInitializeGenericTableAvl(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  memset(a1, 0, 0x38u);
  a1[10] = a2;
  a1[11] = a3;
  a1[12] = a4;
  result = a5;
  *a1 = a1;
  a1[13] = a5;
  return result;
}
