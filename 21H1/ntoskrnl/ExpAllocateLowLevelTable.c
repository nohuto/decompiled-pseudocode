/*
 * XREFs of ExpAllocateLowLevelTable @ 0x1406719B0
 * Callers:
 *     ExpAllocateHandleTable @ 0x140671618 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140671724 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x1406E2724 (ExpAllocateMidLevelTable.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406719E4 (ExpAllocateTablePagedPoolNoZero.c)
 */

_QWORD *__fastcall ExpAllocateLowLevelTable(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExpAllocateTablePagedPoolNoZero(*(_QWORD *)(a1 + 16), 4096LL);
  if ( result )
  {
    *result = 0LL;
    result[1] = a2;
  }
  return result;
}
