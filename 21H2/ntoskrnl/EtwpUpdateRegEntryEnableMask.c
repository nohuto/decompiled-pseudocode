/*
 * XREFs of EtwpUpdateRegEntryEnableMask @ 0x1406BB9AC
 * Callers:
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidRemoval @ 0x1409340BC (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     EtwpApplyScopeFilters @ 0x140638F28 (EtwpApplyScopeFilters.c)
 *     EtwpTrackDecodeGuidForSession @ 0x140941364 (EtwpTrackDecodeGuidForSession.c)
 */

char __fastcall EtwpUpdateRegEntryEnableMask(__int64 a1, __int64 a2, char a3, char a4, char a5, int a6)
{
  __int64 v9; // rbx
  __int16 v10; // ax
  char v12; // [rsp+58h] [rbp+20h] BYREF

  if ( a4 )
    v9 = a5 != 0 ? 103LL : 101LL;
  else
    v9 = a5 != 0 ? 102LL : 100LL;
  LOBYTE(v10) = a6;
  if ( a6 == 1 )
  {
    v12 = a3;
    EtwpApplyScopeFilters(a1, 1, a4, a5, &v12);
    v10 = *(_WORD *)(a1 + 98);
    if ( (v10 & 8) != 0 )
    {
      LOBYTE(v10) = v12;
      *(_BYTE *)(a1 + 100) = v12;
    }
    else
    {
      if ( (v10 & 0x400) != 0 )
      {
        if ( v12 )
        {
          LOBYTE(v10) = EtwpTrackDecodeGuidForSession(a2, a1);
          if ( !(_BYTE)v10 )
          {
            LOBYTE(v10) = -1;
            _InterlockedAnd16((volatile signed __int16 *)(a1 + 98), 0xFBFFu);
          }
        }
      }
      *(_BYTE *)(v9 + a1) = v12 | *(_BYTE *)(v9 + a1) & ~a3;
    }
  }
  else if ( !a6 && (*(_BYTE *)(a1 + 98) & 8) == 0 )
  {
    *(_BYTE *)(v9 + a1) &= ~a3;
  }
  return v10;
}
