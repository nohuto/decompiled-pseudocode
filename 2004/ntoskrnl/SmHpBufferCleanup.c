/*
 * XREFs of SmHpBufferCleanup @ 0x14036AC70
 * Callers:
 *     SmHpChunkHeapCleanup @ 0x1403026D4 (SmHpChunkHeapCleanup.c)
 *     SmHpChunkFree @ 0x140306954 (SmHpChunkFree.c)
 * Callees:
 *     SmHpBufferUpdateFullness @ 0x1403096D0 (SmHpBufferUpdateFullness.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmHpBufferCleanup(__int64 a1, _WORD *a2)
{
  int v4; // ebx
  __int64 result; // rax

  SmHpBufferUpdateFullness(a1, (__int64)a2, -a2[5]);
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 16LL);
  ExFreePoolWithTag(*(PVOID *)a2, 0);
  *(_QWORD *)a2 = 0LL;
  result = *(unsigned int *)(a1 + 544);
  *((_DWORD *)a2 + 2) = result;
  *(_DWORD *)(a1 + 544) = v4;
  return result;
}
