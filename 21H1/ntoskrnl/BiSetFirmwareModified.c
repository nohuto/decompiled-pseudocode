/*
 * XREFs of BiSetFirmwareModified @ 0x140397F78
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1405BDF64 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x14076D510 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14076F02C (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x14096A390 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x14076D9F4 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140770274 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
