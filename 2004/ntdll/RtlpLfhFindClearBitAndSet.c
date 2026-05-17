/*
 * XREFs of RtlpLfhFindClearBitAndSet @ 0x1800043D0
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180003FA4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLfhFindClearBitAndSet(unsigned __int64 *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r11
  unsigned __int64 v6; // r10
  __int64 *v8; // rcx
  __int64 *v9; // r10
  __int64 v10; // rbx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // rsi
  __int64 *v17; // rax
  unsigned int v18; // ebx

  v4 = *a1;
  v5 = -1LL;
  v6 = a2;
  v8 = (__int64 *)a1[1];
  if ( v4 >= 0x40 )
  {
    v15 = &v8[(v4 - 1) >> 6];
    v9 = &v8[v6 >> 6];
    v16 = v9;
    do
    {
      if ( *v9 != -1 )
        break;
      v17 = v9++;
      if ( v17 == v15 )
        v9 = v8;
    }
    while ( v9 != v16 );
    if ( v9 == v15 )
    {
      v18 = v4 & 0x3F;
      if ( v18 )
      {
        if ( v18 < (unsigned __int64)a4 )
          a4 = *(_DWORD *)a1 & 0x3F;
      }
    }
  }
  else
  {
    v9 = v8;
    if ( v4 < a4 )
      a4 = v4;
  }
  v10 = *v9;
  v11 = (a4 * a3) >> 7;
  if ( a4 < 0x40 )
  {
    _BitScanForward64(&v12, ~v10);
    LOBYTE(v11) = v12 + v11;
    v5 = ((1LL << a4) - 1) << v12;
  }
  _BitScanForward64(&v13, ~__ROR8__(v10 | ~v5, v11));
  LODWORD(v13) = ((_BYTE)v11 + (_BYTE)v13) & 0x3F;
  *v9 = v10 | (1LL << v13);
  return (unsigned int)v13 + ((unsigned int)((__int64)((__int64)v9 - a1[1]) >> 3) << 6);
}
