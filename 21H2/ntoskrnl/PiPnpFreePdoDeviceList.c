/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140617928
 * Callers:
 *     PnpGetSystemPdoList @ 0x140617870 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x140617910 (PnpFreeSystemPdoList.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
