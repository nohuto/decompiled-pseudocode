/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x1406B8508
 * Callers:
 *     PnpGetSystemPdoList @ 0x1406B8450 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x1406B84F0 (PnpFreeSystemPdoList.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
