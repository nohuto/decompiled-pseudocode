/*
 * XREFs of HalpMmAllocCtxAllocBuffer @ 0x1403A4DAC
 * Callers:
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 * Callees:
 *     HalpMmAllocCtxBufferCleanup @ 0x1403A5F70 (HalpMmAllocCtxBufferCleanup.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall HalpMmAllocCtxAllocBuffer(__int64 a1, SIZE_T a2)
{
  SIZE_T v3; // rsi
  SIZE_T v4; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rbx
  PVOID v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rdi

  v3 = a2 >> 4;
  v4 = a2 >> 7;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (a2 >> 7) + 48, 0x626C6148u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, v4 + 48);
  v6[8] = v3;
  *((_QWORD *)v6 + 5) = ((unsigned __int64)v6 + 51) & 0xFFFFFFFFFFFFFFFCuLL;
  *((_QWORD *)v6 + 1) = v6;
  *(_QWORD *)v6 = v6;
  v7 = ExAllocatePoolWithTag(NonPagedPoolNx, a2, 0x426C6148u);
  *((_QWORD *)v6 + 2) = v7;
  if ( v7 )
  {
    v9 = v6;
    v6 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v6 )
    HalpMmAllocCtxBufferCleanup(v8, v6);
  return v9;
}
