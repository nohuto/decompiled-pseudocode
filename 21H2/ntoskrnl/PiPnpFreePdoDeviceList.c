/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140764B98
 * Callers:
 *     PnpGetSystemPdoList @ 0x140764AE0 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x140764B80 (PnpFreeSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpFreePdoDeviceList(PVOID *P)
{
  unsigned int i; // ebx

  if ( P )
  {
    for ( i = 0; i < *(_DWORD *)P; ++i )
      ObfDereferenceObject(P[i + 1]);
    ExFreePoolWithTag(P, 0);
  }
}
