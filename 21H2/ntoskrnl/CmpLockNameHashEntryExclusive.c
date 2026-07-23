/*
 * XREFs of CmpLockNameHashEntryExclusive @ 0x1406DF6CC
 * Callers:
 *     CmpGetNameControlBlock @ 0x1406DF370 (CmpGetNameControlBlock.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmpLockNameHashEntryExclusive(unsigned int a1)
{
  ExAcquirePushLockExclusiveEx(
    (ULONG_PTR)CmpNameCacheTable
  + 16
  * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF),
    0LL);
}
