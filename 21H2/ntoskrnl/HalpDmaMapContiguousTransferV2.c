/*
 * XREFs of HalpDmaMapContiguousTransferV2 @ 0x140458E94
 * Callers:
 *     HalpMapTransferV2 @ 0x140458184 (HalpMapTransferV2.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x14045693C (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x14045699C (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140457A42 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFlushBuffer @ 0x140513310 (HalpDmaFlushBuffer.c)
 */

void __fastcall HalpDmaMapContiguousTransferV2(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int *a5,
        char a6,
        __int64 *a7)
{
  unsigned int v11; // r14d
  unsigned int ContiguousPiece; // eax
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r10
  int v17; // [rsp+20h] [rbp-38h]
  int v18; // [rsp+28h] [rbp-30h]

  v11 = *a5;
  ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, 0LL, a4, a6, *a5);
  v13 = a4 & 0xFFF;
  v14 = (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v15 = v13 + (*(_QWORD *)(a2 + 8 * v14 + 48) << 12);
  if ( ContiguousPiece == v11
    && *(_QWORD *)(a1 + 136) >= v15 + (unsigned __int64)ContiguousPiece - 1
    && (a6
     || *(_BYTE *)(a1 + 437)
     || (v14 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1, (v14 & v15) == 0) && (v14 & v16) == 0) )
  {
    LOBYTE(v18) = 0;
    LOBYTE(v17) = a6;
    *a7 = v15;
    HalpDmaFlushBuffer(v14, a2, a4, v11, v17, v18);
  }
  else
  {
    *a7 = v13 + *a3;
    if ( a6 )
    {
      HalpDmaSyncMapBuffers(a1, a2, a4, a3, v11, a6, 0, 0);
    }
    else if ( !*(_BYTE *)(a1 + 437) )
    {
      HalpDmaSyncMapBuffers(a1, a2, a4, a3, v11, 0, 1, 0);
    }
  }
}
