/*
 * XREFs of BiSetFirmwareModified @ 0x14039B498
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1405C3B34 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x140781D00 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14078381C (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x14096EC18 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x1407821E4 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140784A64 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
