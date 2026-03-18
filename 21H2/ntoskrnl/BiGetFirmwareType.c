/*
 * XREFs of BiGetFirmwareType @ 0x1408140B4
 * Callers:
 *     BiIsLinkedToFirmwareVariable @ 0x140803438 (BiIsLinkedToFirmwareVariable.c)
 *     BiExportStoreAlterationsToFirmware @ 0x1408074F4 (BiExportStoreAlterationsToFirmware.c)
 *     BcdGetSystemStorePath @ 0x140812698 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x140813744 (BiOpenSystemStore.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h]

  v2 = 0LL;
  v3 = 0LL;
  if ( byte_140CE1AD6 )
    return (unsigned int)dword_140C0B234;
  v1 = 1;
  if ( (int)ZwQuerySystemInformation(90LL, (__int64)&v2) >= 0 )
  {
    v1 = 0;
    if ( (int)v3 < 3 )
      v1 = v3;
  }
  dword_140C0B234 = v1;
  result = v1;
  byte_140CE1AD6 = 1;
  return result;
}
