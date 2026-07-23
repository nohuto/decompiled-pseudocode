/*
 * XREFs of ExpWnfAllocateScopeInstance @ 0x14061EE7C
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x14069EF64 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfAllocateScopeInstance(_QWORD *a1, int a2, const void *a3, unsigned int a4)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 + 80, 0x20666E57u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x50uLL);
  *v9 = 5245186;
  v9[4] = a2;
  v9[5] = a4;
  if ( a4 )
  {
    *((_QWORD *)v9 + 3) = v9 + 20;
    memmove(v9 + 20, a3, a4);
  }
  *((_QWORD *)v9 + 6) = 0LL;
  *((_QWORD *)v9 + 7) = 0LL;
  result = 0LL;
  *a1 = v9;
  return result;
}
