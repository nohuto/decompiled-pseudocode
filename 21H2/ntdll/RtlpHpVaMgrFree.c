/*
 * XREFs of RtlpHpVaMgrFree @ 0x180005E4C
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x180005248 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x180005BCC (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrRangeCoalesce @ 0x180005EE8 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpVaMgrFree(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r10
  unsigned __int16 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax

  v3 = RtlpHpVaMgrRangeCoalesce();
  v4 = *(_WORD *)(v3 + 24);
  if ( v4 != *(_WORD *)(a1 + 40) )
  {
    v5 = a1 + 8;
    v6 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v6 )
      v6 ^= v5;
    LOBYTE(v2) = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        if ( v4 < *(_WORD *)(v6 + 24) )
        {
          v7 = *(_QWORD *)v6;
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v7 )
              break;
            v7 ^= v6;
          }
          if ( !v7 )
            break;
        }
        else
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_17;
            v7 ^= v6;
          }
          if ( !v7 )
          {
LABEL_17:
            LOBYTE(v2) = 1;
            break;
          }
        }
        v6 = v7;
      }
    }
    RtlRbInsertNodeEx(v5, v6, v2, v3);
    return 0LL;
  }
  return v3;
}
