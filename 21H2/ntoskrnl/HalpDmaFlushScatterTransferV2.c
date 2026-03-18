/*
 * XREFs of HalpDmaFlushScatterTransferV2 @ 0x140458D38
 * Callers:
 *     IoFlushAdapterBuffersV2 @ 0x140393E40 (IoFlushAdapterBuffersV2.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x14045693C (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x14045699C (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140457A42 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFlushBuffer @ 0x140513310 (HalpDmaFlushBuffer.c)
 */

void __fastcall HalpDmaFlushScatterTransferV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v10; // edi
  __int64 ContiguousPiece; // r15
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+28h] [rbp-40h]

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
          if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(ContiguousPiece
                                                        + v12
                                                        + (*(_QWORD *)(a2
                                                                     + 8LL
                                                                     * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12)
                                                                     + 48) << 12)
                                                        - 1) )
            break;
          if ( !*(_BYTE *)(a1 + 437) )
          {
            v13 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
            if ( (v13 & v15) != 0 || (v14 & v13) != 0 )
              break;
            LOBYTE(v20) = 0;
            LOBYTE(v19) = 0;
            HalpDmaFlushBuffer(v13, a2, a4, (unsigned int)ContiguousPiece, v19, v20);
          }
LABEL_13:
          a4 += ContiguousPiece;
          v10 -= ContiguousPiece;
          if ( !v10 )
            goto LABEL_14;
        }
        HalpDmaSyncMapBuffers(a1, a2, a4, *(_QWORD **)(a3 + 56), ContiguousPiece, 0, 0, 0);
        v16 = *(_QWORD *)(a3 + 56);
        v17 = (unsigned __int64)(ContiguousPiece + v12 + 4095) >> 12;
        if ( (_DWORD)v17 )
        {
          v18 = (unsigned int)v17;
          do
          {
            v16 = *(_QWORD *)(v16 + 8);
            --v18;
          }
          while ( v18 );
        }
        *(_QWORD *)(a3 + 56) = v16;
        goto LABEL_13;
      }
LABEL_14:
      *(_QWORD *)(a3 + 56) = a3;
    }
  }
}
