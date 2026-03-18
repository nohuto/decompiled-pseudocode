/*
 * XREFs of HalpDmaMapScatterTransferV3 @ 0x140504644
 * Callers:
 *     HalpMapTransferV3 @ 0x140517AD4 (HalpMapTransferV3.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x14045693C (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x14045699C (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140457A42 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFlushBuffer @ 0x140513310 (HalpDmaFlushBuffer.c)
 */

_QWORD *__fastcall HalpDmaMapScatterTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        char a6,
        char a7,
        __int64 *a8)
{
  _QWORD *result; // rax
  unsigned int v13; // r10d
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r12
  _QWORD *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  bool v21; // zf
  int v22; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+28h] [rbp-30h]

  result = (_QWORD *)HalpDmaNextContiguousPiece(a1, a2, a3, a4, a6, *a5);
  v13 = (unsigned int)result;
  *a5 = (int)result;
  if ( (_DWORD)result )
  {
    v14 = a4 & 0xFFF;
    v15 = (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
    v16 = v14 + (*(_QWORD *)(a2 + 8 * v15 + 48) << 12);
    if ( a3
      && ((v17 = (unsigned int)result, *(_QWORD *)(a1 + 136) < v16 + (unsigned __int64)(unsigned int)result - 1)
       && *(_DWORD *)(a1 + 512) != 3
       || !*(_BYTE *)(a1 + 437)
       && !a6
       && ((v15 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1, (v15 & v16) != 0)
        || ((unsigned int)v15 & v13) != 0)
       || *(_BYTE *)(a3 + 64)) )
    {
      v18 = *(_QWORD **)(a3 + 56);
      *a8 = v14 + *v18;
      if ( a6 )
      {
        HalpDmaSyncMapBuffers(a1, a2, a4, v18, v13, a6, 0, a7);
      }
      else if ( !*(_BYTE *)(a1 + 437) )
      {
        HalpDmaSyncMapBuffers(a1, a2, a4, v18, v13, 0, 1, a7);
      }
      v19 = *(_QWORD *)(a3 + 56);
      result = (_QWORD *)((unsigned __int64)(v17 + v14 + 4095) >> 12);
      if ( (_DWORD)result )
      {
        v20 = (unsigned int)result;
        do
        {
          v19 = *(_QWORD *)(v19 + 8);
          --v20;
        }
        while ( v20 );
      }
      *(_QWORD *)(a3 + 56) = v19;
    }
    else
    {
      v21 = *(_BYTE *)(a1 + 437) == 0;
      result = a8;
      *a8 = v16;
      if ( v21 )
      {
        LOBYTE(v23) = a7;
        LOBYTE(v22) = a6;
        return (_QWORD *)HalpDmaFlushBuffer(v15, a2, a4, v13, v22, v23);
      }
    }
  }
  return result;
}
