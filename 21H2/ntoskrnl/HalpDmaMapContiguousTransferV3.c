/*
 * XREFs of HalpDmaMapContiguousTransferV3 @ 0x1404B7D0C
 * Callers:
 *     HalpMapTransferV3 @ 0x1404CAA78 (HalpMapTransferV3.c)
 * Callees:
 *     HalpDmaNextContiguousPiece @ 0x1404B8EF0 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaFlushBuffer @ 0x1404C779C (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C8434 (HalpDmaSyncMapBuffers.c)
 */

__int64 *__fastcall HalpDmaMapContiguousTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        char a6,
        char a7,
        __int64 *a8)
{
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 *result; // rax
  int v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+30h] [rbp-28h]
  char v18; // [rsp+38h] [rbp-20h]

  v12 = *a5;
  if ( (unsigned int)HalpDmaNextContiguousPiece(a1, a2, 0, a4, a6, *a5) == v12 && !*(_BYTE *)(a3 + 64) )
  {
    v13 = (a4 & 0xFFF)
        + (*(_QWORD *)(a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12);
    *a8 = v13;
    LOBYTE(v16) = a7;
    LOBYTE(v15) = a6;
    return (__int64 *)HalpDmaFlushBuffer(v13, a2, a4, v12, v15, v16);
  }
  result = a8;
  *a8 = *(_QWORD *)a3 + (a4 & 0xFFF);
  if ( a6 )
  {
    v18 = a7;
    v17 = 0;
    LOBYTE(v16) = a6;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 437) )
      return result;
    v18 = a7;
    v17 = 1;
    LOBYTE(v16) = 0;
  }
  return (__int64 *)HalpDmaSyncMapBuffers(a1, a2, a4, a3, v12, v16, v17, v18);
}
