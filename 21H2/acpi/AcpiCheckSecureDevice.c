/*
 * XREFs of AcpiCheckSecureDevice @ 0x1C00B55A8
 * Callers:
 *     AcpiSdevIdentifierInterface @ 0x1C00B5608 (AcpiSdevIdentifierInterface.c)
 * Callees:
 *     AcpiIsDeviceSecure @ 0x1C00A264C (AcpiIsDeviceSecure.c)
 */

bool __fastcall AcpiCheckSecureDevice(__int64 a1)
{
  __int64 v1; // rdx
  char IsDeviceSecure; // al
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  if ( (v1 & 0x80000000) == 0 )
  {
    IsDeviceSecure = AcpiIsDeviceSecure(a1);
    v4 = *(_QWORD *)(a1 + 960);
    if ( IsDeviceSecure )
      v4 |= 0x2000000000uLL;
    v1 = v4 | 0x80000000LL;
    *(_QWORD *)(a1 + 960) = v1;
  }
  return (v1 & 0x2000000000LL) != 0;
}
