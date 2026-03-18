/*
 * XREFs of GetCoalesceableMouseMessage @ 0x1C00315B0
 * Callers:
 *     <none>
 * Callees:
 *     IsEqualInputSource @ 0x1C0032D10 (IsEqualInputSource.c)
 */

__int64 __fastcall GetCoalesceableMouseMessage(int a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int16 v9; // cx

  v4 = *a2;
  v5 = a3;
  if ( a3 )
  {
    do
    {
      if ( *(_DWORD *)(v5 + 24) != 255 )
        break;
      v5 = *(_QWORD *)(v5 + 8);
    }
    while ( v5 );
    if ( v5
      && (*(_DWORD *)(v5 + 100) & 2) == 0
      && *(_DWORD *)(v5 + 24) == a1
      && (unsigned __int8)IsEqualInputSource(v5 + 120, a4) )
    {
      if ( ((a1 - 522) & 0xFFFFFFFB) != 0 )
        return v5;
      v9 = *(_WORD *)(v5 + 34) + WORD1(v4);
      if ( abs16(v9) <= 0x7FFFu )
      {
        *a2 = (unsigned __int16)v4 | ((unsigned __int64)v9 << 16);
        return v5;
      }
    }
  }
  return 0LL;
}
