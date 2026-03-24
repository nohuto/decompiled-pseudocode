/*
 * XREFs of BiGetFirmwareType @ 0x1407849DC
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x14077950C (BiExportStoreAlterationsToFirmware.c)
 *     BcdGetSystemStorePath @ 0x1407824B4 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x14078381C (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407849A8 (BiIsLinkedToFirmwareVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403FAA60 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h]

  v2 = 0LL;
  v3 = 0LL;
  if ( byte_140CDB155 )
    return (unsigned int)dword_140C10E6C;
  v1 = 1;
  if ( (int)ZwQuerySystemInformation(90LL, (__int64)&v2) >= 0 )
  {
    v1 = 0;
    if ( (int)v3 < 3 )
      v1 = v3;
  }
  dword_140C10E6C = v1;
  result = v1;
  byte_140CDB155 = 1;
  return result;
}
