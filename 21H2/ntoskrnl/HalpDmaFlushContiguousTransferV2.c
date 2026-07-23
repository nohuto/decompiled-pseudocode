/*
 * XREFs of HalpDmaFlushContiguousTransferV2 @ 0x1404CDA6C
 * Callers:
 *     IoFlushAdapterBuffersV2 @ 0x140389FB0 (IoFlushAdapterBuffersV2.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B8EF0 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaFlushBuffer @ 0x1404C779C (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C8434 (HalpDmaSyncMapBuffers.c)
 */

void __fastcall HalpDmaFlushContiguousTransferV2(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6)
{
  unsigned int ContiguousPiece; // eax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  char v14; // r10
  char v15; // r11

  ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, 0LL, a4, a6, a5);
  v11 = (a4 & 0xFFF) + (*(_QWORD *)(a2 + 8LL * (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12);
  if ( ContiguousPiece != a5 || (v12 = v11 + ContiguousPiece, *(_QWORD *)(a1 + 136) < v12 - 1) )
  {
    v14 = 0;
    if ( a6 )
      return;
    goto LABEL_10;
  }
  if ( !a6 && !*(_BYTE *)(a1 + 437) )
  {
    v13 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
    if ( (v13 & v11) == 0 && (v13 & v12) == 0 )
    {
      if ( !v15 )
        HalpDmaFlushBuffer(v13, a2, a4, a5, v14, v14);
      return;
    }
LABEL_10:
    HalpDmaSyncMapBuffers(a1, a2, a4, a3, a5, v14, v14, v14);
  }
}
