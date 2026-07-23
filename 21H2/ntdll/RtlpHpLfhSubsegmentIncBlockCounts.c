/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x18008A6D4
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        int a6,
        char *a7)
{
  int v7; // r14d
  char v10; // r10
  char v11; // cl
  __int64 v12; // r8
  __int64 v13; // r12
  signed __int16 *v14; // rdi
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // ebp
  signed __int16 *v19; // r13
  signed __int16 v20; // ax
  signed __int16 v22; // tt

  v7 = a6;
  if ( a6 )
    v10 = *a7;
  else
    v10 = -1;
  v11 = *(_BYTE *)(a2 + 44);
  v12 = a3 >> v11;
  v13 = 2 * v12;
  v14 = (signed __int16 *)(2 * v12 + a2 + *(unsigned __int16 *)(a2 + 46));
  _m_prefetchw(v14);
  v15 = -1;
  v16 = ((a3 + a4 - 1) >> v11) - (unsigned int)v12 + 1;
  LODWORD(v17) = 0;
  v18 = 0;
  if ( v14 < &v14[v16] )
  {
    v19 = &v14[v16];
    do
    {
      while ( 1 )
      {
        v20 = *v14;
        while ( v20 > 0 )
        {
          v22 = v20;
          v20 = _InterlockedCompareExchange16(v14, v20 + 1, v20);
          if ( v22 == v20 )
            goto LABEL_11;
        }
        if ( v7 )
          break;
        v7 = 1;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
        v10 = -1;
      }
      if ( v20 )
      {
        ++v18;
        v17 = v13 >> 1;
        if ( v15 == -1 )
          v15 = v13 >> 1;
      }
      else
      {
        --v18;
      }
      *v14 = v20 + 1;
LABEL_11:
      ++v14;
      v13 += 2LL;
    }
    while ( v14 < v19 );
    if ( v18 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
        (v18 << *(_BYTE *)(a2 + 44)) / 4096);
    if ( v15 != -1 )
    {
      *a7 = v10;
      v7 = 0;
      *a5 = v17 - v15 + 1;
    }
  }
  if ( v7 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
  return v15;
}
