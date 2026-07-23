/*
 * XREFs of ExpAllocateLowLevelTable @ 0x140695B14
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x140616ACC (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTable @ 0x14069577C (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140695888 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x140695B48 (ExpAllocateTablePagedPoolNoZero.c)
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
