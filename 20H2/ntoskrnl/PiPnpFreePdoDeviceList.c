/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140721368
 * Callers:
 *     PnpGetSystemPdoList @ 0x1407212B0 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x140721350 (PnpFreeSystemPdoList.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
