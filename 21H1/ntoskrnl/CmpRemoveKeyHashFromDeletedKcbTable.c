/*
 * XREFs of CmpRemoveKeyHashFromDeletedKcbTable @ 0x1406938FC
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x14061C14C (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x1406939AC (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHashFromDeletedKcbTable(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1656)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1664) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
