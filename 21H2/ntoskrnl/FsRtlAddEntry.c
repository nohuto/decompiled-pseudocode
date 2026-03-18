/*
 * XREFs of FsRtlAddEntry @ 0x14022C788
 * Callers:
 *     FsRtlRemoveBaseMcbEntry @ 0x14022BDA0 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x14022C220 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlSplitBaseMcb @ 0x140541550 (FsRtlSplitBaseMcb.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x140203D50 (ExFreeToPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall FsRtlAddEntry(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // r14
  unsigned int v5; // ecx
  unsigned int v7; // r9d
  char result; // al
  unsigned int v9; // r8d
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  PVOID PoolWithTag; // rax
  PVOID v13; // rsi
  void *v14; // rdx

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)a1;
  if ( v5 + a3 <= *(_DWORD *)a1 )
  {
LABEL_2:
    if ( (unsigned int)v4 < v5 )
    {
      memmove(
        (void *)(*(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(v4 + a3)),
        (const void *)(*(_QWORD *)(a1 + 16) + 8 * v4),
        8LL * (v5 - (unsigned int)v4));
      v5 = *(_DWORD *)(a1 + 4);
    }
    result = 1;
    *(_DWORD *)(a1 + 4) = a3 + v5;
    return result;
  }
  v9 = 2 * v7;
  if ( v7 >= 0x800 )
    v9 = v7 + 2048;
  v10 = 8LL * v9;
  v11 = v9;
  if ( v10 <= 0xFFFFFFFF )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(unsigned __int16 *)(a1 + 8), (unsigned int)v10, 0x6D695346u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a1 + 16), 8LL * *(unsigned int *)(a1 + 4));
      if ( *(_DWORD *)a1 == 15 )
      {
        v14 = *(void **)(a1 + 16);
        if ( *(_WORD *)(a1 + 8) == 1 )
          ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlFirstPagedMappingLookasideList, v14);
        else
          ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, v14);
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
      }
      v5 = *(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v13;
      *(_DWORD *)a1 = v11;
      goto LABEL_2;
    }
  }
  if ( (*(_BYTE *)(a1 + 10) & 1) != 0 )
    RtlRaiseStatus(3221225626LL);
  return 0;
}
