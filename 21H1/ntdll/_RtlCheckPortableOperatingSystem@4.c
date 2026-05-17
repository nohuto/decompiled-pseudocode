/*
 * XREFs of _RtlCheckPortableOperatingSystem@4 @ 0x4B351030
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlCheckRegistryKey@8 @ 0x4B3510F0 (_RtlCheckRegistryKey@8.c)
 */

int __stdcall RtlCheckPortableOperatingSystem(bool *a1)
{
  int RegistryValues; // esi
  _DWORD v3[14]; // [esp+4h] [ebp-3Ch] BYREF
  int v4; // [esp+3Ch] [ebp-4h] BYREF

  RegistryValues = 0;
  v4 = 0;
  if ( (int)RtlCheckRegistryKey(2, L"MiniNT") >= 0 )
    goto LABEL_5;
  memset(v3, 0, sizeof(v3));
  v3[1] = 292;
  v3[2] = L"PortableOperatingSystem";
  v3[3] = &v4;
  v3[4] = 0x4000000;
  RegistryValues = RtlpQueryRegistryValues(2, 0, (int)v3, 0, 0, 1);
  if ( RegistryValues == -1073741772 )
    RegistryValues = -1073741275;
  if ( RegistryValues >= 0 )
LABEL_5:
    *a1 = v4 != 0;
  return RegistryValues;
}
