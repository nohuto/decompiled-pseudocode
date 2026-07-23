/*
 * XREFs of IopReportBootResources @ 0x140A685C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x140750BDC (PnpDetermineResourceListSize.c)
 *     IopAllocateBootResources @ 0x1407B5F60 (IopAllocateBootResources.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopReportBootResources(unsigned int a1, __int64 a2, _DWORD *a3)
{
  const void *v4; // rdi
  unsigned int v6; // eax
  __int64 v7; // rbx
  size_t v9; // rbp
  PVOID v10; // rax
  _QWORD *PoolWithTag; // rax
  void *v12; // rcx

  v4 = a3;
  v6 = PnpDetermineResourceListSize(a3);
  if ( !v6 )
    return 0LL;
  if ( !a2 )
  {
    v7 = 0LL;
LABEL_10:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x20207050u);
    if ( !PoolWithTag )
    {
      if ( v7 )
      {
        v12 = *(void **)(v7 + 544);
        if ( v12 )
        {
          ExFreePoolWithTag(v12, 0);
          *(_QWORD *)(v7 + 544) = 0LL;
        }
      }
      return 3221225626LL;
    }
    if ( v7 )
      v4 = *(const void **)(v7 + 544);
    PoolWithTag[2] = v4;
    PoolWithTag[1] = a2;
    *PoolWithTag = IopInitReservedResourceList;
    IopInitReservedResourceList = PoolWithTag;
    return 0LL;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  if ( (*(_DWORD *)(v7 + 396) & 1) == 0 )
    return IopAllocateBootResources(a1, a2);
  if ( *(_QWORD *)(v7 + 544) )
    goto LABEL_10;
  v9 = v6;
  v10 = ExAllocatePoolWithTag(PagedPool, v6, 0x20207050u);
  *(_QWORD *)(v7 + 544) = v10;
  if ( v10 )
  {
    memmove(v10, v4, v9);
    goto LABEL_10;
  }
  return 3221225626LL;
}
