/*
 * XREFs of MiConvertContiguousPages @ 0x14034534C
 * Callers:
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1403454FC (MiPageAttributeBatchChangeNeeded.c)
 *     MiPfnZeroingNeeded @ 0x140349390 (MiPfnZeroingNeeded.c)
 *     MiIsFreeZeroPfnCold @ 0x14034B978 (MiIsFreeZeroPfnCold.c)
 *     MiChangePageAttributeBatch @ 0x1403530A0 (MiChangePageAttributeBatch.c)
 */

__int64 __fastcall MiConvertContiguousPages(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 *v9; // rdi
  unsigned __int64 *v10; // rsi
  int IsFreeZeroPfnCold; // r15d
  int v12; // r14d
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 *v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  v5 = 1;
  MiSetOriginalPtePfnFromFreeList(&v20);
  v9 = 0LL;
  v10 = &a1[6 * v8];
  if ( a1 != v10 )
  {
    do
    {
      IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1, v6, v7, v8);
      v12 = MiPfnZeroingNeeded(a1, a3);
      v13 = 0;
      if ( !v12 )
        v13 = v5;
      v5 = v13;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(a1) )
      {
        v14 = *a1 & 0xFFFFFFF000000000uLL;
        *a1 = v14;
        if ( IsFreeZeroPfnCold )
        {
          v14 |= 2uLL;
          *a1 = v14;
        }
        a1[2] = (unsigned __int64)v9;
        v9 = a1;
        if ( v12 )
          *a1 = v14 | 1;
      }
      else
      {
        v15 = v20 & -(__int64)(v12 != 0);
        a1[2] = v15;
        if ( IsFreeZeroPfnCold )
          a1[2] = MiUpdatePageFileHighInPte(v15, 4294967293LL);
      }
      a1 += 6;
    }
    while ( a1 != v10 );
    if ( v9 )
    {
      MiChangePageAttributeBatch(v9, a3, -1LL);
      do
      {
        v16 = *v9;
        v17 = (unsigned __int64 *)v9[2];
        v18 = v20 & -(__int64)((*v9 & 1) != 0);
        v9[2] = v18;
        if ( (v16 & 2) != 0 )
          v9[2] = MiUpdatePageFileHighInPte(v18, 4294967293LL);
        *v9 = v16 & 0xFFFFFFF000000000uLL;
        v9 = v17;
      }
      while ( v17 );
    }
  }
  return v5;
}
