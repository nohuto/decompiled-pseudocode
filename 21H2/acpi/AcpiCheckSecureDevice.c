/*
 * XREFs of AcpiCheckSecureDevice @ 0x1C0094A0C
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0097DD0 (PnpBiosGetDeviceResourceList.c)
 *     AcpiSdevIdentifierInterface @ 0x1C00B4CE0 (AcpiSdevIdentifierInterface.c)
 * Callees:
 *     AcpiIsDeviceSecure @ 0x1C00A0614 (AcpiIsDeviceSecure.c)
 */

bool __fastcall AcpiCheckSecureDevice(__int64 a1)
{
  __int64 v1; // rdx
  char IsDeviceSecure; // al
  __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 1000);
  if ( (v1 & 0x80000000) == 0 )
  {
    IsDeviceSecure = AcpiIsDeviceSecure();
    v5 = *(_QWORD *)(a1 + 1000);
    if ( IsDeviceSecure )
      v5 |= 0x2000000000uLL;
    v1 = v5 | 0x80000000LL;
    *(_QWORD *)(a1 + 1000) = v1;
  }
  return (v1 & 0x2000000000LL) != 0;
}
