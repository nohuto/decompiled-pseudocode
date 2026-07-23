/*
 * XREFs of MiPreparePfnDatabasePageForFree @ 0x1403BA194
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403B9D58 (MiPfnRangeIsZero.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPreparePfnDatabasePageForFree(unsigned __int64 a1, int a2, int a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11[7]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v11[0] = MI_READ_PTE_LOCK_FREE(a1);
  v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v11) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( !a2 && a3 == 3 )
  {
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12, v5, v7, v8);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    --*(_WORD *)(v6 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v9 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v13, v5, v7, v8);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  result = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 24) = result ^ (result ^ (result - 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !a2 )
  {
    result = ZeroPte;
    *(_QWORD *)(v6 + 16) = ZeroPte;
  }
  return result;
}
