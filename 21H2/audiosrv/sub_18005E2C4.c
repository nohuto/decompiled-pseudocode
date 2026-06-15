/*
 * XREFs of sub_18005E2C4 @ 0x18005E2C4
 * Callers:
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18005E08C (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 */

bool __fastcall sub_18005E2C4(__int64 a1)
{
  int v1; // ebx
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( dword_18019D844 == -1 )
  {
    v1 = 1;
    dword_18019D844 = 1;
    if ( (unsigned __int8)sub_18006C4AC(a1) )
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
