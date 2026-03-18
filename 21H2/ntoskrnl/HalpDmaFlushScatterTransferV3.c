/*
 * XREFs of HalpDmaFlushScatterTransferV3 @ 0x140504198
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140516D80 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x140517BAC (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x14045693C (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x14045699C (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140457A42 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFlushBuffer @ 0x140513310 (HalpDmaFlushBuffer.c)
 */

void __fastcall HalpDmaFlushScatterTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  int i; // esi
  __int64 v13; // r8
  __int64 ContiguousPiece; // r14
  __int64 v15; // r13
  __int64 v16; // rcx
  char v17; // r9
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+28h] [rbp-40h]

  if ( (a3 || !*(_BYTE *)(a1 + 437)) && !a6 )
  {
    for ( i = a5; i; i -= ContiguousPiece )
    {
      if ( a3 )
        v13 = *(_QWORD *)(a3 + 56);
      else
        v13 = 0LL;
      ContiguousPiece = (unsigned int)HalpDmaNextContiguousPiece(a1, a2, v13, a4, 0, i);
      v15 = a4 & 0xFFF;
      v16 = (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
      if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(v15 + (*(_QWORD *)(a2 + 8 * v16 + 48) << 12) + ContiguousPiece - 1)
        && *(_DWORD *)(a1 + 512) != 3
        || (v17 = *(_BYTE *)(a1 + 437)) == 0
        && ((v16 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1, (v16 & v18) != 0)
         || ((unsigned int)v16 & (unsigned int)ContiguousPiece) != 0)
        || a3 && *(_BYTE *)(a3 + 64) )
      {
        HalpDmaSyncMapBuffers(a1, a2, a4, *(_QWORD **)(a3 + 56), ContiguousPiece, 0, 0, a7);
        v19 = *(_QWORD *)(a3 + 56);
        v20 = ContiguousPiece;
        v21 = (unsigned __int64)(ContiguousPiece + v15 + 4095) >> 12;
        if ( (_DWORD)v21 )
        {
          v22 = (unsigned int)v21;
          do
          {
            v19 = *(_QWORD *)(v19 + 8);
            --v22;
          }
          while ( v22 );
        }
        *(_QWORD *)(a3 + 56) = v19;
      }
      else
      {
        if ( !v17 )
        {
          LOBYTE(v24) = a7;
          LOBYTE(v23) = 0;
          HalpDmaFlushBuffer(v16, a2, a4, (unsigned int)ContiguousPiece, v23, v24);
        }
        v20 = ContiguousPiece;
      }
      a4 += v20;
    }
    if ( a8 )
    {
      if ( !a3 )
      {
        *a8 = 0LL;
        return;
      }
      *a8 = *(_QWORD *)(a3 + 56);
    }
    else if ( !a3 )
    {
      return;
    }
    *(_QWORD *)(a3 + 56) = a3;
  }
}
