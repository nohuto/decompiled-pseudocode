/*
 * XREFs of IoFlushAdapterBuffersV3 @ 0x1404CAB50
 * Callers:
 *     IoFlushAdapterBuffers @ 0x140389F70 (IoFlushAdapterBuffers.c)
 * Callees:
 *     HalpDmaFlushContiguousTransferV3 @ 0x1404B782C (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404B797C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaFreeLa @ 0x1404B7B38 (HalpDmaFreeLa.c)
 *     HalpDmaControllerFlushChannel @ 0x1404CE850 (HalpDmaControllerFlushChannel.c)
 */

char __fastcall IoFlushAdapterBuffersV3(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  bool v10; // zf
  ULONG_PTR v11; // rdx

  if ( a5 )
  {
    if ( *(_DWORD *)(a1 + 512) == 2 )
    {
      v10 = *(_BYTE *)(a3 + 64) == 0;
      v11 = *(_QWORD *)(a3 + 24);
      *(_QWORD *)(a3 + 40) = v11;
      if ( v10 )
      {
        HalpDmaFreeLa(a1, v11);
        *(_QWORD *)(a3 + 32) = 0LL;
      }
    }
    if ( !*(_BYTE *)(a1 + 433) )
      HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 360), *(unsigned int *)(a1 + 372));
    if ( *(_BYTE *)(a1 + 432) )
    {
      if ( a3 )
        *(_QWORD *)(a3 + 56) = a3;
      if ( *(_BYTE *)(a1 + 434) )
        HalpDmaFlushScatterTransferV3(a1, a2, a3, a4, a5, a6, 0, 0LL);
      else
        HalpDmaFlushContiguousTransferV3(a1, a2, a3, a4, a5, a6, 0, 0LL);
    }
  }
  return 1;
}
