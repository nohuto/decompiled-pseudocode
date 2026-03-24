/*
 * XREFs of SupportsOnlyRawAccess @ 0x1C0024D40
 * Callers:
 *     ReadField @ 0x1C0024420 (ReadField.c)
 * Callees:
 *     FindRSAccess @ 0x1C002C490 (FindRSAccess.c)
 */

char __fastcall SupportsOnlyRawAccess(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 RSAccess; // rax
  __int64 v5; // rcx
  char v6; // al

  LOBYTE(v1) = 0;
  if ( *(_WORD *)(a1 + 2) == 5 )
  {
    v3 = **(_QWORD **)(a1 + 32);
    if ( *(_WORD *)(v3 + 66) == 131 )
    {
      RSAccess = FindRSAccess(*(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v3 + 96) + 96LL) + 12LL), 0LL);
      v5 = RSAccess;
      if ( RSAccess )
      {
        if ( *(_QWORD *)(RSAccess + 32) != v1 )
        {
          v6 = v1;
          if ( *(_QWORD *)(v5 + 16) == v1 )
            v6 = 1;
          LOBYTE(v1) = v6;
        }
      }
    }
  }
  return v1;
}
