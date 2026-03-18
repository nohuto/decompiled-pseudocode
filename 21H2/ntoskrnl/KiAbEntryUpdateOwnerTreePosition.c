/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x14035A364
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1403591D8 (KiAbProcessThreadLocks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14035A7F8 (KiAbOwnerComputeCpuPriorityKey.c)
 */

char __fastcall KiAbEntryUpdateOwnerTreePosition(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v5; // rdi
  bool v6; // cl
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  result = KiAbOwnerComputeCpuPriorityKey(a1);
  if ( *(_BYTE *)(a1 + 48) != result )
  {
    v5 = a2 + 48;
    *(_BYTE *)(a1 + 48) = result;
    RtlRbRemoveNode((unsigned __int64 *)v5, a1 + 24);
    v6 = 0;
    v7 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
    {
      if ( v7 )
        v7 ^= v5;
      else
        v7 = 0LL;
    }
    if ( v7 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v7 + 24) > *(_BYTE *)(a1 + 48) )
        {
          v8 = *(_QWORD *)v7;
          if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
          {
            if ( !v8 )
              return RtlRbInsertNodeEx((unsigned __int64 *)v5, v7, v6, a1 + 24);
            v8 ^= v7;
          }
          if ( !v8 )
            return RtlRbInsertNodeEx((unsigned __int64 *)v5, v7, v6, a1 + 24);
        }
        else
        {
          v8 = *(_QWORD *)(v7 + 8);
          if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_9;
            v8 ^= v7;
          }
          if ( !v8 )
          {
LABEL_9:
            v6 = 1;
            return RtlRbInsertNodeEx((unsigned __int64 *)v5, v7, v6, a1 + 24);
          }
        }
        v7 = v8;
      }
    }
    return RtlRbInsertNodeEx((unsigned __int64 *)v5, v7, v6, a1 + 24);
  }
  return result;
}
