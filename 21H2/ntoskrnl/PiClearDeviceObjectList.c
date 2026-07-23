/*
 * XREFs of PiClearDeviceObjectList @ 0x140739560
 * Callers:
 *     PiAllocateDeviceObjectList @ 0x1407394A8 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x140739510 (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x1408B2A30 (PipGrowDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
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
