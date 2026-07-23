/*
 * XREFs of MiUnlockPageTableCharges @ 0x14025DD38
 * Callers:
 *     MiUnlockPageTableRange @ 0x14024F2AC (MiUnlockPageTableRange.c)
 *     MiUnlockWsle @ 0x14025DBBC (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 * Callees:
 *     MiIsLowestPageTablePage @ 0x14025DF74 (MiIsLowestPageTablePage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiUnlockPageTableCharges(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 i)
{
  __int64 v4; // rsi
  int IsLowestPageTablePage; // eax
  int v7; // ebp
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  __int64 CurrentPrcb; // r8
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rcx
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  bool v18; // zf
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( a2 == 2 )
  {
    IsLowestPageTablePage = MiIsLowestPageTablePage();
    v7 = 3;
  }
  else
  {
    if ( !a2 )
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
  CurrentPrcb = 0x7FFFFFFFFFFFFFFFLL;
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
          KeYieldProcessorEx(&v19);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
      CurrentPrcb = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = *(_QWORD *)(BugCheckParameter2 + 24);
    result = v13 - 0x10000;
    v15 = v13 ^ ((v13 - 0x10000) ^ v13) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(BugCheckParameter2 + 24) = v15;
    v16 = v15 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v16 >= 0x10000 )
      break;
    if ( !v4 )
    {
      result = qword_140C4E688;
      v4 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
    }
    ++v8;
    if ( !v16 )
    {
      result = MiPfnShareCountIsZero(BugCheckParameter2, 0LL);
      CurrentPrcb = 0x7FFFFFFFFFFFFFFFLL;
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
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      v17 = *(int *)(CurrentPrcb + 33564);
      if ( (_DWORD)v17 != -1 )
      {
        for ( i = 256LL; v8 + v17 <= 0x100; result = v8 + (int)result )
        {
          if ( v8 >= 0x80000 )
            break;
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)(CurrentPrcb + 33564),
                                   v17 + v8,
                                   v17);
          v18 = (_DWORD)v17 == (_DWORD)result;
          v17 = (int)result;
          if ( v18 )
            goto LABEL_35;
          if ( (_DWORD)result == -1 )
            break;
        }
        if ( (int)v17 > 192 )
        {
          result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), 192, v17);
          if ( (_DWORD)v17 == (_DWORD)result )
          {
            result = (unsigned int)(v17 - 192);
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
    return MiReturnCommit(v4, v9, CurrentPrcb, i);
  return result;
}
