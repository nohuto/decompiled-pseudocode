/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x1406E3818
 * Callers:
 *     PnpGetSystemPdoList @ 0x1406E3760 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x1406E3800 (PnpFreeSystemPdoList.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpFreePdoDeviceList(PADAPTER_OBJECT *P)
{
  unsigned int i; // ebx

  if ( P )
  {
    for ( i = 0; i < *(_DWORD *)P; ++i )
      HalPutDmaAdapter(P[i + 1]);
    ExFreePoolWithTag(P, 0);
  }
}
