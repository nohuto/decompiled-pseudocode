/*
 * XREFs of PiClearDeviceObjectList @ 0x140732EFC
 * Callers:
 *     PiAllocateDeviceObjectList @ 0x140732E44 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x140732EAC (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x1408AF7D0 (PipGrowDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void *__fastcall PiClearDeviceObjectList(_DWORD *a1)
{
  __int64 i; // rdi
  void *result; // rax

  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    ObfDereferenceObjectWithTag(*(PVOID *)&a1[6 * i + 4], 0x4C706E50u);
  result = memset(a1 + 4, 0, 24LL * (unsigned int)a1[1]);
  *a1 = 0;
  a1[2] = 0;
  return result;
}
