/*
 * XREFs of HalpDmaMapContiguousTransferV2 @ 0x1404CDCEC
 * Callers:
 *     HalpMapTransferV2 @ 0x1404CCBD4 (HalpMapTransferV2.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B8EF0 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaFlushBuffer @ 0x1404C779C (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C8434 (HalpDmaSyncMapBuffers.c)
 */

void __fastcall HalpDmaMapContiguousTransferV2(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4,
        unsigned int *a5,
        char a6,
        _QWORD *a7)
{
  unsigned int v11; // r14d
  unsigned int ContiguousPiece; // eax
  unsigned __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // r9

  v11 = *a5;
  ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, 0LL, a4, a6, *a5);
  v13 = a4 & 0xFFF;
  v14 = (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v15 = *(_QWORD *)(a2 + 8 * v14 + 48);
  if ( ContiguousPiece == v11
    && *(_QWORD *)(a1 + 136) >= v13 + (*(_QWORD *)(a2 + 8 * v14 + 48) << 12) + ContiguousPiece - 1
    && (a6
     || *(_BYTE *)(a1 + 437)
     || (v14 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1, (v14 & v17) == 0) && (v14 & v16) == 0) )
  {
    *a7 = v13 + (v15 << 12);
    HalpDmaFlushBuffer(v14, a2, a4, v11, a6, 0);
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
