/*
 * XREFs of _EtwpInsertGuidEntry@4 @ 0x4B2F2551
 * Callers:
 *     _EtwpAllocateUmGuidEntry@4 @ 0x4B2F2509 (_EtwpAllocateUmGuidEntry@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlRbInsertNodeEx@16 @ 0x4B2CEB50 (_RtlRbInsertNodeEx@16.c)
 *     _EtwpGuidEntryCompare@8 @ 0x4B2F1D5B (_EtwpGuidEntryCompare@8.c)
 */

signed __int32 __thiscall EtwpInsertGuidEntry(int this)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v2 = EtwpGuidEntryTable;
  if ( (dword_4B3A68A8 & 1) != 0 )
  {
    if ( EtwpGuidEntryTable )
      v2 = (unsigned int)&EtwpGuidEntryTable ^ EtwpGuidEntryTable;
    else
      v2 = 0;
  }
  v3 = dword_4B3A68A8 & 1;
  if ( v2 )
  {
    while ( 1 )
    {
      if ( EtwpGuidEntryCompare((void *)(this + 12), v2) < 0 )
      {
        v4 = *(_DWORD *)v2;
        if ( v3 )
        {
          if ( !v4 )
            break;
          v4 ^= v2;
        }
        if ( !v4 )
          break;
      }
      else
      {
        v4 = *(_DWORD *)(v2 + 4);
        if ( v3 )
        {
          if ( !v4 )
            goto LABEL_15;
          v4 ^= v2;
        }
        if ( !v4 )
        {
LABEL_15:
          RtlRbInsertNodeEx(&EtwpGuidEntryTable, v2, 1, this);
          return RtlReleaseSRWLockExclusive(&EtwpProvLock);
        }
      }
      v2 = v4;
    }
  }
  RtlRbInsertNodeEx(&EtwpGuidEntryTable, v2, 0, this);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
