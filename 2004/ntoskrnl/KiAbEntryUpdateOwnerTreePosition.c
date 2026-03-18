/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x14032A2B0
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x140329FA4 (KiAbProcessThreadLocks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14028B370 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14028C090 (RtlRbInsertNodeEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14032A828 (KiAbOwnerComputeCpuPriorityKey.c)
 */

char __fastcall KiAbEntryUpdateOwnerTreePosition(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  __int64 v7; // rbx
  bool v8; // cl
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax

  result = KiAbOwnerComputeCpuPriorityKey(a1, a2, a3, a4);
  if ( *(_BYTE *)(a1 + 48) != result )
  {
    v7 = a2 + 48;
    *(_BYTE *)(a1 + 48) = result;
    RtlRbRemoveNode((unsigned __int64 *)v7, a1);
    v8 = 0;
    v9 = *(_QWORD *)v7;
    if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
    {
      if ( v9 )
        v9 ^= v7;
      else
        v9 = 0LL;
    }
    if ( v9 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v9 + 48) > *(_BYTE *)(a1 + 48) )
        {
          v10 = *(_QWORD *)v9;
          if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
          {
            if ( !v10 )
              return RtlRbInsertNodeEx((unsigned __int64 *)v7, v9, v8, a1);
            v10 ^= v9;
          }
          if ( !v10 )
            return RtlRbInsertNodeEx((unsigned __int64 *)v7, v9, v8, a1);
        }
        else
        {
          v10 = *(_QWORD *)(v9 + 8);
          if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_9;
            v10 ^= v9;
          }
          if ( !v10 )
          {
LABEL_9:
            v8 = 1;
            return RtlRbInsertNodeEx((unsigned __int64 *)v7, v9, v8, a1);
          }
        }
        v9 = v10;
      }
    }
    return RtlRbInsertNodeEx((unsigned __int64 *)v7, v9, v8, a1);
  }
  return result;
}
