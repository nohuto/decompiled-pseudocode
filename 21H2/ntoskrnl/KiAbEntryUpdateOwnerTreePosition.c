/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x1402FCA20
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1402FBE14 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402FD57C (KiAbOwnerComputeCpuPriorityKey.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14034B830 (RtlRbRemoveNode.c)
 */

BOOLEAN __fastcall KiAbEntryUpdateOwnerTreePosition(PRTL_BALANCED_NODE Node, __int64 a2, __int64 a3)
{
  BOOLEAN result; // al
  __int64 v6; // rbx
  BOOLEAN v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rax

  result = KiAbOwnerComputeCpuPriorityKey(Node, a2, a3);
  if ( LOBYTE(Node[2].Children[0]) != result )
  {
    v6 = a2 + 48;
    LOBYTE(Node[2].Children[0]) = result;
    RtlRbRemoveNode((PRTL_RB_TREE)v6, Node);
    v7 = 0;
    v8 = *(_QWORD *)v6;
    if ( (*(_BYTE *)(v6 + 8) & 1) != 0 )
    {
      if ( v8 )
        v8 ^= v6;
      else
        v8 = 0LL;
    }
    if ( v8 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v8 + 48) > SLOBYTE(Node[2].Children[0]) )
        {
          v9 = *(_QWORD *)v8;
          if ( (*(_BYTE *)(v6 + 8) & 1) != 0 )
          {
            if ( !v9 )
              return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v8, v7, Node);
            v9 ^= v8;
          }
          if ( !v9 )
            return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v8, v7, Node);
        }
        else
        {
          v9 = *(_QWORD *)(v8 + 8);
          if ( (*(_BYTE *)(v6 + 8) & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_9;
            v9 ^= v8;
          }
          if ( !v9 )
          {
LABEL_9:
            v7 = 1;
            return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v8, v7, Node);
          }
        }
        v8 = v9;
      }
    }
    return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v8, v7, Node);
  }
  return result;
}
