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

void __thiscall EtwpInsertGuidEntry(PRTL_BALANCED_NODE Node)
{
  int Root; // esi
  int v3; // edi
  unsigned int v4; // eax

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (int)EtwpGuidEntryTable.Root;
  if ( (*(_BYTE *)&EtwpGuidEntryTable.0 & 1) != 0 )
  {
    if ( EtwpGuidEntryTable.Root )
      Root = (unsigned int)&EtwpGuidEntryTable ^ (unsigned int)EtwpGuidEntryTable.Root;
    else
      Root = 0;
  }
  v3 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( EtwpGuidEntryCompare(&Node[1], Root) < 0 )
      {
        v4 = *(_DWORD *)Root;
        if ( v3 )
        {
          if ( !v4 )
            break;
          v4 ^= Root;
        }
        if ( !v4 )
          break;
      }
      else
      {
        v4 = *(_DWORD *)(Root + 4);
        if ( v3 )
        {
          if ( !v4 )
            goto LABEL_15;
          v4 ^= Root;
        }
        if ( !v4 )
        {
LABEL_15:
          RtlRbInsertNodeEx(&EtwpGuidEntryTable, (PRTL_BALANCED_NODE)Root, 1u, Node);
          goto LABEL_14;
        }
      }
      Root = v4;
    }
  }
  RtlRbInsertNodeEx(&EtwpGuidEntryTable, (PRTL_BALANCED_NODE)Root, 0, Node);
LABEL_14:
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
