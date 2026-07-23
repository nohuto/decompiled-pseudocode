/*
 * XREFs of _RtlCheckPortableOperatingSystem@4 @ 0x4B351030
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlCheckRegistryKey@8 @ 0x4B3510F0 (_RtlCheckRegistryKey@8.c)
 */

NTSTATUS __cdecl RtlCheckPortableOperatingSystem(PBOOLEAN IsPortable)
{
  int RegistryValues; // esi
  size_t v3; // [esp-4h] [ebp-44h]
  int v4[14]; // [esp+4h] [ebp-3Ch] BYREF
  int v5; // [esp+3Ch] [ebp-4h] BYREF

  RegistryValues = 0;
  v5 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_5;
  LODWORD(v3) = 56;
  memset(v4, 0, v3);
  v4[1] = 292;
  v4[2] = (int)L"PortableOperatingSystem";
  v4[3] = (int)&v5;
  v4[4] = 0x4000000;
  RegistryValues = RtlpQueryRegistryValues(2, 0, (int)v4, 0, 0, 1);
  if ( RegistryValues == -1073741772 )
    RegistryValues = -1073741275;
  if ( RegistryValues >= 0 )
LABEL_5:
    *IsPortable = v5 != 0;
  return RegistryValues;
}
