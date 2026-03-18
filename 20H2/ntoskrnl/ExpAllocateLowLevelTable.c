/*
 * XREFs of ExpAllocateLowLevelTable @ 0x1406F5960
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1406F4A98 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTable @ 0x1406F55C8 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406F56D4 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406F5994 (ExpAllocateTablePagedPoolNoZero.c)
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
