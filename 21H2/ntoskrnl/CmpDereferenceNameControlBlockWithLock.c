/*
 * XREFs of CmpDereferenceNameControlBlockWithLock @ 0x1406E7088
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x140914D00 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     CmpLockNameHashEntryExclusive @ 0x1406E713C (CmpLockNameHashEntryExclusive.c)
 *     CmpUnlockNameHashEntry @ 0x1406E717C (CmpUnlockNameHashEntry.c)
 */

__int64 __fastcall CmpDereferenceNameControlBlockWithLock(unsigned int *a1)
{
  _DWORD *v1; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax

  v1 = a1 + 2;
  v3 = a1[2];
  CmpLockNameHashEntryExclusive(v3);
  v4 = *a1 & 1 | (2 * (*a1 >> 1) - 2);
  *a1 = v4;
  if ( v4 < 2 )
  {
    v6 = (__int64 *)((char *)CmpNameCacheTable
                   + 16
                   * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF)
                   + 8);
    if ( v6 )
    {
      do
      {
        v7 = *v6;
        if ( !*v6 )
          break;
        if ( (_DWORD *)v7 == v1 )
        {
          *v6 = *(_QWORD *)(v7 + 8);
          break;
        }
        v6 = (__int64 *)(v7 + 8);
      }
      while ( v7 != -8 );
    }
    CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
  }
  return CmpUnlockNameHashEntry(v3);
}
