/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140707208
 * Callers:
 *     PnpGetSystemPdoList @ 0x140707150 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x1407071F0 (PnpFreeSystemPdoList.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
