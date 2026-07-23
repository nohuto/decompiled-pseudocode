/*
 * XREFs of BiGetFirmwareType @ 0x1407725FC
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x14076652C (BiExportStoreAlterationsToFirmware.c)
 *     BcdGetSystemStorePath @ 0x1407700D4 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x14077143C (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407725C8 (BiIsLinkedToFirmwareVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F3C80 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h]

  SystemInformation = 0LL;
  v3 = 0LL;
  if ( byte_140CDAF55 )
    return (unsigned int)dword_140C10DD4;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( (int)v3 < 3 )
      v1 = v3;
  }
  dword_140C10DD4 = v1;
  result = v1;
  byte_140CDAF55 = 1;
  return result;
}
