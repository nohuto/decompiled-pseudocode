/*
 * XREFs of KeIdleSpecCtrl @ 0x140515860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIdleSpecCtrl(__int64 a1, int a2, _BYTE *a3, char a4)
{
  char v5; // al
  unsigned __int16 v6; // r9
  char v7; // al
  __int64 v8; // rdx
  signed __int16 v9; // tt
  __int64 v11; // rdx
  signed __int16 v12; // tt
  char v13; // cl

  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 249) & 1) != 0 )
    {
      v5 = *(_BYTE *)(a1 + 250);
      if ( v5 )
      {
        *(_BYTE *)(a1 + 248) |= 1u;
        *a3 = v5;
      }
    }
    _m_prefetchw((const void *)(a1 + 254));
    v6 = *(_WORD *)(a1 + 254);
    if ( (v6 & 4) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
      {
        v7 = *(_BYTE *)(a1 + 250);
        if ( (v7 & 3) == 0 )
        {
          *(_BYTE *)(a1 + 250) = v7 | 2;
          *a3 |= 2u;
          __writemsr(0x48u, *(unsigned __int8 *)(a1 + 250));
        }
      }
      _InterlockedOr16((volatile signed __int16 *)(a1 + 254), 2u);
      v8 = *(_QWORD *)(a1 + 11696);
      _m_prefetchw((const void *)(v8 + 254));
      do
        v9 = *(_WORD *)(v8 + 254);
      while ( v9 != _InterlockedCompareExchange16((volatile signed __int16 *)(v8 + 254), v9 & 0xFFE4 | 0xA, v9) );
    }
    return v6;
  }
  else
  {
    if ( (a4 & 4) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 11696);
      _m_prefetchw((const void *)(v11 + 254));
      do
        v12 = *(_WORD *)(v11 + 254);
      while ( v12 != _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 254), v12 & 0xFFF5 | 2, v12) );
      if ( (*(_WORD *)(a1 + 254) & 0x10) == 0 )
      {
        v13 = *(_BYTE *)(a1 + 250);
        if ( (v13 & 2) != 0 )
        {
          *(_BYTE *)(a1 + 250) = v13 & 0xFD;
          __writemsr(0x48u, v13 & 0xFD);
        }
      }
    }
    *(_BYTE *)(a1 + 248) &= ~1u;
    return 0LL;
  }
}
