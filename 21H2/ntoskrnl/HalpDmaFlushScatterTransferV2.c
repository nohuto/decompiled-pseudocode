/*
 * XREFs of HalpDmaFlushScatterTransferV2 @ 0x1404CDB88
 * Callers:
 *     IoFlushAdapterBuffersV2 @ 0x140389FB0 (IoFlushAdapterBuffersV2.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B8EF0 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaFlushBuffer @ 0x1404C779C (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C8434 (HalpDmaSyncMapBuffers.c)
 */

void __fastcall HalpDmaFlushScatterTransferV2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6)
{
  unsigned int v10; // edi
  __int64 ContiguousPiece; // r15
  unsigned __int64 v12; // r12
  __int64 v13; // rcx
  char v14; // r9
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx

  if ( a3 )
  {
    *(_QWORD *)(a3 + 56) = a3;
    if ( !a6 )
    {
      v10 = a5;
      if ( a5 )
      {
        while ( 1 )
        {
          ContiguousPiece = (unsigned int)HalpDmaNextContiguousPiece(a1, a2, a3, a4, 0, v10);
          v12 = a4 & 0xFFF;
          if ( *(_QWORD *)(a1 + 136) < v12
                                     + (*(_QWORD *)(a2 + 8LL * (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12)
                                     + ContiguousPiece
                                     - 1 )
            break;
          if ( !*(_BYTE *)(a1 + 437) )
          {
            v13 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
            if ( (v13 & v16) != 0 || (v15 & v13) != 0 )
              break;
            if ( !v14 )
              HalpDmaFlushBuffer(v13, a2, a4, ContiguousPiece, 0, 0);
          }
LABEL_14:
          a4 += ContiguousPiece;
          v10 -= ContiguousPiece;
          if ( !v10 )
            goto LABEL_15;
        }
        HalpDmaSyncMapBuffers(a1, a2, a4, *(_QWORD **)(a3 + 56), ContiguousPiece, 0, 0, 0);
        v17 = *(_QWORD *)(a3 + 56);
        v18 = (v12 + ContiguousPiece + 4095) >> 12;
        if ( (_DWORD)v18 )
        {
          v19 = (unsigned int)v18;
          do
          {
            v17 = *(_QWORD *)(v17 + 8);
            --v19;
          }
          while ( v19 );
        }
        *(_QWORD *)(a3 + 56) = v17;
        goto LABEL_14;
      }
LABEL_15:
      *(_QWORD *)(a3 + 56) = a3;
    }
  }
}
