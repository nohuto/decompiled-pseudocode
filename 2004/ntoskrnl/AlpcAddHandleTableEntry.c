/*
 * XREFs of AlpcAddHandleTableEntry @ 0x14060DB98
 * Callers:
 *     AlpcpCreateSection @ 0x14060D8B4 (AlpcpCreateSection.c)
 *     AlpcpCreateSecurityContext @ 0x140689E64 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x1406E2DA4 (AlpcpCreateReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rcx
  PVOID PoolWithTag; // rax
  void *v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rbp
  int v12; // eax

  v2 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v5 = *(unsigned int *)(a1 + 8);
  v6 = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v7 = *(_QWORD **)a1;
    while ( *v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_5;
    }
    *v7 = *a2;
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return v6 + 16;
  }
  else
  {
LABEL_5:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * v5, 0x61486C41u);
    v9 = PoolWithTag;
    v10 = -1LL;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 16LL * *(unsigned int *)(a1 + 8));
      memmove(v9, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
      v11 = *(unsigned int *)(a1 + 8);
      *((_QWORD *)v9 + v11) = *a2;
      if ( *(_DWORD *)(a1 + 8) == 16 )
        ExFreeToNPagedLookasideList(&stru_140CEBCC0, *(PVOID *)a1);
      else
        ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
      v12 = 2 * *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = v9;
      *(_DWORD *)(a1 + 8) = v12;
      v10 = v11 + 16;
    }
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return v10;
  }
}
