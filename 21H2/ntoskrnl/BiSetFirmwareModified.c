/*
 * XREFs of BiSetFirmwareModified @ 0x14039B5E8
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1405C3D64 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x140781EC0 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x1407839DC (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x14096EDF8 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x1407823A4 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140784C24 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
