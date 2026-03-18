/*
 * XREFs of BiSetFirmwareModified @ 0x14039ABCC
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1405C2304 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x14077DF20 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14077FA3C (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x140971500 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x14077E404 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140780C84 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
