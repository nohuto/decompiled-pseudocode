/*
 * XREFs of EtwpUpdatePidFilterData @ 0x140940DE0
 * Callers:
 *     EtwpUpdateFilterData @ 0x1406BA5B0 (EtwpUpdateFilterData.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdatePidFilterData(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // edi
  _DWORD *PoolWithTag; // rax

  v3 = 0;
  if ( a3 )
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 8) >> 2;
    if ( v6 <= 8 )
    {
      PoolWithTag = *(_DWORD **)(a1 + 8);
      if ( !PoolWithTag )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x46777445u);
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a1 + 8) = PoolWithTag;
      }
      *PoolWithTag = v6;
      memmove(PoolWithTag + 1, *(const void **)a2, 4LL * v6);
      return v3;
    }
    return (unsigned int)-1073741811;
  }
  return v3;
}
