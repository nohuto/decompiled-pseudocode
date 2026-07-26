/*
 * XREFs of ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1C0039E38
 * Callers:
 *     ?AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z @ 0x1C002BFC0 (-AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z.c)
 *     ndisIfTryAllocatingSuggestedIndex @ 0x1C002C048 (ndisIfTryAllocatingSuggestedIndex.c)
 * Callees:
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall IfIndexRange::Grow(IfIndexRange *this, unsigned int a2)
{
  _RTL_BITMAP_EX *v2; // rsi
  unsigned __int64 v3; // r8
  int v5; // eax
  SIZE_T v6; // rbp
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v8; // r14
  const void *v9; // rdx
  ULONG64 v10; // rdi
  ULONG64 v11; // r8

  v2 = (_RTL_BITMAP_EX *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1);
  if ( a2 <= v3 )
    return 0LL;
  if ( (unsigned int)(*((_DWORD *)this + 1) - *(_DWORD *)this) > v3 )
  {
    v5 = 8;
    if ( a2 >= 8 )
      v5 = a2;
    v6 = (((unsigned __int64)(unsigned int)(v5 + 7) >> 3) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6669444Eu);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = (const void *)*((_QWORD *)this + 2);
      v10 = v2->SizeOfBitMap >> 3;
      if ( v9 )
      {
        memmove(PoolWithTag, v9, v2->SizeOfBitMap >> 3);
        ExFreePoolWithTag(*((PVOID *)this + 2), 0x6669444Eu);
      }
      memset((char *)v8 + v10, 0, v6 - v10);
      v11 = 8 * v6;
      if ( 8 * v6 >= (unsigned int)(*((_DWORD *)this + 1) - *(_DWORD *)this) )
        v11 = (unsigned int)(*((_DWORD *)this + 1) - *(_DWORD *)this);
      RtlInitializeBitMapEx(v2, v8, v11);
      return 0LL;
    }
  }
  return 3221225626LL;
}
