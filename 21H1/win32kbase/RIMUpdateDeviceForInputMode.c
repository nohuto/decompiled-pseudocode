/*
 * XREFs of RIMUpdateDeviceForInputMode @ 0x1C0048660
 * Callers:
 *     RIMSetDeviceInputMode @ 0x1C0048570 (RIMSetDeviceInputMode.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C00485FC (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     RIMConfigurePointerDevice @ 0x1C0169CCC (RIMConfigurePointerDevice.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C016AC14 (RIMSendLatencyMgtDeviceRequest.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01D3468 (ApiSetSetUserPTPEnabledPreference.c)
 */

__int64 __fastcall RIMUpdateDeviceForInputMode(__int64 a1, int a2)
{
  unsigned int v5; // edi
  __int64 v6; // rbp

  if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
  {
    v5 = 0;
    if ( !a2 )
    {
      v6 = *(_QWORD *)(a1 + 336);
      RIMConfigurePointerDevice(v6, a1, *(_QWORD *)(a1 + 464));
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 480) + 24LL) == 7 )
        ApiSetSetUserPTPEnabledPreference(a1, *(_QWORD *)(a1 + 464), v6);
    }
    if ( (*(_DWORD *)(a1 + 184) & 0x2000) == 0 )
    {
      LOBYTE(v5) = a2 != 0;
      RIMSendLatencyMgtDeviceRequest(a1, v5);
    }
  }
  return 0LL;
}
