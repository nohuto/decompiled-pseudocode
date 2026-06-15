/*
 * XREFs of IsSpatialComboEndpointDeterminationDisabled @ 0x18005E3F4
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x18005E1BC (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006C65C (IsGetDefaultSpatialRenderingModePresent.c)
 */

bool __fastcall IsSpatialComboEndpointDeterminationDisabled(__int64 a1)
{
  int v1; // ebx
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( dword_18019D844 == -1 )
  {
    v1 = 1;
    dword_18019D844 = 1;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(a1) )
      v1 = IsSpatialSpeakerProtectionCheckRequired();
    if ( v1 )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_18019D844,
        &pcbData);
    }
  }
  return dword_18019D844 != 0;
}
