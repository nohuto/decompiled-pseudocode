/*
 * XREFs of IoFlushAdapterBuffersV2 @ 0x140389FB0
 * Callers:
 *     IoFlushAdapterBuffers @ 0x140389F70 (IoFlushAdapterBuffers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpDmaFlushBuffer @ 0x1404C779C (HalpDmaFlushBuffer.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1404CDA6C (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x1404CDB88 (HalpDmaFlushScatterTransferV2.c)
 */

char __fastcall IoFlushAdapterBuffersV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  if ( a5 )
  {
    if ( a1 && !*(_BYTE *)(a1 + 433) )
      (*(void (__fastcall **)(_QWORD))(DmaDispatch + 48))(*(_QWORD *)(a1 + 424));
    if ( a3 )
    {
      if ( a1 && *(_BYTE *)(a1 + 434) )
        HalpDmaFlushScatterTransferV2(a1, a2, a3, a4, a5, a6);
      else
        HalpDmaFlushContiguousTransferV2(a1, a2, a3, a4, a5, a6);
    }
    else if ( !a6 && !*(_BYTE *)(a1 + 437) )
    {
      HalpDmaFlushBuffer(a1, a2, a4, a5, 0, 0);
    }
  }
  return 1;
}
