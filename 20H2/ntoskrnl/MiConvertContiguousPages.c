/*
 * XREFs of MiConvertContiguousPages @ 0x140334AA4
 * Callers:
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiPfnZeroingNeeded @ 0x1402C7380 (MiPfnZeroingNeeded.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140334EC0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     MiChangePageAttributeBatch @ 0x1403495C4 (MiChangePageAttributeBatch.c)
 *     MiIsFreeZeroPfnCold @ 0x14034D3C0 (MiIsFreeZeroPfnCold.c)
 */

__int64 __fastcall MiConvertContiguousPages(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebp
  unsigned __int64 *v6; // rdi
  __int64 v7; // r9
  unsigned __int64 *v8; // rsi
  int IsFreeZeroPfnCold; // r15d
  BOOL v10; // r14d
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v5 = 1;
  MiSetOriginalPtePfnFromFreeList(&v18);
  v6 = 0LL;
  v8 = &a1[6 * v7];
  if ( a1 != v8 )
  {
    do
    {
      IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1);
      v10 = MiPfnZeroingNeeded((__int64)a1, a3);
      v11 = 0;
      if ( !v10 )
        v11 = v5;
      v5 = v11;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(a1) )
      {
        v12 = *a1 & 0xFFFFFFF000000000uLL;
        *a1 = v12;
        if ( IsFreeZeroPfnCold )
        {
          v12 |= 2uLL;
          *a1 = v12;
        }
        a1[2] = (unsigned __int64)v6;
        v6 = a1;
        if ( v10 )
          *a1 = v12 | 1;
      }
      else
      {
        v13 = v18 & -(__int64)v10;
        a1[2] = v13;
        if ( IsFreeZeroPfnCold )
          a1[2] = MiUpdatePageFileHighInPte(v13, 4294967293LL);
      }
      a1 += 6;
    }
    while ( a1 != v8 );
    if ( v6 )
    {
      MiChangePageAttributeBatch(v6, a3, -1LL);
      do
      {
        v14 = *v6;
        v15 = (unsigned __int64 *)v6[2];
        v16 = v18 & -(__int64)((*v6 & 1) != 0);
        v6[2] = v16;
        if ( (v14 & 2) != 0 )
          v6[2] = MiUpdatePageFileHighInPte(v16, 4294967293LL);
        *v6 = v14 & 0xFFFFFFF000000000uLL;
        v6 = v15;
      }
      while ( v15 );
    }
  }
  return v5;
}
