/*
 * XREFs of MiMirrorOmitPagesFromCopy @ 0x140385FAC
 * Callers:
 *     MiMirrorNodeLargePages @ 0x140385A5C (MiMirrorNodeLargePages.c)
 *     MiMirrorReduceBlackWrites @ 0x140385DC0 (MiMirrorReduceBlackWrites.c)
 *     MiMirrorRemoveBlackChildPartitionPages @ 0x140534F50 (MiMirrorRemoveBlackChildPartitionPages.c)
 *     MiMirrorRemoveInactivePages @ 0x140534FB4 (MiMirrorRemoveInactivePages.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x1409B1C08 (MiRemoveEnclavePagesFromMirror.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 */

char __fastcall MiMirrorOmitPagesFromCopy(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  volatile signed __int32 *v8; // rdi
  unsigned int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  void *v13; // r8
  unsigned __int64 v14; // rdx

  v3 = a3;
  v5 = a3;
  v6 = a2;
  v7 = a2 & 0x1F;
  v8 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (a2 >> 5));
  if ( v7 + v5 > 0x20 )
  {
    if ( (a2 & 0x1F) != 0 )
    {
      _InterlockedAnd(v8, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v7));
      v5 = v3 - (32 - (unsigned int)(a2 & 0x1F));
      ++v8;
    }
    if ( v5 >= 0x20 )
    {
      v11 = v5 >> 5;
      v5 += -32LL * (v5 >> 5);
      do
      {
        *v8++ = 0;
        --v11;
      }
      while ( v11 );
    }
    if ( v5 )
    {
      v9 = -1 << v5;
      goto LABEL_4;
    }
  }
  else
  {
    if ( v5 != 32 )
    {
      v9 = ~(((1 << v5) - 1) << v7);
LABEL_4:
      _InterlockedAnd(v8, v9);
      goto LABEL_5;
    }
    *v8 = 0;
  }
LABEL_5:
  if ( *(_QWORD *)(a1 + 24) )
    RtlClearBitsEx((__int64)&qword_140C4E750, v6, v3);
  v10 = *(_DWORD *)(a1 + 32);
  if ( (v10 & 0x20) != 0 && v3 )
  {
    do
    {
      v12 = MiMapPageInHyperSpaceWorker(v6, 0LL, 0);
      v13 = (void *)v12;
      v14 = 1024LL;
      if ( (v12 & 4) != 0 )
      {
        *(_DWORD *)v12 = -2;
        v13 = (void *)(v12 + 4);
        v14 = 1023LL;
      }
      memset64(v13, 0xFFFFFFFEFFFFFFFEuLL, v14 >> 1);
      if ( (v14 & 1) != 0 )
        *((_DWORD *)v13 + v14 - 1) = -2;
      LOBYTE(v10) = MiUnmapPageInHyperSpaceWorker(v12, 0x11u, 0);
      ++v6;
      --v3;
    }
    while ( v3 );
  }
  return v10;
}
