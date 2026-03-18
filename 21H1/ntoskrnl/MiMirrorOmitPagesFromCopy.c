/*
 * XREFs of MiMirrorOmitPagesFromCopy @ 0x140382B5C
 * Callers:
 *     MiMirrorNodeLargePages @ 0x14038260C (MiMirrorNodeLargePages.c)
 *     MiMirrorReduceBlackWrites @ 0x140382970 (MiMirrorReduceBlackWrites.c)
 *     MiMirrorRemoveBlackChildPartitionPages @ 0x14052F1F0 (MiMirrorRemoveBlackChildPartitionPages.c)
 *     MiMirrorRemoveInactivePages @ 0x14052F254 (MiMirrorRemoveInactivePages.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x1409AD008 (MiRemoveEnclavePagesFromMirror.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     RtlClearBitsEx @ 0x1402AA000 (RtlClearBitsEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiMirrorOmitPagesFromCopy(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  volatile signed __int32 *v9; // rdi
  unsigned int v10; // eax
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  void *v14; // r8
  unsigned __int64 v15; // rdx

  v4 = a3;
  v6 = a3;
  v7 = a2;
  v8 = a2 & 0x1F;
  v9 = (volatile signed __int32 *)(qword_140C4E668 + 4 * (a2 >> 5));
  if ( v8 + v6 > 0x20 )
  {
    if ( (a2 & 0x1F) != 0 )
    {
      _InterlockedAnd(v9, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v8));
      v6 = v4 - (32 - (unsigned int)(a2 & 0x1F));
      ++v9;
    }
    if ( v6 >= 0x20 )
    {
      v12 = v6 >> 5;
      v6 += -32LL * (v6 >> 5);
      do
      {
        *v9++ = 0;
        --v12;
      }
      while ( v12 );
    }
    if ( v6 )
    {
      v10 = -1 << v6;
      goto LABEL_4;
    }
  }
  else
  {
    if ( v6 != 32 )
    {
      v10 = ~(((1 << v6) - 1) << v8);
LABEL_4:
      _InterlockedAnd(v9, v10);
      goto LABEL_5;
    }
    *v9 = 0;
  }
LABEL_5:
  if ( *(_QWORD *)(a1 + 24) )
    RtlClearBitsEx((__int64)&qword_140C4E650, v7, v4);
  result = *(unsigned int *)(a1 + 32);
  if ( (result & 0x20) != 0 && v4 )
  {
    do
    {
      v13 = MiMapPageInHyperSpaceWorker(v7, 0LL, 0, a4);
      v14 = (void *)v13;
      v15 = 1024LL;
      if ( (v13 & 4) != 0 )
      {
        *(_DWORD *)v13 = -2;
        v14 = (void *)(v13 + 4);
        v15 = 1023LL;
      }
      memset64(v14, 0xFFFFFFFEFFFFFFFEuLL, v15 >> 1);
      if ( (v15 & 1) != 0 )
        *((_DWORD *)v14 + v15 - 1) = -2;
      LOBYTE(v15) = 17;
      result = MiUnmapPageInHyperSpaceWorker(v13, v15, 0);
      ++v7;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
