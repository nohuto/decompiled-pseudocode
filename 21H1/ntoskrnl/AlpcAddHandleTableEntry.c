/*
 * XREFs of AlpcAddHandleTableEntry @ 0x140642CE8
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x140611CE0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x140642A04 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1406C2824 (AlpcpCreateReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
        ExFreeToNPagedLookasideList(&stru_140CEBD80, *(PVOID *)a1);
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
