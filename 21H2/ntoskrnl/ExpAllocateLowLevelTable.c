/*
 * XREFs of ExpAllocateLowLevelTable @ 0x14062B334
 * Callers:
 *     ExpAllocateHandleTable @ 0x14062AF9C (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14062B0A8 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x14062B444 (ExpAllocateMidLevelTable.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x14062B368 (ExpAllocateTablePagedPoolNoZero.c)
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
