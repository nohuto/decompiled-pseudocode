/*
 * XREFs of MiUnlockPageTableCharges @ 0x1402D3FC8
 * Callers:
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiUnlockWsle @ 0x1402D3E4C (MiUnlockWsle.c)
 *     MiUnlockPageTableRange @ 0x14032EDAC (MiUnlockPageTableRange.c)
 *     MiDemoteCombinedPte @ 0x14036AFB0 (MiDemoteCombinedPte.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MiIsLowestPageTablePage @ 0x1402D4204 (MiIsLowestPageTablePage.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockPageTableCharges(__int64 BugCheckParameter2, int a2)
{
  __int64 v2; // rsi
  int IsLowestPageTablePage; // eax
  int v5; // ebp
  unsigned __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  signed __int32 v15; // eax
  int v16; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( a2 == 2 )
  {
    IsLowestPageTablePage = MiIsLowestPageTablePage();
    v5 = 3;
  }
  else
  {
    if ( !a2 )
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
    v16 = 0;
    v9 = v8 & 0xFFFFFFFFFLL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    v10 = *(_QWORD *)(BugCheckParameter2 + 24) ^ ((*(_QWORD *)(BugCheckParameter2 + 24) - 0x10000LL) ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(BugCheckParameter2 + 24) = v10;
    v11 = v10 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v11 >= 0x10000 )
      break;
    if ( !v2 )
      v2 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
    ++v6;
    if ( !v11 && (unsigned int)MiPfnShareCountIsZero(BugCheckParameter2, 0LL) != 3 )
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
            v15 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + v6,
                    CachedResidentAvailable);
            v14 = (_DWORD)CachedResidentAvailable == v15;
            LODWORD(CachedResidentAvailable) = v15;
            if ( v14 )
              goto LABEL_34;
          }
          while ( v15 != -1 && v6 + v15 <= 0x100 );
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
