/*
 * XREFs of ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x1C00274D0
 * Callers:
 *     NdisAllocateNetBufferListPool @ 0x1C0027240 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateNetBufferPool @ 0x1C0038510 (NdisAllocateNetBufferPool.c)
 * Callees:
 *     memset @ 0x1C00403C0 (memset.c)
 */

struct PPL_POOL_HANDLE__ *__fastcall ndisPplCreatePool(__int64 a1, SIZE_T a2, ULONG a3, __int64 a4, unsigned __int8 a5)
{
  char *v5; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  size_t v12; // rbx
  char *PoolWithTag; // rax
  unsigned __int64 v14; // rdi
  FREE_FUNCTION_EX *v15; // r8
  _SLIST_HEADER *v16; // rbx

  v5 = 0LL;
  v8 = ndisMaxNumberOfProcessors + 1;
  if ( ndisMaxNumberOfProcessors <= 1 )
    v8 = ndisMaxNumberOfProcessors;
  v9 = (unsigned int)v8;
  v11 = v8;
  v10 = v8 << 8;
  if ( is_mul_ok(0x100uLL, v11) )
  {
    v12 = v10 + 128;
    if ( v10 + 128 >= v10 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v10 + 128, a3);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v12);
        v14 = (unsigned __int64)(v5 + 128);
        v15 = (FREE_FUNCTION_EX *)ndisFreeNblToNPagedPool;
        if ( !a5 )
          v15 = (FREE_FUNCTION_EX *)ndisFreeToNPagedPool;
        ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)(v5 + 128),
          (PALLOCATE_FUNCTION_EX)ndisAllocateFromNPagedPool,
          v15,
          NonPagedPoolNx,
          0,
          a2,
          a3,
          0x400u);
        v5[344] = 1;
        if ( (_DWORD)v9 )
        {
          v16 = (_SLIST_HEADER *)(v5 + 256);
          do
          {
            InitializeSListHead(v16);
            KeInitializeSpinLock(&v16[5].Alignment);
            v16[4].Alignment = v14;
            v14 += 256LL;
            v16[4].Region = (unsigned __int64)v16;
            v16 += 16;
            --v9;
          }
          while ( v9 );
        }
      }
    }
  }
  return (struct PPL_POOL_HANDLE__ *)v5;
}
