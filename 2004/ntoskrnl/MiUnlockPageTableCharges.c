/*
 * XREFs of MiUnlockPageTableCharges @ 0x14025E10C
 * Callers:
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiUnlockWsle @ 0x14025DF90 (MiUnlockWsle.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiUnlockPageTableRange @ 0x14035E44C (MiUnlockPageTableRange.c)
 *     MiDemoteCombinedPte @ 0x140368FD0 (MiDemoteCombinedPte.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiIsLowestPageTablePage @ 0x1402604C4 (MiIsLowestPageTablePage.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockPageTableCharges(__int64 BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // rsi
  int IsLowestPageTablePage; // eax
  int v5; // ebp
  unsigned __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v13; // zf
  signed __int32 v14; // eax
  int v15; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (_DWORD)a2 == 2 )
  {
    IsLowestPageTablePage = MiIsLowestPageTablePage();
    v5 = 3;
  }
  else
  {
    if ( !(_DWORD)a2 )
    {
      v5 = 4;
      goto LABEL_7;
    }
    IsLowestPageTablePage = 1;
    v5 = 1;
  }
  if ( !IsLowestPageTablePage )
    goto LABEL_37;
LABEL_7:
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_37:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 40);
    v15 = 0;
    v9 = v8 & 0xFFFFFFFFFLL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15, a2);
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    v10 = *(_QWORD *)(BugCheckParameter2 + 24) ^ ((*(_QWORD *)(BugCheckParameter2 + 24) - 0x10000LL) ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(BugCheckParameter2 + 24) = v10;
    a2 = v10 & 0x3FFFFFFFFFFFFFFFLL;
    if ( a2 >= 0x10000 )
      break;
    if ( !v2 )
      v2 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
    ++v6;
    if ( !a2 && (unsigned int)MiPfnShareCountIsZero(BugCheckParameter2, 0LL) != 3 )
      ++v7;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v5 )
      goto LABEL_21;
    BugCheckParameter2 = 48 * v9 - 0x58000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_21:
  if ( v6 )
  {
    if ( (ULONG_PTR *)v2 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v6 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v6 >= 0x80000 )
              break;
            v14 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + v6,
                    CachedResidentAvailable);
            v13 = (_DWORD)CachedResidentAvailable == v14;
            LODWORD(CachedResidentAvailable) = v14;
            if ( v13 )
              goto LABEL_34;
          }
          while ( v14 != -1 && v6 + v14 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v6 += (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 7168), v6);
  }
LABEL_34:
  if ( v7 )
    MiReturnCommit(v2, v7);
}
