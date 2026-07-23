/*
 * XREFs of HalpDmaFlushScatterTransferV3 @ 0x1404B797C
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x1403A2E80 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x1404CAB50 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B8EF0 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaFlushBuffer @ 0x1404C779C (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C8434 (HalpDmaSyncMapBuffers.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 ContiguousPiece; // r14
  __int64 v17; // r13
  __int64 v18; // rcx
  char v19; // r9
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+28h] [rbp-40h]
  int v27; // [rsp+30h] [rbp-38h]
  int v28; // [rsp+38h] [rbp-30h]

  if ( (a3 || !*(_BYTE *)(a1 + 437)) && !a6 )
  {
    for ( i = a5; i; i -= ContiguousPiece )
    {
      if ( a3 )
        v13 = *(_QWORD *)(a3 + 56);
      else
        LODWORD(v13) = 0;
      ContiguousPiece = (unsigned int)HalpDmaNextContiguousPiece(a1, a2, v13, a4, 0, i);
      v17 = a4 & 0xFFF;
      v18 = (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
      if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(v17 + (*(_QWORD *)(a2 + 8 * v18 + 48) << 12) + ContiguousPiece - 1)
        && *(_DWORD *)(a1 + 512) != 2
        || (v19 = *(_BYTE *)(a1 + 437)) == 0
        && ((v18 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1, v14, v15) - 1, (v18 & v20) != 0)
         || ((unsigned int)v18 & (unsigned int)ContiguousPiece) != 0)
        || a3 && *(_BYTE *)(a3 + 64) )
      {
        LOBYTE(v28) = a7;
        LOBYTE(v27) = 0;
        LOBYTE(v26) = 0;
        HalpDmaSyncMapBuffers(a1, a2, a4, *(_QWORD *)(a3 + 56), ContiguousPiece, v26, v27, v28);
        v21 = *(_QWORD *)(a3 + 56);
        v22 = ContiguousPiece;
        v23 = (unsigned __int64)(ContiguousPiece + v17 + 4095) >> 12;
        if ( (_DWORD)v23 )
        {
          v24 = (unsigned int)v23;
          do
          {
            v21 = *(_QWORD *)(v21 + 8);
            --v24;
          }
          while ( v24 );
        }
        *(_QWORD *)(a3 + 56) = v21;
      }
      else
      {
        if ( !v19 )
        {
          LOBYTE(v26) = a7;
          LOBYTE(v25) = 0;
          HalpDmaFlushBuffer(v18, a2, a4, (unsigned int)ContiguousPiece, v25, v26);
        }
        v22 = ContiguousPiece;
      }
      a4 += v22;
    }
    if ( a8 )
    {
      if ( a3 )
        *a8 = *(_QWORD *)(a3 + 56);
      else
        *a8 = 0LL;
    }
    if ( a3 )
      *(_QWORD *)(a3 + 56) = a3;
  }
}
