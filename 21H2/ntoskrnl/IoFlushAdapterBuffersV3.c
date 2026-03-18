/*
 * XREFs of IoFlushAdapterBuffersV3 @ 0x140517BAC
 * Callers:
 *     IoFlushAdapterBuffers @ 0x140393E00 (IoFlushAdapterBuffers.c)
 * Callees:
 *     Feature_Servicing_DmarPremapLaHibernate__private_IsEnabled @ 0x140416F84 (Feature_Servicing_DmarPremapLaHibernate__private_IsEnabled.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x140504048 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x140504198 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaFreeLa @ 0x140504358 (HalpDmaFreeLa.c)
 *     HalpDmaControllerFlushChannel @ 0x1405192A0 (HalpDmaControllerFlushChannel.c)
 */

char __fastcall IoFlushAdapterBuffersV3(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  if ( a5 )
  {
    if ( *(_DWORD *)(a1 + 512) == 3 )
    {
      if ( *(_BYTE *)(a3 + 64) )
      {
        if ( (unsigned int)Feature_Servicing_DmarPremapLaHibernate__private_IsEnabled() )
          *(_DWORD *)(a3 + 16) = 0;
      }
      else
      {
        HalpDmaFreeLa(a1, (__int64 *)(a3 + 24));
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
