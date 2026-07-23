/*
 * XREFs of AlpcAddHandleTableEntry @ 0x1406575E8
 * Callers:
 *     AlpcpCreateReserve @ 0x14060FCC4 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x14065540C (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x1406AB6BC (AlpcpCreateSection.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     AlpcpReleasePushLockExclusive @ 0x1408C1D20 (AlpcpReleasePushLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v2; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  PVOID PoolWithTag; // rax
  void *v12; // r14
  __int64 v13; // rbx

  v2 = a1 + 8;
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  if ( v5 )
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
    AlpcpReleasePushLockExclusive(v2);
    return v6 + 16;
  }
  else
  {
LABEL_5:
    v8 = 2 * v5;
    if ( v8 < 0x1FFFFFFFFFFFFFFFLL )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v8, 0x61486C41u);
      v9 = -1LL;
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 8 * v8);
        memmove(v12, *(const void **)a1, 8LL * *(_QWORD *)(a1 + 16));
        v13 = *(_QWORD *)(a1 + 16);
        *((_QWORD *)v12 + v13) = *a2;
        if ( *(_QWORD *)(a1 + 16) == 16LL )
          ExFreeToNPagedLookasideList(&stru_140CEC040, *(PVOID *)a1);
        else
          ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
        *(_QWORD *)a1 = v12;
        v9 = v13 + 16;
        *(_QWORD *)(a1 + 16) = v8;
      }
    }
    else
    {
      v9 = -1LL;
    }
    AlpcpReleasePushLockExclusive(v2);
    return v9;
  }
}
