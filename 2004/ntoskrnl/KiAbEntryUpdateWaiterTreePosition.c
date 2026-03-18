/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x14032A618
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x140329FA4 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14038D0C4 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14028B370 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14028C090 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiAbEntryUpdateWaiterTreePosition(unsigned __int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rbx
  bool v5; // cl
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  result = *(_BYTE *)(a1 - 16LL * *(unsigned __int8 *)(a1 + 24) + 195);
  if ( result > 15 )
    result = 15;
  if ( *(_BYTE *)(a1 + 48) != result )
  {
    v4 = a2 + 64;
    *(_BYTE *)(a1 + 48) = result;
    RtlRbRemoveNode((unsigned __int64 *)(a2 + 64), a1);
    v5 = 0;
    v6 = *(_QWORD *)v4;
    if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
    {
      if ( v6 )
        v6 ^= v4;
      else
        v6 = 0LL;
    }
    if ( v6 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v6 + 48) < *(_BYTE *)(a1 + 48) )
        {
          v7 = *(_QWORD *)v6;
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
          {
            if ( !v7 )
              return RtlRbInsertNodeEx((unsigned __int64 *)v4, v6, v5, a1);
            v7 ^= v6;
          }
          if ( !v7 )
            return RtlRbInsertNodeEx((unsigned __int64 *)v4, v6, v5, a1);
        }
        else
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_11;
            v7 ^= v6;
          }
          if ( !v7 )
          {
LABEL_11:
            v5 = 1;
            return RtlRbInsertNodeEx((unsigned __int64 *)v4, v6, v5, a1);
          }
        }
        v6 = v7;
      }
    }
    return RtlRbInsertNodeEx((unsigned __int64 *)v4, v6, v5, a1);
  }
  return result;
}
