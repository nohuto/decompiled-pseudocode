/*
 * XREFs of BiSetFirmwareModified @ 0x14039870C
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1405BE684 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x14076F920 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14077143C (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x14096B730 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x14076FE04 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140772684 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
