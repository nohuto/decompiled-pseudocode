/*
 * XREFs of MiUnlockPageTableCharges @ 0x14026FD98
 * Callers:
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiUnlockWsle @ 0x14026FC1C (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiUnlockPageTableRange @ 0x1402D0E1C (MiUnlockPageTableRange.c)
 *     MiDemoteCombinedPte @ 0x14036B260 (MiDemoteCombinedPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiIsLowestPageTablePage @ 0x14026FFD4 (MiIsLowestPageTablePage.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiUnlockPageTableCharges(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  int IsLowestPageTablePage; // eax
  int v7; // ebp
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rcx
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v18; // zf
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( (_DWORD)a2 == 2 )
  {
    IsLowestPageTablePage = MiIsLowestPageTablePage();
    v7 = 3;
  }
  else
  {
    if ( !(_DWORD)a2 )
    {
      v7 = 4;
      goto LABEL_7;
    }
    IsLowestPageTablePage = 1;
    v7 = 1;
  }
  if ( !IsLowestPageTablePage )
    goto LABEL_38;
LABEL_7:
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_38:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    v11 = *(_QWORD *)(BugCheckParameter2 + 40);
    v19 = 0;
    v12 = v11 & 0xFFFFFFFFFLL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v19, a2, v10, a4);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = *(_QWORD *)(BugCheckParameter2 + 24);
    result = v13 - 0x10000;
    v15 = v13 ^ ((v13 - 0x10000) ^ v13) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(BugCheckParameter2 + 24) = v15;
    a2 = v15 & 0x3FFFFFFFFFFFFFFFLL;
    if ( a2 >= 0x10000 )
      break;
    if ( !v4 )
    {
      result = qword_140C4E648;
      v4 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
    }
    ++v8;
    if ( !a2 )
    {
      result = MiPfnShareCountIsZero(BugCheckParameter2);
      v10 = 0x7FFFFFFFFFFFFFFFLL;
      if ( (_DWORD)result != 3 )
        ++v9;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v7 )
      goto LABEL_22;
    BugCheckParameter2 = 48 * v12 - 0x58000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_22:
  if ( v8 )
  {
    result = (unsigned __int64)&MiSystemPartition;
    if ( (ULONG_PTR *)v4 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        for ( ; v8 + CachedResidentAvailable <= 0x100; result = v8 + (int)result )
        {
          if ( v8 >= 0x80000 )
            break;
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                   CachedResidentAvailable + v8,
                                   CachedResidentAvailable);
          v18 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
          CachedResidentAvailable = (int)result;
          if ( v18 )
            goto LABEL_35;
          if ( (_DWORD)result == -1 )
            break;
        }
        if ( (int)CachedResidentAvailable > 192 )
        {
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                   192,
                                   CachedResidentAvailable);
          if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
          {
            result = (unsigned int)(CachedResidentAvailable - 192);
            v8 += (int)result;
          }
        }
      }
    }
    if ( v8 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7168), v8);
  }
LABEL_35:
  if ( v9 )
    return MiReturnCommit(v4, v9);
  return result;
}
