/*
 * XREFs of HalpDmaMapScatterTransferV3 @ 0x1404B7E30
 * Callers:
 *     HalpMapTransferV3 @ 0x1404CAA78 (HalpMapTransferV3.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B8EF0 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaFlushBuffer @ 0x1404C779C (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C8434 (HalpDmaSyncMapBuffers.c)
 */

_QWORD *__fastcall HalpDmaMapScatterTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  _QWORD *result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r10d
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r12
  _QWORD *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  bool v23; // zf
  int v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+28h] [rbp-30h]
  char v26; // [rsp+30h] [rbp-28h]
  char v27; // [rsp+38h] [rbp-20h]

  result = (_QWORD *)HalpDmaNextContiguousPiece(a1, a2, a3, a4, a6, *a5);
  v15 = (unsigned int)result;
  *a5 = (_DWORD)result;
  if ( !(_DWORD)result )
    return result;
  v16 = a4 & 0xFFF;
  v17 = (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v18 = v16 + (*(_QWORD *)(a2 + 8 * v17 + 48) << 12);
  if ( a3 )
  {
    if ( (v19 = (unsigned int)result, *(_QWORD *)(a1 + 136) < v18 + (unsigned __int64)(unsigned int)result - 1)
      && *(_DWORD *)(a1 + 512) != 2
      || !*(_BYTE *)(a1 + 437)
      && !a6
      && ((v17 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1, v13, v14) - 1, (v17 & v18) != 0)
       || ((unsigned int)v17 & v15) != 0)
      || *(_BYTE *)(a3 + 64) )
    {
      v20 = *(_QWORD **)(a3 + 56);
      *a8 = v16 + *v20;
      if ( a6 )
      {
        v27 = a7;
        v26 = 0;
        LOBYTE(v25) = a6;
      }
      else
      {
        if ( *(_BYTE *)(a1 + 437) )
        {
LABEL_15:
          v21 = *(_QWORD *)(a3 + 56);
          result = (_QWORD *)((unsigned __int64)(v19 + v16 + 4095) >> 12);
          if ( (_DWORD)result )
          {
            v22 = (unsigned int)result;
            do
            {
              v21 = *(_QWORD *)(v21 + 8);
              --v22;
            }
            while ( v22 );
          }
          *(_QWORD *)(a3 + 56) = v21;
          return result;
        }
        v27 = a7;
        v26 = 1;
        LOBYTE(v25) = 0;
      }
      HalpDmaSyncMapBuffers(a1, a2, a4, v20, v15, v25, v26, v27);
      goto LABEL_15;
    }
  }
  v23 = *(_BYTE *)(a1 + 437) == 0;
  result = a8;
  *a8 = v18;
  if ( v23 )
  {
    LOBYTE(v25) = a7;
    LOBYTE(v24) = a6;
    return (_QWORD *)HalpDmaFlushBuffer(v17, a2, a4, v15, v24, v25);
  }
  return result;
}
